//
// $Id$
//

//
// Sphinx UDF function example
//
// Linux
// gcc -fPIC -shared -o udfexample.so udfexample.c
// CREATE FUNCTION sequence RETURNS INT SONAME 'udfexample.so';
// CREATE FUNCTION strtoint RETURNS INT SONAME 'udfexample.so';
// CREATE FUNCTION avgmva RETURNS FLOAT SONAME 'udfexample.so';
// CREATE FUNCTION asciitolower RETURNS STRING SONAME 'udfexample.so';
// CREATE PLUGIN square_wc_rank TYPE 'ranker' SONAME 'udfexample.so';
//
// Windows
// cl /MTd /LD udfexample.c
// CREATE FUNCTION sequence RETURNS INT SONAME 'udfexample.dll';
// CREATE FUNCTION strtoint RETURNS INT SONAME 'udfexample.dll';
// CREATE FUNCTION avgmva RETURNS FLOAT SONAME 'udfexample.dll';
// CREATE FUNCTION asciitolower RETURNS STRING SONAME 'udfexample.dll';
// CREATE PLUGIN square_wc_rank TYPE 'ranker' SONAME 'udfexample.dll';
//

#include "sphinxudf.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef _MSC_VER
#define snprintf _snprintf
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

/// UDF version control
/// gets called once when the library is loaded
DLLEXPORT int udfexample_ver ()
{
	return SPH_UDF_VERSION;
}


/// UDF re-initialization func
/// gets called on sighup (workers=prefork only)
DLLEXPORT void udfexample_reinit ()
{
}


/// UDF initialization
/// gets called on every query, when query begins
/// args are filled with values for a particular query
DLLEXPORT int sequence_init ( SPH_UDF_INIT * init, SPH_UDF_ARGS * args, char * error_message )
{
	// check argument count
	if ( args->arg_count > 1 )
	{
		snprintf ( error_message, SPH_UDF_ERROR_LEN, "SEQUENCE() takes either 0 or 1 arguments" );
		return 1;
	}

	// check argument type
	if ( args->arg_count && args->arg_types[0]!=SPH_UDF_TYPE_UINT32 )
    {
		snprintf ( error_message, SPH_UDF_ERROR_LEN, "SEQUENCE() requires 1st argument to be uint" );
		return 1;
	}

	// allocate and init counter storage
	init->func_data = (void*) malloc ( sizeof(int) );
	if ( !init->func_data )
	{
		snprintf ( error_message, SPH_UDF_ERROR_LEN, "malloc() failed" );
		return 1;
	}
	*(int*)init->func_data = 1;

	// all done
	return 0;
}


/// UDF deinitialization
/// gets called on every query, when query ends
DLLEXPORT void sequence_deinit ( SPH_UDF_INIT * init )
{
	// deallocate storage
	if ( init->func_data )
	{
		free ( init->func_data );
		init->func_data = NULL;
	}
}


/// UDF implementation
/// gets called for every row, unless optimized away
DLLEXPORT sphinx_int64_t sequence ( SPH_UDF_INIT * init, SPH_UDF_ARGS * args, char * error_flag )
{
	int res = (*(int*)init->func_data)++;
	if ( args->arg_count )
		res += *(int*)args->arg_values[0];
	return res;
}

//////////////////////////////////////////////////////////////////////////

DLLEXPORT int strtoint_init ( SPH_UDF_INIT * init, SPH_UDF_ARGS * args, char * error_message )
{
	if ( args->arg_count!=1 || args->arg_types[0]!=SPH_UDF_TYPE_STRING )
	{
		snprintf ( error_message, SPH_UDF_ERROR_LEN, "STRTOINT() requires 1 string argument" );
		return 1;
	}
	return 0;
}

DLLEXPORT sphinx_int64_t strtoint ( SPH_UDF_INIT * init, SPH_UDF_ARGS * args, char * error_flag )
{
	const char * s = args->arg_values[0];
	int len = args->str_lengths[0], res = 0;

	while ( len>0 && *s>='0' && *s<='9' )
	{
		res = *s - '0' + 10 * res;
		len--;
		s++;
	}

	return res;
}

//////////////////////////////////////////////////////////////////////////

