//
// $Id$
//

//
// Copyright (c) 2001-2015, Andrew Aksyonoff
// Copyright (c) 2008-2015, Sphinx Technologies Inc
// All rights reserved
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License. You should have
// received a copy of the GPL license along with this program; if you
// did not, you can find it at http://www.gnu.org/
//

#ifndef _sphinxint_
#define _sphinxint_

#include "sphinx.h"
#include "sphinxfilter.h"
#include "sphinxrt.h"
#include "sphinxquery.h"
#include "sphinxexcerpt.h"
#include "sphinxudf.h"

#include <sys/stat.h>
#include <fcntl.h>
#include <float.h>

//////////////////////////////////////////////////////////////////////////
// INTERNAL CONSTANTS
//////////////////////////////////////////////////////////////////////////

#ifdef O_BINARY
#define SPH_O_BINARY O_BINARY
#else
#define SPH_O_BINARY 0
#endif

#define SPH_O_READ	( O_RDONLY | SPH_O_BINARY )
#define SPH_O_NEW	( O_CREAT | O_RDWR | O_TRUNC | SPH_O_BINARY )

#define MVA_DOWNSIZE		DWORD			// MVA32 offset type
#define MVA_OFFSET_MASK		0x7fffffffUL	// MVA offset mask
#define MVA_ARENA_FLAG		0x80000000UL	// MVA global-arena flag

#define DEFAULT_MAX_MATCHES 1000

//////////////////////////////////////////////////////////////////////////

const DWORD		INDEX_MAGIC_HEADER			= 0x58485053;		///< my magic 'SPHX' header
const DWORD		INDEX_FORMAT_VERSION		= 42;				///< my format version

const char		MAGIC_SYNONYM_WHITESPACE	= 1;				// used internally in tokenizer only
const char		MAGIC_CODE_SENTENCE			= 2;				// emitted from tokenizer on sentence boundary
const char		MAGIC_CODE_PARAGRAPH		= 3;				// emitted from stripper (and passed via tokenizer) on paragraph boundary
const char		MAGIC_CODE_ZONE				= 4;				// emitted from stripper (and passed via tokenizer) on zone boundary; followed by zero-terminated zone name

const char		MAGIC_WORD_HEAD				= 1;				// prepended to keyword by source, stored in (crc) dictionary
const char		MAGIC_WORD_TAIL				= 1;				// appended to keyword by source, stored in (crc) dictionary
const char		MAGIC_WORD_HEAD_NONSTEMMED	= 2;				// prepended to keyword by source, stored in dictionary
const char		MAGIC_WORD_BIGRAM			= 3;				// used as a bigram (keyword pair) separator, stored in dictionary

extern const char *		MAGIC_WORD_SENTENCE;	///< value is "\3sentence"
extern const char *		MAGIC_WORD_PARAGRAPH;	///< value is "\3paragraph"

//////////////////////////////////////////////////////////////////////////
// INTERNAL GLOBALS
//////////////////////////////////////////////////////////////////////////

/// binlog, defined in sphinxrt.cpp
extern class ISphBinlog *		g_pBinlog;

/// costs for max_predicted_time limits, defined in sphinxsearch.cpp
/// measured in nanoseconds (that is, 1e-9)
extern int g_iPredictorCostSkip;
extern int g_iPredictorCostDoc;
extern int g_iPredictorCostHit;
extern int g_iPredictorCostMatch;

extern bool g_bJsonStrict;
extern bool g_bJsonAutoconvNumbers;
extern bool g_bJsonKeynamesToLowercase;

//////////////////////////////////////////////////////////////////////////
// INTERNAL HELPER FUNCTIONS, CLASSES, ETC
//////////////////////////////////////////////////////////////////////////

#define SPH_QUERY_STATES \
	SPH_QUERY_STATE ( UNKNOWN,		"unknown" ) \
	SPH_QUERY_STATE ( NET_READ,		"net_read" ) \
	SPH_QUERY_STATE ( IO,			"io" ) \
	SPH_QUERY_STATE ( DIST_CONNECT,	"dist_connect" ) \
	SPH_QUERY_STATE ( LOCAL_DF,		"local_df" ) \
	SPH_QUERY_STATE ( LOCAL_SEARCH,	"local_search" ) \
	SPH_QUERY_STATE ( SQL_PARSE,	"sql_parse" ) \
	SPH_QUERY_STATE ( FULLSCAN,		"fullscan" ) \
	SPH_QUERY_STATE ( DICT_SETUP,	"dict_setup" ) \
	SPH_QUERY_STATE ( PARSE,		"parse" ) \
	SPH_QUERY_STATE ( TRANSFORMS,	"transforms" ) \
	SPH_QUERY_STATE ( INIT,			"init" ) \
	SPH_QUERY_STATE ( INIT_SEGMENT,	"init_segment" ) \
	SPH_QUERY_STATE ( OPEN,			"open" ) \
	SPH_QUERY_STATE ( READ_DOCS,	"read_docs" ) \
	SPH_QUERY_STATE ( READ_HITS,	"read_hits" ) \
	SPH_QUERY_STATE ( GET_DOCS,		"get_docs" ) \
	SPH_QUERY_STATE ( GET_HITS,		"get_hits" ) \
	SPH_QUERY_STATE ( FILTER,		"filter" ) \
	SPH_QUERY_STATE ( RANK,			"rank" ) \
	SPH_QUERY_STATE ( SORT,			"sort" ) \
	SPH_QUERY_STATE ( FINALIZE,		"finalize" ) \
	SPH_QUERY_STATE ( DIST_WAIT,	"dist_wait" ) \
	SPH_QUERY_STATE ( AGGREGATE,	"aggregate" ) \
	SPH_QUERY_STATE ( NET_WRITE,	"net_write" ) \
	SPH_QUERY_STATE ( EVAL_POST,	"eval_post" ) \
	SPH_QUERY_STATE ( SNIPPET,		"eval_snippet" ) \
	SPH_QUERY_STATE ( EVAL_UDF,		"eval_udf" ) \
	SPH_QUERY_STATE ( TABLE_FUNC,	"table_func" )


/// possible query states, used for profiling
enum ESphQueryState
{
	SPH_QSTATE_INFINUM = -1,

#define SPH_QUERY_STATE(_name,_desc) SPH_QSTATE_##_name,
	SPH_QUERY_STATES
#undef SPH_QUERY_STATE

	SPH_QSTATE_TOTAL
};
STATIC_ASSERT ( SPH_QSTATE_UNKNOWN==0, BAD_QUERY_STATE_ENUM_BASE );


/// search query profile
class CSphQueryProfile
{
public:
	ESphQueryState	m_eState;							///< current state
	int64_t			m_tmStamp;							///< timestamp when we entered the current state

	int				m_dSwitches [ SPH_QSTATE_TOTAL+1 ];	///< number of switches to given state
	int64_t			m_tmTotal [ SPH_QSTATE_TOTAL+1 ];	///< total time spent per state

	CSphStringBuilder	m_sTransformedTree;					///< transformed query tree

public:
	/// create empty and stopped profile
	CSphQueryProfile()
	{
		Start ( SPH_QSTATE_TOTAL );
	}

	/// switch to a new query state, and record a timestamp
	/// returns previous state, to simplify Push/Pop like scenarios
	ESphQueryState Switch ( ESphQueryState eNew )
	{
		int64_t tmNow = sphMicroTimer();
		ESphQueryState eOld = m_eState;
		m_dSwitches [ eOld ]++;
		m_tmTotal [ eOld ] += tmNow - m_tmStamp;
		m_eState = eNew;
		m_tmStamp = tmNow;
		return eOld;
	}

	/// reset everything and start profiling from a given state
	void Start ( ESphQueryState eNew )
	{
		memset ( m_dSwitches, 0, sizeof(m_dSwitches) );
		memset ( m_tmTotal, 0, sizeof(m_tmTotal) );
		m_eState = eNew;
		m_tmStamp = sphMicroTimer();
	}

	/// stop profiling
	void Stop()
	{
		Switch ( SPH_QSTATE_TOTAL );
	}
};


class CSphScopedProfile
{
private:
	CSphQueryProfile *	m_pProfile;
	ESphQueryState		m_eOldState;

public:
	explicit CSphScopedProfile ( CSphQueryProfile * pProfile, ESphQueryState eNewState )
	{
		m_pProfile = pProfile;
		m_eOldState = SPH_QSTATE_UNKNOWN;
		if ( m_pProfile )
			m_eOldState = m_pProfile->Switch ( eNewState );
	}

	~CSphScopedProfile()
	{
		if ( m_pProfile )
			m_pProfile->Switch ( m_eOldState );
	}
};


/// file writer with write buffering and int encoder
class CSphWriter : ISphNoncopyable
{
public:
					CSphWriter ();
	virtual			~CSphWriter ();

	void			SetBufferSize ( int iBufferSize );	///< tune write cache size; must be called before OpenFile() or SetFile()

	bool			OpenFile ( const CSphString & sName, CSphString & sError );
	void			SetFile ( CSphAutofile & tAuto, SphOffset_t * pSharedOffset, CSphString & sError );
	void			CloseFile ( bool bTruncate = false );	///< note: calls Flush(), ie. IsError() might get true after this call
	void			UnlinkFile (); /// some shit happened (outside) and the file is no more actual.

	void			PutByte ( int uValue );
	void			PutBytes ( const void * pData, int64_t iSize );
	void			PutDword ( DWORD uValue ) { PutBytes ( &uValue, sizeof(DWORD) ); }
	void			PutOffset ( SphOffset_t uValue ) { PutBytes ( &uValue, sizeof(SphOffset_t) ); }
	void			PutString ( const char * szString );
	void			PutString ( const CSphString & sString );
	void			Tag ( const char * sTag );

	void			SeekTo ( SphOffset_t pos ); ///< seeking inside the buffer will truncate it

#if USE_64BIT
	void			PutDocid ( SphDocID_t uValue ) { PutOffset ( uValue ); }
#else
	void			PutDocid ( SphDocID_t uValue ) { PutDword ( uValue ); }
#endif

	void			ZipInt ( DWORD uValue );
	void			ZipOffset ( uint64_t uValue );
	void			ZipOffsets ( CSphVector<SphOffset_t> * pData );

	bool			IsError () const	{ return m_bError; }
	SphOffset_t		GetPos () const		{ return m_iPos; }
	void			SetThrottle ( ThrottleState_t * pState ) { m_pThrottle = pState; }

protected:
	CSphString		m_sName;
	SphOffset_t		m_iPos;
	SphOffset_t		m_iWritten;

	int				m_iFD;
	int				m_iPoolUsed;
	BYTE *			m_pBuffer;
	BYTE *			m_pPool;
	bool			m_bOwnFile;
	SphOffset_t	*	m_pSharedOffset;
	int				m_iBufferSize;

	bool			m_bError;
	CSphString *	m_pError;
	ThrottleState_t * m_pThrottle;

	virtual void	Flush ();
};


/// file which closes automatically when going out of scope
class CSphAutofile : ISphNoncopyable
{
protected:
	int			m_iFD;			///< my file descriptor
	CSphString	m_sFilename;	///< my file name
	bool		m_bTemporary;	///< whether to unlink this file on Close()
	bool		m_bWouldTemporary; ///< backup of the m_bTemporary

	CSphIndexProgress *					m_pStat;

public:
					CSphAutofile ();
					CSphAutofile ( const CSphString & sName, int iMode, CSphString & sError, bool bTemp=false );
					~CSphAutofile ();

	int				Open ( const CSphString & sName, int iMode, CSphString & sError, bool bTemp=false );
	void			Close ();
	void			SetTemporary(); ///< would be set if a shit happened and the file is not actual.

public:
	int				GetFD () const { return m_iFD; }
	const char *	GetFilename () const;
	SphOffset_t		GetSize ( SphOffset_t iMinSize, bool bCheckSizeT, CSphString & sError );
	SphOffset_t		GetSize ();

	bool			Read ( void * pBuf, int64_t iCount, CSphString & sError );
	void			SetProgressCallback ( CSphIndexProgress * pStat );
};


/// file reader with read buffering and int decoder
class CSphReader
{
public:
	CSphQueryProfile *	m_pProfile;
	ESphQueryState		m_eProfileState;

public:
	CSphReader ( BYTE * pBuf=NULL, int iSize=0 );
	virtual		~CSphReader ();

	void		SetBuffers ( int iReadBuffer, int iReadUnhinted );
	void		SetFile ( int iFD, const char * sFilename );
	void		SetFile ( const CSphAutofile & tFile );
	void		Reset ();
	void		SeekTo ( SphOffset_t iPos, int iSizeHint );

	void		SkipBytes ( int iCount );
	SphOffset_t	GetPos () const { return m_iPos+m_iBuffPos; }

	void		GetBytes ( void * pData, int iSize );
	int			GetBytesZerocopy ( const BYTE ** ppData, int iMax ); ///< zerocopy method; returns actual length present in buffer (upto iMax)

	int			GetByte ();
	DWORD		GetDword ();
	SphOffset_t	GetOffset ();
	CSphString	GetString ();
	int			GetLine ( char * sBuffer, int iMaxLen );
	bool		Tag ( const char * sTag );

	DWORD		UnzipInt ();
	uint64_t	UnzipOffset ();

	bool					GetErrorFlag () const		{ return m_bError; }
	const CSphString &		GetErrorMessage () const	{ return m_sError; }
	const CSphString &		GetFilename() const			{ return m_sFilename; }
	void					ResetError();

#if USE_64BIT
	SphDocID_t	GetDocid ()		{ return GetOffset(); }
	SphDocID_t	UnzipDocid ()	{ return UnzipOffset(); }
	SphWordID_t	UnzipWordid ()	{ return UnzipOffset(); }
#else
	SphDocID_t	GetDocid ()		{ return GetDword(); }
	SphDocID_t	UnzipDocid ()	{ return UnzipInt(); }
	SphWordID_t	UnzipWordid ()	{ return UnzipInt(); }
#endif

	const CSphReader &	operator = ( const CSphReader & rhs );
	void		SetThrottle ( ThrottleState_t * pState ) { m_pThrottle = pState; }

protected:

	int			m_iFD;
	SphOffset_t	m_iPos;

	int			m_iBuffPos;
	int			m_iBuffUsed;
	BYTE *		m_pBuff;
	int			m_iSizeHint;	///< how much do we expect to read

	int			m_iBufSize;
	bool		m_bBufOwned;
	int			m_iReadUnhinted;

	bool		m_bError;
	CSphString	m_sError;
	CSphString	m_sFilename;
	ThrottleState_t * m_pThrottle;

protected:
	virtual void		UpdateCache ();
};


/// scoped reader
class CSphAutoreader : public CSphReader
{
public:
				CSphAutoreader ( BYTE * pBuf=NULL, int iSize=0 ) : CSphReader ( pBuf, iSize ) {}
				~CSphAutoreader ();

	bool		Open ( const CSphString & sFilename, CSphString & sError );
	void		Close ();
	SphOffset_t	GetFilesize ();

public:
	// added for DebugCheck()
	int			GetFD () { return m_iFD; }
};


//////////////////////////////////////////////////////////////////////////

/// generic COM-like uids
enum ExtraData_e
{
	EXTRA_GET_DATA_ZONESPANS,
	EXTRA_GET_DATA_ZONESPANLIST,
	EXTRA_GET_DATA_RANKFACTORS,
	EXTRA_GET_DATA_PACKEDFACTORS,
	EXTRA_GET_DATA_RANKER_STATE,

	EXTRA_GET_QUEUE_WORST,
	EXTRA_GET_QUEUE_SORTVAL,

	EXTRA_SET_MVAPOOL,
	EXTRA_SET_STRINGPOOL,
	EXTRA_SET_POOL_CAPACITY,
	EXTRA_SET_MATCHPUSHED,
	EXTRA_SET_MATCHPOPPED,

	EXTRA_SET_RANKER_PLUGIN,
	EXTRA_SET_RANKER_PLUGIN_OPTS,

	EXTRA_GET_POOL_SIZE
};

/// generic COM-like interface
class ISphExtra
{
public:
	virtual						~ISphExtra () {}
	inline bool					ExtraData	( ExtraData_e eType, void** ppData )
	{
		return ExtraDataImpl ( eType, ppData );
	}
private:
	virtual bool ExtraDataImpl ( ExtraData_e, void** )
	{
		return false;
	}
};


class ISphRanker;
class ISphMatchSorter;
class UservarIntSet_c;

enum QueryDebug_e
{
	QUERY_DEBUG_NO_PAYLOAD = 1<<0
};


/// per-query search context
/// everything that index needs to compute/create to process the query
class CSphQueryContext : public ISphNoncopyable
{
public:
	// searching-only, per-query
	const CSphQuery &			m_tQuery;

	int							m_iWeights;						///< search query field weights count
	int							m_dWeights [ SPH_MAX_FIELDS ];	///< search query field weights

	bool						m_bLookupFilter;				///< row data lookup required at filtering stage
	bool						m_bLookupSort;					///< row data lookup required at sorting stage

	DWORD						m_uPackedFactorFlags;			///< whether we need to calculate packed factors (and some extra options)

	ISphFilter *				m_pFilter;
	ISphFilter *				m_pWeightFilter;

	struct CalcItem_t
	{
		CSphAttrLocator			m_tLoc;					///< result locator
		ESphAttr				m_eType;				///< result type
		ISphExpr *				m_pExpr;				///< evaluator (non-owned)
	};
	CSphVector<CalcItem_t>		m_dCalcFilter;			///< items to compute for filtering
	CSphVector<CalcItem_t>		m_dCalcSort;			///< items to compute for sorting/grouping
	CSphVector<CalcItem_t>		m_dCalcFinal;			///< items to compute when finalizing result set
	CSphVector<CalcItem_t>		m_dCalcPostAggregate;	///< items to compute aggregate depended with finalized result set

	const CSphVector<CSphAttrOverride> *	m_pOverrides;		///< overridden attribute values
	CSphVector<CSphAttrLocator>				m_dOverrideIn;
	CSphVector<CSphAttrLocator>				m_dOverrideOut;

	const void *							m_pIndexData;			///< backend specific data
	CSphQueryProfile *						m_pProfile;
	const SmallStringHash_T<int64_t> *		m_pLocalDocs;
	int64_t									m_iTotalDocs;
	int64_t									m_iBadRows;

public:
	CSphQueryContext ( const CSphQuery & q );
	~CSphQueryContext ();

	void						BindWeights ( const CSphQuery * pQuery, const CSphSchema & tSchema, CSphString & sWarning );
	bool						SetupCalc ( CSphQueryResult * pResult, const ISphSchema & tInSchema, const CSphSchema & tSchema, const DWORD * pMvaPool, bool bArenaProhibit, bool bExtractPostAggr );
	bool						CreateFilters ( bool bFullscan, const CSphVector<CSphFilterSettings> * pdFilters, const ISphSchema & tSchema, const DWORD * pMvaPool, const BYTE * pStrings, CSphString & sError, CSphString & sWarning, ESphCollation eCollation, bool bArenaProhibit, const KillListVector & dKillList );
	bool						SetupOverrides ( const CSphQuery * pQuery, CSphQueryResult * pResult, const CSphSchema & tIndexSchema, const ISphSchema & tOutgoingSchema );

	void						CalcFilter ( CSphMatch & tMatch ) const;
	void						CalcSort ( CSphMatch & tMatch ) const;
	void						CalcFinal ( CSphMatch & tMatch ) const;
	void						CalcPostAggregate ( CSphMatch & tMatch ) const;

	void						FreeStrFilter ( CSphMatch & tMatch ) const;
	void						FreeStrSort ( CSphMatch & tMatch ) const;
	void						FreeStrFinal ( CSphMatch & tMatch ) const;

	// note that RT index bind pools at segment searching, not at time it setups context
	void						ExprCommand ( ESphExprCommand eCmd, void * pArg );
	void						SetStringPool ( const BYTE * pStrings );
	void						SetMVAPool ( const DWORD * pMva, bool bArenaProhibit );
	void						SetupExtraData ( ISphRanker * pRanker, ISphMatchSorter * pSorter );

private:
	CSphVector<const UservarIntSet_c*>		m_dUserVals;
};

//////////////////////////////////////////////////////////////////////////
// MEMORY TRACKER
//////////////////////////////////////////////////////////////////////////

#define MEM_CATEGORIES \
	MEM_CATEGORY(MEM_CORE), \
	MEM_CATEGORY(MEM_INDEX_DISK), \
	MEM_CATEGORY(MEM_INDEX_RT), \
	MEM_CATEGORY(MEM_API_HANDLE ), \
	MEM_CATEGORY(MEM_API_SEARCH ), \
	MEM_CATEGORY(MEM_API_QUERY ), \
	MEM_CATEGORY(MEM_RT_ACCUM), \
	MEM_CATEGORY(MEM_MMAPED), \
	MEM_CATEGORY(MEM_BINLOG), \
	MEM_CATEGORY(MEM_SQL_HANDLE), \
	MEM_CATEGORY(MEM_SQL_INSERT), \
	MEM_CATEGORY(MEM_SQL_SELECT), \
	MEM_CATEGORY(MEM_SQL_DELETE), \
	MEM_CATEGORY(MEM_SQL_SET), \
	MEM_CATEGORY(MEM_SQL_BEGIN), \
	MEM_CATEGORY(MEM_SQL_COMMIT), \
	MEM_CATEGORY(MEM_SQL_ALTER), \
	MEM_CATEGORY(MEM_DISK_QUERY), \
	MEM_CATEGORY(MEM_DISK_QUERYEX), \
	MEM_CATEGORY(MEM_RT_QUERY), \
	MEM_CATEGORY(MEM_RT_RES_MATCHES), \
	MEM_CATEGORY(MEM_RT_RES_STRINGS)

#define MEM_CATEGORY(_arg) _arg
enum MemCategory_e
{
	MEM_CATEGORIES,
	MEM_TOTAL
};
#undef MEM_CATEGORY

#if SPH_ALLOCS_PROFILER

void sphMemStatPush ( MemCategory_e eCategory );
void sphMemStatPop ( MemCategory_e eCategory );

// memory tracker
struct MemTracker_c : ISphNoncopyable
{
	const MemCategory_e m_eCategory; ///< category

	/// ctor
	explicit MemTracker_c ( MemCategory_e eCategory )
		: m_eCategory ( eCategory )
	{
		sphMemStatPush ( m_eCategory );
	}

	/// dtor
	~MemTracker_c ()
	{
		sphMemStatPop ( m_eCategory );
	}
};

#define MEMORY(name) MemTracker_c tracker_##__LINE__##name(name);

#else // SPH_ALLOCS_PROFILER 0

#define MEMORY(name)

#endif // if SPH_ALLOCS_PROFILER

//////////////////////////////////////////////////////////////////////////
// BLOCK-LEVEL ATTRIBUTE INDEX BUILDER
//////////////////////////////////////////////////////////////////////////

#define DOCINFO_INDEX_FREQ 128 // FIXME? make this configurable
#define SPH_SKIPLIST_BLOCK 128 ///< must be a power of two

inline int64_t MVA_UPSIZE ( const DWORD * pMva )
{
	int64_t iMva = (int64_t)( (uint64_t)pMva[0] | ( ( (uint64_t)pMva[1] )<<32 ) );
	return iMva;
}