DLLEXPORT int avgmva_init ( SPH_UDF_INIT * init, SPH_UDF_ARGS * args, char * error_message )
{
	if ( args->arg_count!=1 ||
		( args->arg_types[0]!=SPH_UDF_TYPE_UINT32SET && args->arg_types[0]!=SPH_UDF_TYPE_UINT64SET ) )
	{
		snprintf ( error_message, SPH_UDF_ERROR_LEN, "AVGMVA() requires 1 MVA argument" );
		return 1;
	}

	// store our mva vs mva64 flag to func_data
	init->func_data = (void*)(int)( args->arg_types[0]==SPH_UDF_TYPE_UINT64SET ? 1 : 0 );
	return 0;
}

DLLEXPORT double avgmva ( SPH_UDF_INIT * init, SPH_UDF_ARGS * args, char * error_flag )
{
	unsigned int * mva = (unsigned int *) args->arg_values[0];
	double res = 0;
	int i, n, is64;

	if ( !mva )
		return res;

	// Both MVA32 and MVA64 are stored as dword (unsigned 32-bit) arrays.
	// The first dword stores the array length (always in dwords too), and
	// the next ones store the values. In pseudocode:
	//
	// unsigned int num_dwords
	// unsigned int data [ num_dwords ]
	//
	// With MVA32, this lets you access the values pretty naturally.
	//
	// With MVA64, however, we have to do a few tricks:
	// a) divide num_dwords by 2 to get the number of 64-bit elements,
	// b) assemble those 64-bit values from dword pairs.
	//
	// The latter is required for architectures where non-aligned
	// 64-bit access crashes. On Intel, we could have also done it
	// like this:
	//
	// int * raw_ptr = (int*) args->arg_values[0];
	// int mva64_count = (*raw_ptr) / 2;
	// sphinx_uint64_t * mva64_values = (sphinx_uint64_t*)(raw_ptr + 1);

	// pull "mva32 or mva64" flag (that we stored in _init) from func_data
	is64 = (int)(init->func_data) != 0;
	if ( is64 )
	{
		// handle mva64
		n = *mva++ / 2;
		for ( i=0; i<n; i++ )
		{
			res += (((sphinx_uint64_t)mva[1]) << 32) + mva[0];
			mva += 2;
		}
	} else
	{
		// handle mva32
		n = *mva++;
		for ( i=0; i<n; i++ )
			res += *mva++;
	}

	return res/n;
}

//////////////////////////////////////////////////////////////////////////

DLLEXPORT int asciitolower_init ( SPH_UDF_INIT * init, SPH_UDF_ARGS * args, char * error_message )
{
	if ( args->arg_count!=1 || args->arg_types[0]!=SPH_UDF_TYPE_STRING )
	{
		snprintf ( error_message, SPH_UDF_ERROR_LEN, "ASCIITOLOWER() requires 1 string argument" );
		return 1;
	}

	return 0;
}

DLLEXPORT char * asciitolower ( SPH_UDF_INIT * init, SPH_UDF_ARGS * args, char * error_flag )
{
	char * in;
	char * out;
	int i, len;

	len = args->str_lengths[0];
	in = args->arg_values[0];
	out = args->fn_malloc(len + 1);
	for ( i=0; i<len; i++ )
	{
		if ( in[i] >= 'A' && in[i] <= 'Z' )
			out[i] = in[i] - 'A' + 'a';
		else
			out[i] = in[i];
	}
	out[len] = '\0';

	return out;
}

//////////////////////////////////////////////////////////////////////////

DLLEXPORT int square_wc_rank_init ( void ** userdata, SPH_RANKER_INIT * ranker, char * error )
{
	*userdata = (void*) malloc ( sizeof(int) );
	**(int**)userdata = 0;

	return 0;
}

DLLEXPORT void square_wc_rank_update ( void * userdata, SPH_RANKER_HIT * hit )
{
	++*(int*)userdata;
}

DLLEXPORT int square_wc_rank_finalize ( void * userdata, int match_weight )
{
	int word_count;

	word_count = *(int*)userdata;
	*(int*)userdata = 0;
	return word_count * word_count;
}

DLLEXPORT int square_wc_rank_deinit ( void * userdata )
{
	if ( userdata )
	{
		free ( userdata );
		userdata = NULL;
	}
	return 0;
}

//
// $Id$
//