// FIXME!!! for over INT_MAX attributes
/// attr min-max builder
template < typename DOCID = SphDocID_t >
class AttrIndexBuilder_t : ISphNoncopyable
{
private:
	CSphVector<CSphAttrLocator>	m_dIntAttrs;
	CSphVector<CSphAttrLocator>	m_dFloatAttrs;
	CSphVector<CSphAttrLocator>	m_dMvaAttrs;
	CSphVector<SphAttr_t>		m_dIntMin;
	CSphVector<SphAttr_t>		m_dIntMax;
	CSphVector<SphAttr_t>		m_dIntIndexMin;
	CSphVector<SphAttr_t>		m_dIntIndexMax;
	CSphVector<float>			m_dFloatMin;
	CSphVector<float>			m_dFloatMax;
	CSphVector<float>			m_dFloatIndexMin;
	CSphVector<float>			m_dFloatIndexMax;
	CSphVector<int64_t>			m_dMvaMin;
	CSphVector<int64_t>			m_dMvaMax;
	CSphVector<int64_t>			m_dMvaIndexMin;
	CSphVector<int64_t>			m_dMvaIndexMax;
	DWORD						m_uStride;		// size of attribute's chunk (in DWORDs)
	DWORD						m_uElements;	// counts total number of collected min/max pairs
	int							m_iLoop;		// loop inside one set
	DWORD *						m_pOutBuffer;	// storage for collected min/max
	DWORD const *				m_pOutMax;		// storage max for bound checking
	DOCID						m_uStart;		// first and last docids of current chunk
	DOCID						m_uLast;
	DOCID						m_uIndexStart;	// first and last docids of whole index
	DOCID						m_uIndexLast;
	int							m_iMva64;

private:
	void ResetLocal();
	void FlushComputed();
	void UpdateMinMaxDocids ( DOCID uDocID );
	void CollectRowMVA ( int iAttr, DWORD uCount, const DWORD * pMva );
	void CollectWithoutMvas ( const DWORD * pCur );

public:
	explicit AttrIndexBuilder_t ( const CSphSchema & tSchema );

	void Prepare ( DWORD * pOutBuffer, const DWORD * pOutMax );

	bool Collect ( const DWORD * pCur, const DWORD * pMvas, int64_t iMvasCount, CSphString & sError, bool bHasMvaID );

	void FinishCollect ();

	/// actually used part of output buffer, only used with index merge
	/// (we reserve space for rows from both indexes, but might kill some rows)
	inline int64_t GetActualSize() const
	{
		return int64_t ( m_uElements ) * m_uStride * 2;
	}

	/// how many DWORDs will we need for block index
	inline int64_t GetExpectedSize ( int64_t iMaxDocs ) const
	{
		assert ( iMaxDocs>=0 );
		int64_t iDocinfoIndex = ( iMaxDocs + DOCINFO_INDEX_FREQ - 1 ) / DOCINFO_INDEX_FREQ;
		return ( iDocinfoIndex + 1 ) * m_uStride * 2;
	}
};

typedef AttrIndexBuilder_t<> AttrIndexBuilder_c;

// dirty hack for some build systems which not has LLONG_MAX
#ifndef LLONG_MAX
#define LLONG_MAX (((unsigned long long)(-1))>>1)
#endif

#ifndef LLONG_MIN
#define LLONG_MIN (-LLONG_MAX-1)
#endif

#ifndef ULLONG_MAX
#define ULLONG_MAX	(LLONG_MAX * 2ULL + 1)
#endif


template < typename DOCID >
void AttrIndexBuilder_t<DOCID>::ResetLocal()
{
	ARRAY_FOREACH ( i, m_dIntMin )
	{
		m_dIntMin[i] = LLONG_MAX;
		m_dIntMax[i] = 0;
	}
	ARRAY_FOREACH ( i, m_dFloatMin )
	{
		m_dFloatMin[i] = FLT_MAX;
		m_dFloatMax[i] = -FLT_MAX;
	}
	ARRAY_FOREACH ( i, m_dMvaMin )
	{
		m_dMvaMin[i] = LLONG_MAX;
		m_dMvaMax[i] = ( i>=m_iMva64 ? LLONG_MIN : 0 );
	}
	m_uStart = m_uLast = 0;
	m_iLoop = 0;
}

template < typename DOCID >
void AttrIndexBuilder_t<DOCID>::FlushComputed ()
{
	assert ( m_pOutBuffer );
	DWORD * pMinEntry = m_pOutBuffer + 2 * m_uElements * m_uStride;
	DWORD * pMaxEntry = pMinEntry + m_uStride;
	CSphRowitem * pMinAttrs = DOCINFO2ATTRS_T<DOCID> ( pMinEntry );
	CSphRowitem * pMaxAttrs = pMinAttrs + m_uStride;

	assert ( pMaxEntry+m_uStride<=m_pOutMax );
	assert ( pMaxAttrs+m_uStride-DOCINFO_IDSIZE<=m_pOutMax );

	m_uIndexLast = m_uLast;

	DOCINFOSETID ( pMinEntry, m_uStart );
	DOCINFOSETID ( pMaxEntry, m_uLast );

	ARRAY_FOREACH ( i, m_dIntAttrs )
	{
		m_dIntIndexMin[i] = Min ( m_dIntIndexMin[i], m_dIntMin[i] );
		m_dIntIndexMax[i] = Max ( m_dIntIndexMax[i], m_dIntMax[i] );
		sphSetRowAttr ( pMinAttrs, m_dIntAttrs[i], m_dIntMin[i] );
		sphSetRowAttr ( pMaxAttrs, m_dIntAttrs[i], m_dIntMax[i] );
	}
	ARRAY_FOREACH ( i, m_dFloatAttrs )
	{
		m_dFloatIndexMin[i] = Min ( m_dFloatIndexMin[i], m_dFloatMin[i] );
		m_dFloatIndexMax[i] = Max ( m_dFloatIndexMax[i], m_dFloatMax[i] );
		sphSetRowAttr ( pMinAttrs, m_dFloatAttrs[i], sphF2DW ( m_dFloatMin[i] ) );
		sphSetRowAttr ( pMaxAttrs, m_dFloatAttrs[i], sphF2DW ( m_dFloatMax[i] ) );
	}

	ARRAY_FOREACH ( i, m_dMvaAttrs )
	{
		m_dMvaIndexMin[i] = Min ( m_dMvaIndexMin[i], m_dMvaMin[i] );
		m_dMvaIndexMax[i] = Max ( m_dMvaIndexMax[i], m_dMvaMax[i] );
		sphSetRowAttr ( pMinAttrs, m_dMvaAttrs[i], m_dMvaMin[i] );
		sphSetRowAttr ( pMaxAttrs, m_dMvaAttrs[i], m_dMvaMax[i] );
	}

	m_uElements++;
	ResetLocal();
}

template < typename DOCID >
void AttrIndexBuilder_t<DOCID>::UpdateMinMaxDocids ( DOCID uDocID )
{
	if ( !m_uStart )
		m_uStart = uDocID;
	if ( !m_uIndexStart )
		m_uIndexStart = uDocID;
	m_uLast = uDocID;
}

template < typename DOCID >
AttrIndexBuilder_t<DOCID>::AttrIndexBuilder_t ( const CSphSchema & tSchema )
	: m_uStride ( DWSIZEOF(DOCID) + tSchema.GetRowSize() )
	, m_uElements ( 0 )
	, m_iLoop ( 0 )
	, m_pOutBuffer ( NULL )
	, m_pOutMax ( NULL )
	, m_uStart ( 0 )
	, m_uLast ( 0 )
	, m_uIndexStart ( 0 )
	, m_uIndexLast ( 0 )
{
	for ( int i=0; i<tSchema.GetAttrsCount(); i++ )
	{
		const CSphColumnInfo & tCol = tSchema.GetAttr(i);
		switch ( tCol.m_eAttrType )
		{
		case SPH_ATTR_INTEGER:
		case SPH_ATTR_TIMESTAMP:
		case SPH_ATTR_BOOL:
		case SPH_ATTR_BIGINT:
		case SPH_ATTR_TOKENCOUNT:
			m_dIntAttrs.Add ( tCol.m_tLocator );
			break;

		case SPH_ATTR_FLOAT:
			m_dFloatAttrs.Add ( tCol.m_tLocator );
			break;

		case SPH_ATTR_UINT32SET:
			m_dMvaAttrs.Add ( tCol.m_tLocator );
			break;

		default:
			break;
		}
	}

	m_iMva64 = m_dMvaAttrs.GetLength();
	for ( int i=0; i<tSchema.GetAttrsCount(); i++ )
	{
		const CSphColumnInfo & tCol = tSchema.GetAttr(i);
		if ( tCol.m_eAttrType==SPH_ATTR_INT64SET )
			m_dMvaAttrs.Add ( tCol.m_tLocator );
	}


	m_dIntMin.Resize ( m_dIntAttrs.GetLength() );
	m_dIntMax.Resize ( m_dIntAttrs.GetLength() );
	m_dIntIndexMin.Resize ( m_dIntAttrs.GetLength() );
	m_dIntIndexMax.Resize ( m_dIntAttrs.GetLength() );
	m_dFloatMin.Resize ( m_dFloatAttrs.GetLength() );
	m_dFloatMax.Resize ( m_dFloatAttrs.GetLength() );
	m_dFloatIndexMin.Resize ( m_dFloatAttrs.GetLength() );
	m_dFloatIndexMax.Resize ( m_dFloatAttrs.GetLength() );
	m_dMvaMin.Resize ( m_dMvaAttrs.GetLength() );
	m_dMvaMax.Resize ( m_dMvaAttrs.GetLength() );
	m_dMvaIndexMin.Resize ( m_dMvaAttrs.GetLength() );
	m_dMvaIndexMax.Resize ( m_dMvaAttrs.GetLength() );
}

template < typename DOCID >
void AttrIndexBuilder_t<DOCID>::Prepare ( DWORD * pOutBuffer, const DWORD * pOutMax )
{
	m_pOutBuffer = pOutBuffer;
	m_pOutMax = pOutMax;
	memset ( pOutBuffer, 0, ( pOutMax-pOutBuffer )*sizeof(DWORD) );

	m_uElements = 0;
	m_uIndexStart = m_uIndexLast = 0;
	ARRAY_FOREACH ( i, m_dIntIndexMin )
	{
		m_dIntIndexMin[i] = LLONG_MAX;
		m_dIntIndexMax[i] = 0;
	}
	ARRAY_FOREACH ( i, m_dFloatIndexMin )
	{
		m_dFloatIndexMin[i] = FLT_MAX;
		m_dFloatIndexMax[i] = -FLT_MAX;
	}
	ARRAY_FOREACH ( i, m_dMvaIndexMin )
	{
		m_dMvaIndexMin[i] = LLONG_MAX;
		m_dMvaIndexMax[i] = ( i>=m_iMva64 ? LLONG_MIN : 0 );
	}
	ResetLocal();
}

template < typename DOCID >
void AttrIndexBuilder_t<DOCID>::CollectWithoutMvas ( const DWORD * pCur )
{
	// check if it is time to flush already collected values
	if ( m_iLoop>=DOCINFO_INDEX_FREQ )
		FlushComputed ();

	const DWORD * pRow = DOCINFO2ATTRS_T<DOCID>(pCur);
	UpdateMinMaxDocids ( DOCINFO2ID_T<DOCID>(pCur) );
	m_iLoop++;

	// ints
	ARRAY_FOREACH ( i, m_dIntAttrs )
	{
		SphAttr_t uVal = sphGetRowAttr ( pRow, m_dIntAttrs[i] );
		m_dIntMin[i] = Min ( m_dIntMin[i], uVal );
		m_dIntMax[i] = Max ( m_dIntMax[i], uVal );
	}

	// floats
	ARRAY_FOREACH ( i, m_dFloatAttrs )
	{
		float fVal = sphDW2F ( (DWORD)sphGetRowAttr ( pRow, m_dFloatAttrs[i] ) );
		m_dFloatMin[i] = Min ( m_dFloatMin[i], fVal );
		m_dFloatMax[i] = Max ( m_dFloatMax[i], fVal );
	}
}

template < typename DOCID >
void AttrIndexBuilder_t<DOCID>::CollectRowMVA ( int iAttr, DWORD uCount, const DWORD * pMva )
{
	if ( iAttr>=m_iMva64 )
	{
		assert ( ( uCount%2 )==0 );
		for ( ; uCount>0; uCount-=2, pMva+=2 )
		{
			int64_t iVal = MVA_UPSIZE ( pMva );
			m_dMvaMin[iAttr] = Min ( m_dMvaMin[iAttr], iVal );
			m_dMvaMax[iAttr] = Max ( m_dMvaMax[iAttr], iVal );
		}
	} else
	{
		for ( ; uCount>0; uCount--, pMva++ )
		{
			DWORD uVal = *pMva;
			m_dMvaMin[iAttr] = Min ( m_dMvaMin[iAttr], uVal );
			m_dMvaMax[iAttr] = Max ( m_dMvaMax[iAttr], uVal );
		}
	}
}

template < typename DOCID >
bool AttrIndexBuilder_t<DOCID>::Collect ( const DWORD * pCur, const DWORD * pMvas, int64_t iMvasCount, CSphString & sError, bool bHasMvaID )
{
	CollectWithoutMvas ( pCur );

	const DWORD * pRow = DOCINFO2ATTRS_T<DOCID>(pCur);
	SphDocID_t uDocID = DOCINFO2ID_T<DOCID>(pCur);

	// MVAs
	ARRAY_FOREACH ( i, m_dMvaAttrs )
	{
		SphAttr_t uOff = sphGetRowAttr ( pRow, m_dMvaAttrs[i] );
		if ( !uOff )
			continue;

		// sanity checks
		if ( uOff>=iMvasCount )
		{
			sError.SetSprintf ( "broken index: mva offset out of bounds, id=" DOCID_FMT, (SphDocID_t)uDocID );
			return false;
		}

		const DWORD * pMva = pMvas + uOff; // don't care about updates at this point

		if ( bHasMvaID && i==0 && DOCINFO2ID_T<DOCID> ( pMva-DWSIZEOF(DOCID) )!=uDocID )
		{
			sError.SetSprintf ( "broken index: mva docid verification failed, id=" DOCID_FMT, (SphDocID_t)uDocID );
			return false;
		}

		DWORD uCount = *pMva++;
		if ( ( uOff+uCount>=iMvasCount ) || ( i>=m_iMva64 && ( uCount%2 )!=0 ) )
		{
			sError.SetSprintf ( "broken index: mva list out of bounds, id=" DOCID_FMT, (SphDocID_t)uDocID );
			return false;
		}

		// walk and calc
		CollectRowMVA ( i, uCount, pMva );
	}
	return true;
}

template < typename DOCID >
void AttrIndexBuilder_t<DOCID>::FinishCollect ()
{
	assert ( m_pOutBuffer );
	if ( m_iLoop )
		FlushComputed ();

	DWORD * pMinEntry = m_pOutBuffer + 2 * m_uElements * m_uStride;
	DWORD * pMaxEntry = pMinEntry + m_uStride;
	CSphRowitem * pMinAttrs = DOCINFO2ATTRS_T<DOCID> ( pMinEntry );
	CSphRowitem * pMaxAttrs = pMinAttrs + m_uStride;

	assert ( pMaxEntry+m_uStride<=m_pOutMax );
	assert ( pMaxAttrs+m_uStride-DWSIZEOF(DOCID)<=m_pOutMax );

	DOCINFOSETID ( pMinEntry, m_uIndexStart );
	DOCINFOSETID ( pMaxEntry, m_uIndexLast );

	ARRAY_FOREACH ( i, m_dMvaAttrs )
	{
		sphSetRowAttr ( pMinAttrs, m_dMvaAttrs[i], m_dMvaIndexMin[i] );
		sphSetRowAttr ( pMaxAttrs, m_dMvaAttrs[i], m_dMvaIndexMax[i] );
	}

	ARRAY_FOREACH ( i, m_dIntAttrs )
	{
		sphSetRowAttr ( pMinAttrs, m_dIntAttrs[i], m_dIntIndexMin[i] );
		sphSetRowAttr ( pMaxAttrs, m_dIntAttrs[i], m_dIntIndexMax[i] );
	}
	ARRAY_FOREACH ( i, m_dFloatAttrs )
	{
		sphSetRowAttr ( pMinAttrs, m_dFloatAttrs[i], sphF2DW ( m_dFloatIndexMin[i] ) );
		sphSetRowAttr ( pMaxAttrs, m_dFloatAttrs[i], sphF2DW ( m_dFloatIndexMax[i] ) );
	}
	m_uElements++;
}

struct PoolPtrs_t
{
	const DWORD *	m_pMva;
	const BYTE *	m_pStrings;
	bool			m_bArenaProhibit;

	PoolPtrs_t ()
		: m_pMva ( NULL )
		, m_pStrings ( NULL )
		, m_bArenaProhibit ( false )
	{}
};

class CSphTaggedVector
{
public:
	const PoolPtrs_t & operator [] ( int iTag ) const
	{
		return m_dPool [ iTag & 0x7FFFFFF ];
	}
	PoolPtrs_t & operator [] ( int iTag )
	{
		return m_dPool [ iTag & 0x7FFFFFF ];
	}

	void Resize ( int iSize )
	{
		m_dPool.Resize ( iSize );
	}

private:
	CSphVector<PoolPtrs_t> m_dPool;
};

class CSphFreeList
{
private:
	CSphTightVector<int>	m_dFree;
	int						m_iNextFree;
#ifndef NDEBUG
	int						m_iSize;
#endif

public:
	CSphFreeList ()
		: m_iNextFree ( 0 )
#ifndef NDEBUG
		, m_iSize ( 0 )
#endif
	{}

	void Reset ( int iSize )
	{
#ifndef NDEBUG
		m_iSize = iSize;
#endif
		m_iNextFree = 0;
		m_dFree.Reserve ( iSize );
	}

	int Get ()
	{
		int iRes = -1;
		if ( m_dFree.GetLength () )
			iRes = m_dFree.Pop ();
		else
			iRes = m_iNextFree++;
		assert ( iRes>=0 && iRes<m_iSize );
		return iRes;
	}

	void Free ( int iIndex )
	{
		assert ( iIndex>=0 && iIndex<m_iSize );
		m_dFree.Add ( iIndex );
	}
};

//////////////////////////////////////////////////////////////////////////
// INLINES, FIND_XXX() GENERIC FUNCTIONS
//////////////////////////////////////////////////////////////////////////

/// find a value-enclosing span in a sorted vector (aka an index at which vec[i] <= val < vec[i+1])
template < typename T, typename U >
static int FindSpan ( const CSphVector<T> & dVec, U tRef, int iSmallTreshold=8 )
{
	// empty vector
	if ( !dVec.GetLength() )
		return -1;

	// check last semi-span
	if ( dVec.Last()<tRef || dVec.Last()==tRef )
		return dVec.GetLength()-1;

	// linear search for small vectors
	if ( dVec.GetLength()<=iSmallTreshold )
	{
		for ( int i=0; i<dVec.GetLength()-1; i++ )
			if ( ( dVec[i]<tRef || dVec[i]==tRef ) && tRef<dVec[i+1] )
				return i;
		return -1;
	}

	// binary search for longer vectors
	const T * pStart = dVec.Begin();
	const T * pEnd = &dVec.Last();

	if ( ( pStart[0]<tRef || pStart[0]==tRef ) && tRef<pStart[1] )
		return 0;

	if ( ( pEnd[-1]<tRef || pEnd[-1]==tRef ) && tRef<pEnd[0] )
		return pEnd-dVec.Begin()-1;

	while ( pEnd-pStart>1 )
	{
		if ( tRef<*pStart || *pEnd<tRef )
			break;
		assert ( *pStart<tRef );
		assert ( tRef<*pEnd );

		const T * pMid = pStart + (pEnd-pStart)/2;
		assert ( pMid+1 < &dVec.Last() );

		if ( ( pMid[0]<tRef || pMid[0]==tRef ) && tRef<pMid[1] )
			return pMid - dVec.Begin();

		if ( tRef<pMid[0] )
			pEnd = pMid;
		else
			pStart = pMid;
	}

	return -1;
}


inline int FindBit ( DWORD uValue )
{
	DWORD uMask = 0xffff;
	int iIdx = 0;
	int iBits = 16;

	// we negate bits to compare with 0
	// this makes MSVC emit 'test' instead of 'cmp'
	uValue ^= 0xffffffff;
	for ( int t=0; t<5; t++ )
	{
		if ( ( uValue & uMask )==0 )
		{
			iIdx += iBits;
			uValue >>= iBits;
		}
		iBits >>= 1;
		uMask >>= iBits;
	}
	return iIdx;
}


inline int sphEncodeVLB8 ( BYTE * buf, uint64_t v )
{
	register BYTE b;
	register int n = 0;

	do
	{
		b = (BYTE)(v & 0x7f);
		v >>= 7;
		if ( v )
			b |= 0x80;
		*buf++ = b;
		n++;
	} while ( v );
	return n;
}


inline const BYTE * spnDecodeVLB8 ( const BYTE * pIn, uint64_t & uValue )
{
	BYTE bIn;
	int iOff = 0;

	do
	{
		bIn = *pIn++;
		uValue += ( uint64_t ( bIn & 0x7f ) ) << iOff;
		iOff += 7;
	} while ( bIn & 0x80 );

	return pIn;
}

//////////////////////////////////////////////////////////////////////////
// INLINES, UTF-8 TOOLS
//////////////////////////////////////////////////////////////////////////

#define SPH_MAX_UTF8_BYTES 4

/// decode UTF-8 codepoint
/// advances buffer ptr in all cases, including the end of buffer (ie. zero byte)!
/// so eof MUST be handled, otherwise, you get OOB
///
/// returns -1 on failure
/// returns 0 on end of buffer
/// returns codepoint on success
inline int sphUTF8Decode ( const BYTE * & pBuf )
{
	BYTE v = *pBuf++;
	if ( !v )
		return 0;

	// check for 7-bit case
	if ( v<128 )
		return v;

	// get number of bytes
	int iBytes = 0;
	while ( v & 0x80 )
	{
		iBytes++;
		v <<= 1;
	}

	// check for valid number of bytes
	if ( iBytes<2 || iBytes>SPH_MAX_UTF8_BYTES )
		return -1;

	int iCode = ( v >> iBytes );
	iBytes--;
	do
	{
		if ( !(*pBuf) )
			return 0; // unexpected eof

		if ( ((*pBuf) & 0xC0)!=0x80 )
			return -1; // invalid code

		iCode = ( iCode<<6 ) + ( (*pBuf) & 0x3F );
		iBytes--;
		pBuf++;
	} while ( iBytes );

	// all good
	return iCode;
}


/// encode UTF-8 codepoint to buffer, macro version for the Really Critical places
#define SPH_UTF8_ENCODE(_ptr,_code) \
	if ( (_code)<0x80 ) \
	{ \
		*_ptr++ = (BYTE)( (_code) & 0x7F ); \
	} else if ( (_code)<0x800 ) \
	{ \
		_ptr[0] = (BYTE)( ( ((_code)>>6) & 0x1F ) | 0xC0 ); \
		_ptr[1] = (BYTE)( ( (_code) & 0x3F ) | 0x80 ); \
		_ptr += 2; \
	} else if ( (_code)<0x10000 )\
	{ \
		_ptr[0] = (BYTE)( ( ((_code)>>12) & 0x0F ) | 0xE0 ); \
		_ptr[1] = (BYTE)( ( ((_code)>>6) & 0x3F ) | 0x80 ); \
		_ptr[2] = (BYTE)( ( (_code) & 0x3F ) | 0x80 ); \
		_ptr += 3; \
	} else \
	{ \
		_ptr[0] = (BYTE)( ( ((_code)>>18) & 0x0F ) | 0xF0 ); \
		_ptr[1] = (BYTE)( ( ((_code)>>12) & 0x3F ) | 0x80 ); \
		_ptr[2] = (BYTE)( ( ((_code)>>6) & 0x3F ) | 0x80 ); \
		_ptr[3] = (BYTE)( ( (_code) & 0x3F ) | 0x80 ); \
		_ptr += 4; \
	}


/// encode UTF-8 codepoint to buffer
/// returns number of bytes used
inline int sphUTF8Encode ( BYTE * pBuf, int iCode )
{
	if ( iCode<0x80 )
	{
		pBuf[0] = (BYTE)( iCode & 0x7F );
		return 1;
	}

	if ( iCode<0x800 )
	{
		pBuf[0] = (BYTE)( ( (iCode>>6) & 0x1F ) | 0xC0 );
		pBuf[1] = (BYTE)( ( iCode & 0x3F ) | 0x80 );
		return 2;
	}

	if ( iCode<0x10000 )
	{
		pBuf[0] = (BYTE)( ( (iCode>>12) & 0x0F ) | 0xE0 );
		pBuf[1] = (BYTE)( ( (iCode>>6) & 0x3F ) | 0x80 );
		pBuf[2] = (BYTE)( ( iCode & 0x3F ) | 0x80 );
		return 3;
	}

	pBuf[0] = (BYTE)( ( (iCode>>18) & 0x0F ) | 0xF0 );
	pBuf[1] = (BYTE)( ( (iCode>>12) & 0x3F ) | 0x80 );
	pBuf[2] = (BYTE)( ( (iCode>>6) & 0x3F ) | 0x80 );
	pBuf[3] = (BYTE)( ( iCode & 0x3F ) | 0x80 );
	return 4;
}


/// compute UTF-8 string length in codepoints
inline int sphUTF8Len ( const char * pStr )
{
	if ( !pStr || *pStr=='\0' )
		return 0;

	const BYTE * pBuf = (const BYTE*) pStr;
	int iRes = 0, iCode;

	while ( ( iCode = sphUTF8Decode(pBuf) )!=0 )
		if ( iCode>0 )
			iRes++;

	return iRes;
}


/// compute UTF-8 string length in codepoints
inline int sphUTF8Len ( const char * pStr, int iMax )
{
	if ( !pStr || *pStr=='\0' )
		return 0;

	const BYTE * pBuf = (const BYTE*) pStr;
	const BYTE * pMax = pBuf + iMax;
	int iRes = 0, iCode;

	while ( pBuf<pMax && iRes<iMax && ( iCode = sphUTF8Decode ( pBuf ) )!=0 )
		if ( iCode>0 )
			iRes++;

	return iRes;
}

//////////////////////////////////////////////////////////////////////////
// MATCHING ENGINE INTERNALS
//////////////////////////////////////////////////////////////////////////

static const int FIELD_BITS = 8;
typedef Hitman_c<FIELD_BITS> HITMAN;

/// hit in the stream
/// combines posting info (docid and hitpos) with a few more matching/ranking bits
///
/// note that while in simple cases every hit would just represent a single keyword,
/// this is NOT always the case; phrase, proximity, and NEAR operators (that already
/// analyze keywords positions while matching the document) can emit a single folded
/// hit representing the entire multi-keyword match, so that the ranker could avoid
/// double work processing individual hits again. in such cases, m_uWeight, m_uSpanlen,
/// and m_uMatchlen will differ from the "usual" value of 1.
///
/// thus, in folded hits:
/// - m_uWeight is the match LCS value in all cases (phrase, proximity, near).
/// - m_uSpanlen is the match span length, ie. a distance from the first to the last
/// matching keyword. for phrase operators it natually equals m_uWeight, for other
/// operators it might be very different.
/// - m_uMatchlen is a piece of voodoo magic that only the near operator seems to use.
struct ExtHit_t
{
	SphDocID_t	m_uDocid;
	Hitpos_t	m_uHitpos;
	WORD		m_uQuerypos;
	WORD		m_uNodepos;
	WORD		m_uSpanlen;
	WORD		m_uMatchlen;
	DWORD		m_uWeight;		///< 1 for individual keywords, LCS value for folded phrase/proximity/near hits
	DWORD		m_uQposMask;
};

enum SphZoneHit_e
{
	SPH_ZONE_FOUND,
	SPH_ZONE_NO_SPAN,
	SPH_ZONE_NO_DOCUMENT
};

class ISphZoneCheck
{
public:
	virtual ~ISphZoneCheck () {}
	virtual SphZoneHit_e IsInZone ( int iZone, const ExtHit_t * pHit, int * pLastSpan ) = 0;
};


struct SphFactorHashEntry_t
{
	SphDocID_t				m_iId;
	int						m_iRefCount;
	BYTE *					m_pData;
	SphFactorHashEntry_t *	m_pPrev;
	SphFactorHashEntry_t *	m_pNext;
};

typedef CSphFixedVector<SphFactorHashEntry_t *> SphFactorHash_t;


struct SphExtraDataRankerState_t
{
	const CSphSchema *	m_pSchema;
	const int64_t *		m_pFieldLens;
	CSphAttrLocator		m_tFieldLensLoc;
	int64_t				m_iTotalDocuments;
	int					m_iFields;
	int					m_iMaxQpos;
	SphExtraDataRankerState_t ()
		: m_pSchema ( NULL )
		, m_pFieldLens ( NULL )
		, m_iTotalDocuments ( 0 )
		, m_iFields ( 0 )
		, m_iMaxQpos ( 0 )
	{ }
};


struct MatchSortAccessor_t
{
	typedef CSphMatch T;
	typedef CSphMatch * MEDIAN_TYPE;

	CSphMatch m_tMedian;

	MatchSortAccessor_t () {}
	MatchSortAccessor_t ( const MatchSortAccessor_t & ) {}

	virtual ~MatchSortAccessor_t()
	{
		m_tMedian.m_pDynamic = NULL; // not yours
	}

	MEDIAN_TYPE Key ( CSphMatch * a ) const
	{
		return a;
	}

	void CopyKey ( MEDIAN_TYPE * pMed, CSphMatch * pVal )
	{
		*pMed = &m_tMedian;
		m_tMedian.m_uDocID = pVal->m_uDocID;
		m_tMedian.m_iWeight = pVal->m_iWeight;
		m_tMedian.m_pStatic = pVal->m_pStatic;
		m_tMedian.m_pDynamic = pVal->m_pDynamic;
		m_tMedian.m_iTag = pVal->m_iTag;
	}

	void Swap ( T * a, T * b ) const
	{
		::Swap ( *a, *b );
	}

	T * Add ( T * p, int i ) const
	{
		return p+i;
	}

	int Sub ( T * b, T * a ) const
	{
		return (int)(b-a);
	}
};


//////////////////////////////////////////////////////////////////////////
// INLINES, MISC
//////////////////////////////////////////////////////////////////////////

inline const char * sphTypeName ( ESphAttr eType )
{
	switch ( eType )
	{
		case SPH_ATTR_NONE:			return "none";
		case SPH_ATTR_INTEGER:		return "uint";
		case SPH_ATTR_TIMESTAMP:	return "timestamp";
		case SPH_ATTR_BOOL:			return "bool";
		case SPH_ATTR_FLOAT:		return "float";
		case SPH_ATTR_BIGINT:		return "bigint";
		case SPH_ATTR_STRING:		return "string";
		case SPH_ATTR_STRINGPTR:	return "stringptr";
		case SPH_ATTR_TOKENCOUNT:	return "tokencount";
		case SPH_ATTR_JSON:			return "json";

		case SPH_ATTR_UINT32SET:	return "mva";
		case SPH_ATTR_INT64SET:		return "mva64";
		default:					return "unknown";
	}
}

inline const char * sphTypeDirective ( ESphAttr eType )
{
	switch ( eType )
	{
		case SPH_ATTR_NONE:			return "???";
		case SPH_ATTR_INTEGER:		return "sql_attr_uint";
		case SPH_ATTR_TIMESTAMP:	return "sql_attr_timestamp";
		case SPH_ATTR_BOOL:			return "sql_attr_bool";
		case SPH_ATTR_FLOAT:		return "sql_attr_float";
		case SPH_ATTR_BIGINT:		return "sql_attr_bigint";
		case SPH_ATTR_STRING:		return "sql_attr_string";
		case SPH_ATTR_STRINGPTR:	return "sql_attr_string";
		case SPH_ATTR_TOKENCOUNT:	return "_autogenerated_tokencount";
		case SPH_ATTR_JSON:			return "sql_attr_json";

		case SPH_ATTR_UINT32SET:	return "sql_attr_multi";
		case SPH_ATTR_INT64SET:		return "sql_attr_multi bigint";
		default:					return "???";
	}
}

inline void SqlUnescape ( CSphString & sRes, const char * sEscaped, int iLen )
{
	assert ( iLen>=2 );
	assert (
		( sEscaped[0]=='\'' && sEscaped[iLen-1]=='\'' ) ||
		( sEscaped[0]=='"' && sEscaped[iLen-1]=='"' ) );

	// skip heading and trailing quotes
	const char * s = sEscaped+1;
	const char * sMax = s+iLen-2;

	sRes.Reserve ( iLen );
	char * d = (char*) sRes.cstr();

	while ( s<sMax )
	{
		if ( s[0]=='\\' )
		{
			switch ( s[1] )
			{
			case 'b': *d++ = '\b'; break;
			case 'n': *d++ = '\n'; break;
			case 'r': *d++ = '\r'; break;
			case 't': *d++ = '\t'; break;
			case '0': *d++ = ' '; break;
			default:
				*d++ = s[1];
			}
			s += 2;
		} else
			*d++ = *s++;
	}

	*d++ = '\0';
}


inline void StripPath ( CSphString & sPath )
{
	if ( sPath.IsEmpty() )
		return;

	const char * s = sPath.cstr();
	if ( *s!='/' )
		return;

	const char * sLastSlash = s;
	for ( ; *s; s++ )
		if ( *s=='/' )
			sLastSlash = s;

	int iPos = (int)( sLastSlash - sPath.cstr() + 1 );
	int iLen = (int)( s - sPath.cstr() );
	sPath = sPath.SubString ( iPos, iLen - iPos );
}

//////////////////////////////////////////////////////////////////////////
// DISK INDEX INTERNALS
//////////////////////////////////////////////////////////////////////////

/// locator pair, for RT string dynamization
struct LocatorPair_t
{
	CSphAttrLocator m_tFrom;	///< source (static) locator
	CSphAttrLocator m_tTo;		///< destination (dynamized) locator
};

//////////////////////////////////////////////////////////////////////////
// DICTIONARY INTERNALS
//////////////////////////////////////////////////////////////////////////

/// dict traits
class CSphDictTraits : public CSphDict
{
public:
	explicit			CSphDictTraits ( CSphDict * pDict ) : m_pDict ( pDict ) { assert ( m_pDict ); }

	virtual void		LoadStopwords ( const char * sFiles, const ISphTokenizer * pTokenizer ) { m_pDict->LoadStopwords ( sFiles, pTokenizer ); }
	virtual void		LoadStopwords ( const CSphVector<SphWordID_t> & dStopwords ) { m_pDict->LoadStopwords ( dStopwords ); }
	virtual void		WriteStopwords ( CSphWriter & tWriter ) { m_pDict->WriteStopwords ( tWriter ); }
	virtual bool		LoadWordforms ( const CSphVector<CSphString> & dFiles, const CSphEmbeddedFiles * pEmbedded, const ISphTokenizer * pTokenizer, const char * sIndex ) { return m_pDict->LoadWordforms ( dFiles, pEmbedded, pTokenizer, sIndex ); }
	virtual void		WriteWordforms ( CSphWriter & tWriter ) { m_pDict->WriteWordforms ( tWriter ); }
	virtual int			SetMorphology ( const char * szMorph, CSphString & sMessage ) { return m_pDict->SetMorphology ( szMorph, sMessage ); }

	virtual SphWordID_t	GetWordID ( const BYTE * pWord, int iLen, bool bFilterStops ) { return m_pDict->GetWordID ( pWord, iLen, bFilterStops ); }
	virtual SphWordID_t GetWordID ( BYTE * pWord );

	virtual void		Setup ( const CSphDictSettings & ) {}
	virtual const CSphDictSettings & GetSettings () const { return m_pDict->GetSettings (); }
	virtual const CSphVector <CSphSavedFile> & GetStopwordsFileInfos () { return m_pDict->GetStopwordsFileInfos (); }
	virtual const CSphVector <CSphSavedFile> & GetWordformsFileInfos () { return m_pDict->GetWordformsFileInfos (); }
	virtual const CSphMultiformContainer * GetMultiWordforms () const { return m_pDict->GetMultiWordforms (); }
	virtual const CSphWordforms * GetWordforms () { return m_pDict->GetWordforms(); }

	virtual bool		IsStopWord ( const BYTE * pWord ) const { return m_pDict->IsStopWord ( pWord ); }
	virtual uint64_t	GetSettingsFNV () const { return m_pDict->GetSettingsFNV(); }

protected:
	CSphDict *			m_pDict;
};


/// dict wrapper for star-syntax support in prefix-indexes
class CSphDictStar : public CSphDictTraits
{
public:
	explicit			CSphDictStar ( CSphDict * pDict ) : CSphDictTraits ( pDict ) {}

	virtual SphWordID_t	GetWordID ( BYTE * pWord );
	virtual SphWordID_t	GetWordIDNonStemmed ( BYTE * pWord );
};


/// star dict for index v.8+
class CSphDictStarV8 : public CSphDictStar
{
public:
	CSphDictStarV8 ( CSphDict * pDict, bool bPrefixes, bool bInfixes );

	virtual SphWordID_t	GetWordID ( BYTE * pWord );

private:
	bool				m_bPrefixes;
	bool				m_bInfixes;
};


/// dict wrapper for exact-word syntax
class CSphDictExact : public CSphDictTraits
{
public:
	explicit CSphDictExact ( CSphDict * pDict ) : CSphDictTraits ( pDict ) {}
	virtual SphWordID_t	GetWordID ( BYTE * pWord );
	virtual SphWordID_t GetWordIDNonStemmed ( BYTE * pWord ) { return m_pDict->GetWordIDNonStemmed ( pWord ); }
};

//////////////////////////////////////////////////////////////////////////
// TOKEN FILTER
//////////////////////////////////////////////////////////////////////////

/// token filter base (boring proxy stuff)
class CSphTokenFilter : public ISphTokenizer
{
protected:
	ISphTokenizer *		m_pTokenizer;

public:
	explicit						CSphTokenFilter ( ISphTokenizer * pTokenizer )					: m_pTokenizer ( pTokenizer ) {}
									~CSphTokenFilter()												{ SafeDelete ( m_pTokenizer ); }

	virtual bool					SetCaseFolding ( const char * sConfig, CSphString & sError )	{ return m_pTokenizer->SetCaseFolding ( sConfig, sError ); }
	virtual void					AddPlainChar ( char c )											{ m_pTokenizer->AddPlainChar ( c ); }
	virtual void					AddSpecials ( const char * sSpecials )							{ m_pTokenizer->AddSpecials ( sSpecials ); }
	virtual bool					SetIgnoreChars ( const char * sIgnored, CSphString & sError )	{ return m_pTokenizer->SetIgnoreChars ( sIgnored, sError ); }
	virtual bool					SetNgramChars ( const char * sConfig, CSphString & sError )		{ return m_pTokenizer->SetNgramChars ( sConfig, sError ); }
	virtual void					SetNgramLen ( int iLen )										{ m_pTokenizer->SetNgramLen ( iLen ); }
	virtual bool					LoadSynonyms ( const char * sFilename, const CSphEmbeddedFiles * pFiles, CSphString & sError ) { return m_pTokenizer->LoadSynonyms ( sFilename, pFiles, sError ); }
	virtual void					WriteSynonyms ( CSphWriter & tWriter )							{ return m_pTokenizer->WriteSynonyms ( tWriter ); }
	virtual bool					SetBoundary ( const char * sConfig, CSphString & sError )		{ return m_pTokenizer->SetBoundary ( sConfig, sError ); }
	virtual void					Setup ( const CSphTokenizerSettings & tSettings )				{ m_pTokenizer->Setup ( tSettings ); }
	virtual const CSphTokenizerSettings &	GetSettings () const									{ return m_pTokenizer->GetSettings (); }
	virtual const CSphSavedFile &	GetSynFileInfo () const											{ return m_pTokenizer->GetSynFileInfo (); }
	virtual bool					EnableSentenceIndexing ( CSphString & sError )					{ return m_pTokenizer->EnableSentenceIndexing ( sError ); }
	virtual bool					EnableZoneIndexing ( CSphString & sError )						{ return m_pTokenizer->EnableZoneIndexing ( sError ); }
	virtual int						SkipBlended ()													{ return m_pTokenizer->SkipBlended(); }

	virtual int						GetCodepointLength ( int iCode ) const		{ return m_pTokenizer->GetCodepointLength ( iCode ); }
	virtual int						GetMaxCodepointLength () const				{ return m_pTokenizer->GetMaxCodepointLength(); }

	virtual const char *			GetTokenStart () const						{ return m_pTokenizer->GetTokenStart(); }
	virtual const char *			GetTokenEnd () const						{ return m_pTokenizer->GetTokenEnd(); }
	virtual const char *			GetBufferPtr () const						{ return m_pTokenizer->GetBufferPtr(); }
	virtual const char *			GetBufferEnd () const						{ return m_pTokenizer->GetBufferEnd (); }
	virtual void					SetBufferPtr ( const char * sNewPtr )		{ m_pTokenizer->SetBufferPtr ( sNewPtr ); }
	virtual uint64_t				GetSettingsFNV () const						{ return m_pTokenizer->GetSettingsFNV(); }

	virtual void					SetBuffer ( const BYTE * sBuffer, int iLength )	{ m_pTokenizer->SetBuffer ( sBuffer, iLength ); }
	virtual BYTE *					GetToken ()										{ return m_pTokenizer->GetToken(); }

	virtual bool					WasTokenMultiformDestination ( bool & bHead, int & iDestCount ) const { return m_pTokenizer->WasTokenMultiformDestination ( bHead, iDestCount ); }
};


struct ISphQueryFilter
{
	ISphTokenizer *		m_pTokenizer;
	CSphDict *					m_pDict;
	const CSphIndexSettings *	m_pSettings;

	ISphQueryFilter ();
	virtual ~ISphQueryFilter ();

	void GetKeywords ( CSphVector <CSphKeywordInfo> & dKeywords );
	virtual void AddKeywordStats ( BYTE * sWord, const BYTE * sTokenized, int iQpos, CSphVector <CSphKeywordInfo> & dKeywords ) = 0;
};


DWORD sphParseMorphAot ( const char * );

struct CSphReconfigureSettings
{
	CSphTokenizerSettings	m_tTokenizer;
	CSphDictSettings		m_tDict;
	CSphIndexSettings		m_tIndex;
	CSphFieldFilterSettings m_tFieldFilter;
};

struct CSphReconfigureSetup
{
	ISphTokenizer *		m_pTokenizer;
	CSphDict *			m_pDict;
	CSphIndexSettings	m_tIndex;
	ISphFieldFilter *	m_pFieldFilter;

	CSphReconfigureSetup ();
	~CSphReconfigureSetup ();
};

uint64_t sphGetSettingsFNV ( const CSphIndexSettings & tSettings );

//////////////////////////////////////////////////////////////////////////
// USER VARIABLES
//////////////////////////////////////////////////////////////////////////

/// value container for the intset uservar type
class UservarIntSet_c : public CSphVector<SphAttr_t>, public ISphRefcountedMT
{
};

extern UservarIntSet_c * ( *g_pUservarsHook )( const CSphString & sUservar );

//////////////////////////////////////////////////////////////////////////
// BINLOG INTERNALS
//////////////////////////////////////////////////////////////////////////

/// global binlog interface
class ISphBinlog : ISphNoncopyable
{
public:
	virtual				~ISphBinlog () {}

	virtual void		BinlogUpdateAttributes ( int64_t * pTID, const char * sIndexName, const CSphAttrUpdate & tUpd ) = 0;
	virtual void		NotifyIndexFlush ( const char * sIndexName, int64_t iTID, bool bShutdown ) = 0;
};

//////////////////////////////////////////////////////////////////////////
// MISC FUNCTION PROTOTYPES
//////////////////////////////////////////////////////////////////////////

struct SphStringSorterRemap_t
{
	CSphAttrLocator m_tSrc;
	CSphAttrLocator m_tDst;
};

struct ThrottleState_t
{
	int64_t	m_tmLastIOTime;
	int		m_iMaxIOps;
	int		m_iMaxIOSize;

	ThrottleState_t ()
		: m_tmLastIOTime ( 0 )
		, m_iMaxIOps ( 0 )
		, m_iMaxIOSize ( 0 )
	{}
};

const BYTE *	SkipQuoted ( const BYTE * p );

bool			sphSortGetStringRemap ( const ISphSchema & tSorterSchema, const ISphSchema & tIndexSchema, CSphVector<SphStringSorterRemap_t> & dAttrs );
bool			sphIsSortStringInternal ( const char * sColumnName );
/// make string lowercase but keep case of JSON.field
void			sphColumnToLowercase ( char * sVal );

bool			sphCheckQueryHeight ( const struct XQNode_t * pRoot, CSphString & sError );
void			sphTransformExtendedQuery ( XQNode_t ** ppNode, const CSphIndexSettings & tSettings, bool bHasBooleanOptimization, const ISphKeywordsStat * pKeywords );
void			TransformAotFilter ( XQNode_t * pNode, const CSphWordforms * pWordforms, const CSphIndexSettings& tSettings );
bool			sphMerge ( const CSphIndex * pDst, const CSphIndex * pSrc, const CSphVector<SphDocID_t> & dKillList, CSphString & sError, CSphIndexProgress & tProgress, ThrottleState_t * pThrottle, volatile bool * pGlobalStop, volatile bool * pLocalStop );
CSphString		sphReconstructNode ( const XQNode_t * pNode, const CSphSchema * pSchema );

void			sphSetUnlinkOld ( bool bUnlink );
void			sphUnlinkIndex ( const char * sName, bool bForce );

void			WriteSchema ( CSphWriter & fdInfo, const CSphSchema & tSchema );
void			ReadSchema ( CSphReader & rdInfo, CSphSchema & m_tSchema, DWORD uVersion, bool bDynamic );
void			SaveIndexSettings ( CSphWriter & tWriter, const CSphIndexSettings & tSettings );
void			LoadIndexSettings ( CSphIndexSettings & tSettings, CSphReader & tReader, DWORD uVersion );
void			SaveTokenizerSettings ( CSphWriter & tWriter, ISphTokenizer * pTokenizer, int iEmbeddedLimit );
bool			LoadTokenizerSettings ( CSphReader & tReader, CSphTokenizerSettings & tSettings, CSphEmbeddedFiles & tEmbeddedFiles, DWORD uVersion, CSphString & sWarning );
void			SaveDictionarySettings ( CSphWriter & tWriter, CSphDict * pDict, bool bForceWordDict, int iEmbeddedLimit );
void			LoadDictionarySettings ( CSphReader & tReader, CSphDictSettings & tSettings, CSphEmbeddedFiles & tEmbeddedFiles, DWORD uVersion, CSphString & sWarning );
void			LoadFieldFilterSettings ( CSphReader & tReader, CSphFieldFilterSettings & tFieldFilterSettings );
void			SaveFieldFilterSettings ( CSphWriter & tWriter, ISphFieldFilter * pFieldFilter );

DWORD			ReadVersion ( const char * sPath, CSphString & sError );
bool			AddFieldLens ( CSphSchema & tSchema, bool bDynamic, CSphString & sError );

/// Get current thread local index - internal do not use
ISphRtIndex * sphGetCurrentIndexRT();

void			RebalanceWeights ( const CSphFixedVector<int64_t> & dTimers, WORD * pWeights );

// all indexes should produce same terms for same query
struct SphWordStatChecker_t
{
	SphWordStatChecker_t () {}
	void Set ( const SmallStringHash_T<CSphQueryResultMeta::WordStat_t> & hStat );
	void DumpDiffer ( const SmallStringHash_T<CSphQueryResultMeta::WordStat_t> & hStat, const char * sIndex, CSphString & sWarning ) const;

	CSphVector<uint64_t> m_dSrcWords;
};


enum ESphExtType
{
	SPH_EXT_TYPE_CUR = 0,
	SPH_EXT_TYPE_NEW,
	SPH_EXT_TYPE_OLD,
	SPH_EXT_TYPE_LOC
};

enum ESphExt
{
	SPH_EXT_SPH = 0,
	SPH_EXT_SPA = 1,
	SPH_EXT_MVP = 9
};

const char ** sphGetExts ( ESphExtType eType, DWORD uVersion=INDEX_FORMAT_VERSION );
int sphGetExtCount ( DWORD uVersion=INDEX_FORMAT_VERSION );
const char * sphGetExt ( ESphExtType eType, ESphExt eExt );

int sphDictCmp ( const char * pStr1, int iLen1, const char * pStr2, int iLen2 );
int sphDictCmpStrictly ( const char * pStr1, int iLen1, const char * pStr2, int iLen2 );

template <typename CP>
int sphCheckpointCmp ( const char * sWord, int iLen, SphWordID_t iWordID, bool bWordDict, const CP & tCP )
{
	if ( bWordDict )
		return sphDictCmp ( sWord, iLen, tCP.m_sWord, strlen ( tCP.m_sWord ) );

	int iRes = 0;
	iRes = iWordID<tCP.m_uWordID ? -1 : iRes;
	iRes = iWordID>tCP.m_uWordID ? 1 : iRes;
	return iRes;
}

template <typename CP>
int sphCheckpointCmpStrictly ( const char * sWord, int iLen, SphWordID_t iWordID, bool bWordDict, const CP & tCP )
{
	if ( bWordDict )
		return sphDictCmpStrictly ( sWord, iLen, tCP.m_sWord, strlen ( tCP.m_sWord ) );

	int iRes = 0;
	iRes = iWordID<tCP.m_uWordID ? -1 : iRes;
	iRes = iWordID>tCP.m_uWordID ? 1 : iRes;
	return iRes;
}

template < typename CP >
struct SphCheckpointAccess_fn
{
	const CP & operator () ( const CP * pCheckpoint ) const { return *pCheckpoint; }
};

template < typename CP, typename PRED >
const CP * sphSearchCheckpoint ( const char * sWord, int iWordLen, SphWordID_t iWordID
							, bool bStarMode, bool bWordDict
							, const CP * pFirstCP, const CP * pLastCP, const PRED & tPred )
{
	assert ( !bWordDict || iWordLen>0 );

	const CP * pStart = pFirstCP;
	const CP * pEnd = pLastCP;

	if ( bStarMode && sphCheckpointCmp ( sWord, iWordLen, iWordID, bWordDict, tPred ( pStart ) )<0 )
		return NULL;
	if ( !bStarMode && sphCheckpointCmpStrictly ( sWord, iWordLen, iWordID, bWordDict, tPred ( pStart ) )<0 )
		return NULL;

	if ( sphCheckpointCmpStrictly ( sWord, iWordLen, iWordID, bWordDict, tPred ( pEnd ) )>=0 )
		pStart = pEnd;
	else
	{
		while ( pEnd-pStart>1 )
		{
			const CP * pMid = pStart + (pEnd-pStart)/2;
			const int iCmpRes = sphCheckpointCmpStrictly ( sWord, iWordLen, iWordID, bWordDict, tPred ( pMid ) );

			if ( iCmpRes==0 )
			{
				pStart = pMid;
				break;
			} else if ( iCmpRes<0 )
				pEnd = pMid;
			else
				pStart = pMid;
		}

		assert ( pStart>=pFirstCP );
		assert ( pStart<=pLastCP );
		assert ( sphCheckpointCmp ( sWord, iWordLen, iWordID, bWordDict, tPred ( pStart ) )>=0
			&& sphCheckpointCmpStrictly ( sWord, iWordLen, iWordID, bWordDict, tPred ( pEnd ) )<0 );
	}

	return pStart;
}

template < typename CP >
const CP * sphSearchCheckpoint ( const char * sWord, int iWordLen, SphWordID_t iWordID, bool bStarMode, bool bWordDict , const CP * pFirstCP, const CP * pLastCP )
{
	return sphSearchCheckpoint ( sWord, iWordLen, iWordID, bStarMode, bWordDict, pFirstCP, pLastCP, SphCheckpointAccess_fn<CP>() );
}


int sphCollateLibcCI ( const BYTE * pStr1, const BYTE * pStr2, bool bPacked );
int sphCollateLibcCS ( const BYTE * pStr1, const BYTE * pStr2, bool bPacked );
int sphCollateUtf8GeneralCI ( const BYTE * pArg1, const BYTE * pArg2, bool bPacked );
int sphCollateBinary ( const BYTE * pStr1, const BYTE * pStr2, bool bPacked );

class ISphRtDictWraper : public CSphDict
{
public:
	virtual const BYTE *	GetPackedKeywords () = 0;
	virtual int				GetPackedLen () = 0;

	virtual void			ResetKeywords() = 0;

	virtual const char *	GetLastWarning() const = 0;
	virtual void			ResetWarning() = 0;
};

ISphRtDictWraper * sphCreateRtKeywordsDictionaryWrapper ( CSphDict * pBase );

struct SphExpanded_t
{
	int m_iNameOff;
	int m_iDocs;
	int m_iHits;
};

struct ISphSubstringPayload
{
	ISphSubstringPayload () {}
	virtual ~ISphSubstringPayload() {}
};


class ISphWordlist
{
public:
	struct Args_t : public ISphNoncopyable
	{
		CSphVector<SphExpanded_t>	m_dExpanded;
		const bool					m_bPayload;
		int							m_iExpansionLimit;
		const bool					m_bHasMorphology;
		const ESphHitless			m_eHitless;

		ISphSubstringPayload *		m_pPayload;
		int							m_iTotalDocs;
		int							m_iTotalHits;
		const void *				m_pIndexData;
		CSphVector <CSphKeywordInfo> * m_pKeywords;

		Args_t ( bool bPayload, int iExpansionLimit, bool bHasMorphology, ESphHitless eHitless, const void * pIndexData, CSphVector <CSphKeywordInfo> * dKeywords );
		~Args_t ();
		void AddExpanded ( const BYTE * sWord, int iLen, int iDocs, int iHits );
		const char * GetWordExpanded ( int iIndex ) const;

	private:
		CSphVector<char> m_sBuf;
	};

	virtual ~ISphWordlist () {}
	virtual void GetPrefixedWords ( const char * sSubstring, int iSubLen, const char * sWildcard, Args_t & tArgs ) const = 0;
	virtual void GetInfixedWords ( const char * sSubstring, int iSubLen, const char * sWildcard, Args_t & tArgs ) const = 0;
};


class CSphScopedPayload
{
public:
	CSphScopedPayload () {}
	~CSphScopedPayload ()
	{
		ARRAY_FOREACH ( i, m_dPayloads )
			SafeDelete ( m_dPayloads[i] );
	}
	void Add ( ISphSubstringPayload * pPayload ) { m_dPayloads.Add ( pPayload ); }

private:
	CSphVector<ISphSubstringPayload *> m_dPayloads;
};


struct ExpansionContext_t
{
	const ISphWordlist * m_pWordlist;
	BYTE * m_pBuf;
	CSphQueryResultMeta * m_pResult;
	int m_iMinPrefixLen;
	int m_iMinInfixLen;
	int m_iExpansionLimit;
	bool m_bHasMorphology;
	bool m_bMergeSingles;
	CSphScopedPayload * m_pPayloads;
	ESphHitless m_eHitless;
	const void * m_pIndexData;
	CSphVector <CSphKeywordInfo> * m_pKeywords;

	ExpansionContext_t ();
};


XQNode_t * sphExpandXQNode ( XQNode_t * pNode, ExpansionContext_t & tCtx );
XQNode_t * sphQueryExpandKeywords ( XQNode_t * pNode, const CSphIndexSettings & tSettings );
inline int sphGetExpansionMagic ( int iDocs, int iHits )
{
	return ( iHits<=256 ? 1 : iDocs + 1 ); // magic threshold; mb make this configurable?
}
inline bool sphIsExpandedPayload ( int iDocs, int iHits )
{
	return ( iHits<=256 || iDocs<32 ); // magic threshold; mb make this configurable?
}

void sphAddKeyword ( CSphVector <CSphKeywordInfo> * pKeywords, const char * sWord, int iDocs, int iHits );
bool sphCheckParsedQuery ( bool & bParsed, XQQuery_t & tParsed, CSphString * pError );

template<typename T>
struct ExpandedOrderDesc_T
{
	bool IsLess ( const T & a, const T & b )
	{
		return ( sphGetExpansionMagic ( a.m_iDocs, a.m_iHits )>sphGetExpansionMagic ( b.m_iDocs, b.m_iHits ) );
	}
};


class CSphKeywordDeltaWriter
{
private:
	BYTE m_sLastKeyword [SPH_MAX_WORD_LEN*3+4];
	int m_iLastLen;

public:
	CSphKeywordDeltaWriter ()
	{
		Reset();
	}

	void Reset ()
	{
		m_iLastLen = 0;
	}

	template <typename F>
	void PutDelta ( F & WRITER, const BYTE * pWord, int iLen )
	{
		assert ( pWord && iLen );

		// how many bytes of a previous keyword can we reuse?
		BYTE iMatch = 0;
		int iMinLen = Min ( m_iLastLen, iLen );
		assert ( iMinLen<(int)sizeof(m_sLastKeyword) );
		while ( iMatch<iMinLen && m_sLastKeyword[iMatch]==pWord[iMatch] )
		{
			iMatch++;
		}

		BYTE iDelta = (BYTE)( iLen - iMatch );
		assert ( iDelta>0 );

		assert ( iLen < (int)sizeof(m_sLastKeyword) );
		memcpy ( m_sLastKeyword, pWord, iLen );
		m_iLastLen = iLen;

		// match and delta are usually tiny, pack them together in 1 byte
		// tricky bit, this byte leads the entry so it must never be 0 (aka eof mark)!
		if ( iDelta<=8 && iMatch<=15 )
		{
			BYTE uPacked = ( 0x80 + ( (iDelta-1)<<4 ) + iMatch );
			WRITER.PutBytes ( &uPacked, 1 );
		} else
		{
			WRITER.PutBytes ( &iDelta, 1 ); // always greater than 0
			WRITER.PutBytes ( &iMatch, 1 );
		}

		WRITER.PutBytes ( pWord + iMatch, iDelta );
	}
};

BYTE sphDoclistHintPack ( SphOffset_t iDocs, SphOffset_t iLen );

// wordlist checkpoints frequency
#define SPH_WORDLIST_CHECKPOINT 64

/// startup mva updates arena
const char *		sphArenaInit ( int iMaxBytes );

#if USE_WINDOWS
void localtime_r ( const time_t * clock, struct tm * res );
void gmtime_r ( const time_t * clock, struct tm * res );
#endif

struct InfixBlock_t
{
	union
	{
		const char *	m_sInfix;
		DWORD			m_iInfixOffset;
	};
	DWORD				m_iOffset;
};


/// infix hash builder
class ISphInfixBuilder
{
public:
	explicit		ISphInfixBuilder() {}
	virtual			~ISphInfixBuilder() {}
	virtual void	AddWord ( const BYTE * pWord, int iWordLength, int iCheckpoint, bool bHasMorphology ) = 0;
	virtual void	SaveEntries ( CSphWriter & wrDict ) = 0;
	virtual int64_t	SaveEntryBlocks ( CSphWriter & wrDict ) = 0;
	virtual int		GetBlocksWordsSize () const = 0;
};


ISphInfixBuilder * sphCreateInfixBuilder ( int iCodepointBytes, CSphString * pError );
bool sphLookupInfixCheckpoints ( const char * sInfix, int iBytes, const BYTE * pInfixes, const CSphVector<InfixBlock_t> & dInfixBlocks, int iInfixCodepointBytes, CSphVector<int> & dCheckpoints );
// calculate length, upto iInfixCodepointBytes chars from infix start
int sphGetInfixLength ( const char * sInfix, int iBytes, int iInfixCodepointBytes );


/// compute utf-8 character length in bytes from its first byte
inline int sphUtf8CharBytes ( BYTE uFirst )
{
	switch ( uFirst>>4 )
	{
		case 12: return 2; // 110x xxxx, 2 bytes
		case 13: return 2; // 110x xxxx, 2 bytes
		case 14: return 3; // 1110 xxxx, 3 bytes
		case 15: return 4; // 1111 0xxx, 4 bytes
		default: return 1; // either 1 byte, or invalid/unsupported code
	}
}

//////////////////////////////////////////////////////////////////////////

/// snippet setupper
/// used by searchd and SNIPPET() function in exprs
/// should probably be refactored as a single function
/// a precursor to sphBuildExcerpts() call
class SnippetContext_t : ISphNoncopyable
{
private:
	CSphScopedPtr<CSphDict> m_tDictCloned;
	CSphScopedPtr<CSphDict> m_tExactDict;

public:
	CSphDict * m_pDict;
	CSphScopedPtr<ISphTokenizer> m_tTokenizer;
	CSphScopedPtr<CSphHTMLStripper> m_tStripper;
	ISphTokenizer * m_pQueryTokenizer;
	XQQuery_t m_tExtQuery;
	DWORD m_eExtQuerySPZ;

	SnippetContext_t()
		: m_tDictCloned ( NULL )
		, m_tExactDict ( NULL )
		, m_pDict ( NULL )
		, m_tTokenizer ( NULL )
		, m_tStripper ( NULL )
		, m_pQueryTokenizer ( NULL )
		, m_eExtQuerySPZ ( SPH_SPZ_NONE )
	{
	}

	~SnippetContext_t()
	{
		SafeDelete ( m_pQueryTokenizer );
	}

	static CSphDict * SetupExactDict ( const CSphIndexSettings & tSettings, CSphScopedPtr<CSphDict> & tExact, CSphDict * pDict )
	{
		// handle index_exact_words
		if ( !tSettings.m_bIndexExactWords )
			return pDict;

		tExact = new CSphDictExact ( pDict );
		return tExact.Ptr();
	}

	static DWORD CollectQuerySPZ ( const XQNode_t * pNode )
	{
		if ( !pNode )
			return SPH_SPZ_NONE;

		DWORD eSPZ = SPH_SPZ_NONE;
		if ( pNode->GetOp()==SPH_QUERY_SENTENCE )
			eSPZ |= SPH_SPZ_SENTENCE;
		else if ( pNode->GetOp()==SPH_QUERY_PARAGRAPH )
			eSPZ |= SPH_SPZ_PARAGRAPH;

		ARRAY_FOREACH ( i, pNode->m_dChildren )
			eSPZ |= CollectQuerySPZ ( pNode->m_dChildren[i] );

		return eSPZ;
	}

	static bool SetupStripperSPZ ( const CSphIndexSettings & tSettings, const ExcerptQuery_t & q,
		bool bSetupSPZ, CSphScopedPtr<CSphHTMLStripper> & tStripper, ISphTokenizer * pTokenizer,
		CSphString & sError )
	{
		if ( bSetupSPZ &&
			( !pTokenizer->EnableSentenceIndexing ( sError ) || !pTokenizer->EnableZoneIndexing ( sError ) ) )
		{
			return false;
		}


		if ( q.m_sStripMode=="strip" || q.m_sStripMode=="retain"
			|| ( q.m_sStripMode=="index" && tSettings.m_bHtmlStrip ) )
		{
			// don't strip HTML markup in 'retain' mode - proceed zones only
			tStripper = new CSphHTMLStripper ( q.m_sStripMode!="retain" );

			if ( q.m_sStripMode=="index" )
			{
				if (
					!tStripper->SetIndexedAttrs ( tSettings.m_sHtmlIndexAttrs.cstr (), sError ) ||
					!tStripper->SetRemovedElements ( tSettings.m_sHtmlRemoveElements.cstr (), sError ) )
				{
					sError.SetSprintf ( "HTML stripper config error: %s", sError.cstr() );
					return false;
				}
			}

			if ( bSetupSPZ )
			{
				tStripper->EnableParagraphs();
			}

			// handle zone(s) in special mode only when passage_boundary enabled
			if ( bSetupSPZ && !tStripper->SetZones ( tSettings.m_sZones.cstr (), sError ) )
			{
				sError.SetSprintf ( "HTML stripper config error: %s", sError.cstr() );
				return false;
			}
		}

		return true;
	}

	bool Setup ( const CSphIndex * pIndex, const ExcerptQuery_t & tSettings, CSphString & sError )
	{
		assert ( pIndex );
		CSphScopedPtr<CSphDict> tDictCloned ( NULL );
		m_pDict = pIndex->GetDictionary();
		if ( m_pDict->HasState() )
			m_tDictCloned = m_pDict = m_pDict->Clone();

		// AOT tokenizer works only with query mode
		if ( pIndex->GetSettings().m_uAotFilterMask &&
			( !tSettings.m_bHighlightQuery || tSettings.m_bExactPhrase ) )
		{
			if ( !tSettings.m_bHighlightQuery )
				sError.SetSprintf ( "failed to setup AOT with query_mode=0, use query_mode=1" );
			else
				sError.SetSprintf ( "failed to setup AOT with exact_phrase, use phrase search operator with query_mode=1" );
			return false;
		}

		// OPTIMIZE! do a lightweight indexing clone here
		if ( tSettings.m_bHighlightQuery && pIndex->GetSettings().m_uAotFilterMask )
			m_tTokenizer = sphAotCreateFilter ( pIndex->GetTokenizer()->Clone ( SPH_CLONE_INDEX ), m_pDict, pIndex->GetSettings().m_bIndexExactWords, pIndex->GetSettings().m_uAotFilterMask );
		else
			m_tTokenizer = pIndex->GetTokenizer()->Clone ( SPH_CLONE_INDEX );

		m_pQueryTokenizer = NULL;
		if ( tSettings.m_bHighlightQuery || tSettings.m_bExactPhrase )
		{
			m_pQueryTokenizer =	pIndex->GetQueryTokenizer()->Clone ( SPH_CLONE_QUERY_LIGHTWEIGHT );
		} else
		{
			// legacy query mode should handle exact form modifier and star wildcard
			m_pQueryTokenizer = pIndex->GetTokenizer()->Clone ( SPH_CLONE_INDEX );
			if ( pIndex->IsStarDict() )
				m_pQueryTokenizer->AddPlainChar ( '*' );
			if ( pIndex->GetSettings().m_bIndexExactWords )
				m_pQueryTokenizer->AddPlainChar ( '=' );
		}

		// setup exact dictionary if needed
		m_pDict = SetupExactDict ( pIndex->GetSettings(), m_tExactDict, m_pDict );

		if ( tSettings.m_bHighlightQuery )
		{
			// OPTIMIZE? double lightweight clone here? but then again it's lightweight
			if ( !sphParseExtendedQuery ( m_tExtQuery, tSettings.m_sWords.cstr(), NULL, m_pQueryTokenizer,
				&pIndex->GetMatchSchema(), m_pDict, pIndex->GetSettings() ) )
			{
				sError = m_tExtQuery.m_sParseError;
				return false;
			}
			if ( m_tExtQuery.m_pRoot )
				m_tExtQuery.m_pRoot->ClearFieldMask();

			m_eExtQuerySPZ = SPH_SPZ_NONE;
			m_eExtQuerySPZ |= CollectQuerySPZ ( m_tExtQuery.m_pRoot );
			if ( m_tExtQuery.m_dZones.GetLength() )
				m_eExtQuerySPZ |= SPH_SPZ_ZONE;

			if ( pIndex->GetSettings().m_uAotFilterMask )
				TransformAotFilter ( m_tExtQuery.m_pRoot, m_pDict->GetWordforms(), pIndex->GetSettings() );
		}

		bool bSetupSPZ = ( tSettings.m_ePassageSPZ!=SPH_SPZ_NONE || m_eExtQuerySPZ!=SPH_SPZ_NONE ||
			( tSettings.m_sStripMode=="retain" && tSettings.m_bHighlightQuery ) );

		if ( !SetupStripperSPZ ( pIndex->GetSettings(), tSettings, bSetupSPZ, m_tStripper, m_tTokenizer.Ptr(), sError ) )
			return false;

		return true;
	}
};

/// parser to build lowercaser from textual config
class CSphCharsetDefinitionParser
{
public:
	CSphCharsetDefinitionParser () : m_bError ( false ) {}
	bool				Parse ( const char * sConfig, CSphVector<CSphRemapRange> & dRanges );
	const char *		GetLastError ();

protected:
	bool				m_bError;
	char				m_sError [ 1024 ];
	const char *		m_pCurrent;

	bool				Error ( const char * sMessage );
	void				SkipSpaces ();
	bool				IsEof ();
	bool				CheckEof ();
	int					HexDigit ( int c );
	int					ParseCharsetCode ();
	bool				AddRange ( const CSphRemapRange & tRange, CSphVector<CSphRemapRange> & dRanges );
};


struct StoredToken_t
{
	BYTE			m_sToken [3*SPH_MAX_WORD_LEN+4];
	// tokenized state
	const char *	m_szTokenStart;
	const char *	m_szTokenEnd;
	const char *	m_pBufferPtr;
	const char *	m_pBufferEnd;
	int				m_iTokenLen;
	int				m_iOvershortCount;
	bool			m_bBoundary;
	bool			m_bSpecial;
	bool			m_bBlended;
	bool			m_bBlendedPart;
};

void FillStoredTokenInfo ( StoredToken_t & tToken, const BYTE * sToken, ISphTokenizer * pTokenizer );
CSphSource * sphCreateSourceTSVpipe ( const CSphConfigSection * pSource, FILE * pPipe, const char * sSourceName, bool bProxy );
CSphSource * sphCreateSourceCSVpipe ( const CSphConfigSection * pSource, FILE * pPipe, const char * sSourceName, bool bProxy );

uint64_t sphCalcLocatorHash ( const CSphAttrLocator & tLoc, uint64_t uPrevHash );
uint64_t sphCalcExprDepHash ( const char * szTag, ISphExpr * pExpr, const ISphSchema & tSorterSchema, uint64_t uPrevHash, bool & bDisable );
uint64_t sphCalcExprDepHash ( ISphExpr * pExpr, const ISphSchema & tSorterSchema, uint64_t uPrevHash, bool & bDisable );

inline void FlipEndianess ( DWORD* pData )
{
	BYTE* pB = (BYTE*)pData;
	BYTE a = pB[0];
	pB[0] = pB[3];
	pB[3] = a;
	a = pB[1];
	pB[1] = pB[2];
	pB[2] = a;
};

#endif // _sphinxint_

//
// $Id$
//
