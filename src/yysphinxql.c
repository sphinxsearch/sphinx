/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_IDENT = 258,
     TOK_ATIDENT = 259,
     TOK_CONST_INT = 260,
     TOK_CONST_FLOAT = 261,
     TOK_CONST_MVA = 262,
     TOK_QUOTED_STRING = 263,
     TOK_USERVAR = 264,
     TOK_SYSVAR = 265,
     TOK_CONST_STRINGS = 266,
     TOK_BAD_NUMERIC = 267,
     TOK_AGENT = 268,
     TOK_AS = 269,
     TOK_ASC = 270,
     TOK_ATTACH = 271,
     TOK_AVG = 272,
     TOK_BEGIN = 273,
     TOK_BETWEEN = 274,
     TOK_BY = 275,
     TOK_CALL = 276,
     TOK_CHARACTER = 277,
     TOK_COLLATION = 278,
     TOK_COMMIT = 279,
     TOK_COMMITTED = 280,
     TOK_COUNT = 281,
     TOK_CREATE = 282,
     TOK_DELETE = 283,
     TOK_DESC = 284,
     TOK_DESCRIBE = 285,
     TOK_DISTINCT = 286,
     TOK_DIV = 287,
     TOK_DROP = 288,
     TOK_FALSE = 289,
     TOK_FLOAT = 290,
     TOK_FLUSH = 291,
     TOK_FROM = 292,
     TOK_FUNCTION = 293,
     TOK_GLOBAL = 294,
     TOK_GROUP = 295,
     TOK_GROUPBY = 296,
     TOK_GROUP_CONCAT = 297,
     TOK_ID = 298,
     TOK_IN = 299,
     TOK_INDEX = 300,
     TOK_INSERT = 301,
     TOK_INT = 302,
     TOK_INTO = 303,
     TOK_ISOLATION = 304,
     TOK_LEVEL = 305,
     TOK_LIKE = 306,
     TOK_LIMIT = 307,
     TOK_MATCH = 308,
     TOK_MAX = 309,
     TOK_META = 310,
     TOK_MIN = 311,
     TOK_MOD = 312,
     TOK_NAMES = 313,
     TOK_NULL = 314,
     TOK_OPTION = 315,
     TOK_ORDER = 316,
     TOK_OPTIMIZE = 317,
     TOK_PLAN = 318,
     TOK_PROFILE = 319,
     TOK_RAND = 320,
     TOK_READ = 321,
     TOK_REPEATABLE = 322,
     TOK_REPLACE = 323,
     TOK_RETURNS = 324,
     TOK_ROLLBACK = 325,
     TOK_RTINDEX = 326,
     TOK_SELECT = 327,
     TOK_SERIALIZABLE = 328,
     TOK_SET = 329,
     TOK_SESSION = 330,
     TOK_SHOW = 331,
     TOK_SONAME = 332,
     TOK_START = 333,
     TOK_STATUS = 334,
     TOK_STRING = 335,
     TOK_SUM = 336,
     TOK_TABLES = 337,
     TOK_TO = 338,
     TOK_TRANSACTION = 339,
     TOK_TRUE = 340,
     TOK_TRUNCATE = 341,
     TOK_UNCOMMITTED = 342,
     TOK_UPDATE = 343,
     TOK_VALUES = 344,
     TOK_VARIABLES = 345,
     TOK_WARNINGS = 346,
     TOK_WEIGHT = 347,
     TOK_WHERE = 348,
     TOK_WITHIN = 349,
     TOK_OR = 350,
     TOK_AND = 351,
     TOK_NE = 352,
     TOK_GTE = 353,
     TOK_LTE = 354,
     TOK_NOT = 355,
     TOK_NEG = 356
   };
#endif
#define TOK_IDENT 258
#define TOK_ATIDENT 259
#define TOK_CONST_INT 260
#define TOK_CONST_FLOAT 261
#define TOK_CONST_MVA 262
#define TOK_QUOTED_STRING 263
#define TOK_USERVAR 264
#define TOK_SYSVAR 265
#define TOK_CONST_STRINGS 266
#define TOK_BAD_NUMERIC 267
#define TOK_AGENT 268
#define TOK_AS 269
#define TOK_ASC 270
#define TOK_ATTACH 271
#define TOK_AVG 272
#define TOK_BEGIN 273
#define TOK_BETWEEN 274
#define TOK_BY 275
#define TOK_CALL 276
#define TOK_CHARACTER 277
#define TOK_COLLATION 278
#define TOK_COMMIT 279
#define TOK_COMMITTED 280
#define TOK_COUNT 281
#define TOK_CREATE 282
#define TOK_DELETE 283
#define TOK_DESC 284
#define TOK_DESCRIBE 285
#define TOK_DISTINCT 286
#define TOK_DIV 287
#define TOK_DROP 288
#define TOK_FALSE 289
#define TOK_FLOAT 290
#define TOK_FLUSH 291
#define TOK_FROM 292
#define TOK_FUNCTION 293
#define TOK_GLOBAL 294
#define TOK_GROUP 295
#define TOK_GROUPBY 296
#define TOK_GROUP_CONCAT 297
#define TOK_ID 298
#define TOK_IN 299
#define TOK_INDEX 300
#define TOK_INSERT 301
#define TOK_INT 302
#define TOK_INTO 303
#define TOK_ISOLATION 304
#define TOK_LEVEL 305
#define TOK_LIKE 306
#define TOK_LIMIT 307
#define TOK_MATCH 308
#define TOK_MAX 309
#define TOK_META 310
#define TOK_MIN 311
#define TOK_MOD 312
#define TOK_NAMES 313
#define TOK_NULL 314
#define TOK_OPTION 315
#define TOK_ORDER 316
#define TOK_OPTIMIZE 317
#define TOK_PLAN 318
#define TOK_PROFILE 319
#define TOK_RAND 320
#define TOK_READ 321
#define TOK_REPEATABLE 322
#define TOK_REPLACE 323
#define TOK_RETURNS 324
#define TOK_ROLLBACK 325
#define TOK_RTINDEX 326
#define TOK_SELECT 327
#define TOK_SERIALIZABLE 328
#define TOK_SET 329
#define TOK_SESSION 330
#define TOK_SHOW 331
#define TOK_SONAME 332
#define TOK_START 333
#define TOK_STATUS 334
#define TOK_STRING 335
#define TOK_SUM 336
#define TOK_TABLES 337
#define TOK_TO 338
#define TOK_TRANSACTION 339
#define TOK_TRUE 340
#define TOK_TRUNCATE 341
#define TOK_UNCOMMITTED 342
#define TOK_UPDATE 343
#define TOK_VALUES 344
#define TOK_VARIABLES 345
#define TOK_WARNINGS 346
#define TOK_WEIGHT 347
#define TOK_WHERE 348
#define TOK_WITHIN 349
#define TOK_OR 350
#define TOK_AND 351
#define TOK_NE 352
#define TOK_GTE 353
#define TOK_LTE 354
#define TOK_NOT 355
#define TOK_NEG 356




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif


// some helpers
#include <float.h> // for FLT_MAX



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */


#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  108
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   886

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  99
/* YYNRULES -- Number of rules. */
#define YYNRULES  280
/* YYNRULES -- Number of states. */
#define YYNSTATES  533

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   356

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   109,    98,     2,
     113,   114,   107,   105,   115,   106,   118,   108,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   112,
     101,    99,   102,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   116,    97,   117,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,   100,   103,   104,   110,   111
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    56,    58,    60,
      62,    72,    73,    77,    78,    81,    86,    97,    99,   103,
     105,   108,   109,   111,   114,   116,   121,   126,   131,   136,
     141,   146,   150,   156,   158,   162,   163,   165,   168,   170,
     174,   178,   183,   187,   191,   197,   204,   208,   213,   219,
     223,   227,   231,   235,   239,   241,   247,   253,   259,   263,
     267,   271,   275,   279,   283,   287,   289,   291,   296,   300,
     304,   306,   308,   311,   313,   316,   318,   322,   323,   327,
     329,   333,   334,   336,   342,   343,   345,   349,   355,   357,
     361,   363,   366,   369,   370,   372,   375,   380,   381,   383,
     386,   388,   392,   396,   400,   406,   413,   417,   419,   423,
     427,   429,   431,   433,   435,   437,   439,   442,   445,   449,
     453,   457,   461,   465,   469,   473,   477,   481,   485,   489,
     493,   497,   501,   505,   509,   513,   517,   521,   523,   528,
     533,   537,   544,   551,   555,   557,   561,   563,   565,   569,
     575,   578,   579,   582,   584,   587,   590,   594,   596,   598,
     603,   608,   612,   614,   616,   618,   620,   622,   624,   628,
     633,   638,   643,   647,   652,   660,   666,   668,   670,   672,
     674,   676,   678,   680,   682,   684,   687,   694,   696,   698,
     699,   703,   705,   709,   711,   715,   719,   721,   725,   727,
     729,   731,   735,   738,   746,   756,   763,   765,   769,   771,
     775,   777,   781,   782,   785,   787,   791,   795,   796,   798,
     800,   802,   806,   808,   810,   814,   821,   823,   827,   831,
     835,   841,   846,   851,   852,   854,   857,   859,   863,   867,
     870,   874,   881,   882,   884,   886,   889,   892,   895,   897,
     905,   907,   909,   911,   915,   922,   926,   930,   932,   936,
     940
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     120,     0,    -1,   121,    -1,   122,    -1,   122,   112,    -1,
     175,    -1,   183,    -1,   169,    -1,   170,    -1,   173,    -1,
     184,    -1,   193,    -1,   195,    -1,   196,    -1,   199,    -1,
     204,    -1,   205,    -1,   209,    -1,   211,    -1,   212,    -1,
     213,    -1,   206,    -1,   214,    -1,   216,    -1,   217,    -1,
     123,    -1,   122,   112,   123,    -1,   124,    -1,   164,    -1,
     128,    -1,    72,   129,    37,   113,   125,   128,   114,   126,
     127,    -1,    -1,    61,    20,   149,    -1,    -1,    52,     5,
      -1,    52,     5,   115,     5,    -1,    72,   129,    37,   133,
     134,   143,   145,   147,   151,   153,    -1,   130,    -1,   129,
     115,   130,    -1,   107,    -1,   132,   131,    -1,    -1,     3,
      -1,    14,     3,    -1,   159,    -1,    17,   113,   159,   114,
      -1,    54,   113,   159,   114,    -1,    56,   113,   159,   114,
      -1,    81,   113,   159,   114,    -1,    42,   113,   159,   114,
      -1,    26,   113,   107,   114,    -1,    41,   113,   114,    -1,
      26,   113,    31,     3,   114,    -1,     3,    -1,   133,   115,
       3,    -1,    -1,   135,    -1,    93,   136,    -1,   137,    -1,
     136,    96,   136,    -1,   113,   136,   114,    -1,    53,   113,
       8,   114,    -1,   139,    99,   140,    -1,   139,   100,   140,
      -1,   139,    44,   113,   142,   114,    -1,   139,   110,    44,
     113,   142,   114,    -1,   139,    44,     9,    -1,   139,   110,
      44,     9,    -1,   139,    19,   140,    96,   140,    -1,   139,
     102,   140,    -1,   139,   101,   140,    -1,   139,   103,   140,
      -1,   139,   104,   140,    -1,   139,    99,   141,    -1,   138,
      -1,   139,    19,   141,    96,   141,    -1,   139,    19,   140,
      96,   141,    -1,   139,    19,   141,    96,   140,    -1,   139,
     102,   141,    -1,   139,   101,   141,    -1,   139,   103,   141,
      -1,   139,   104,   141,    -1,   139,    99,     8,    -1,   139,
     100,     8,    -1,   139,   100,   141,    -1,     3,    -1,     4,
      -1,    26,   113,   107,   114,    -1,    41,   113,   114,    -1,
      92,   113,   114,    -1,    43,    -1,     5,    -1,   106,     5,
      -1,     6,    -1,   106,     6,    -1,   140,    -1,   142,   115,
     140,    -1,    -1,    40,    20,   144,    -1,   139,    -1,   144,
     115,   139,    -1,    -1,   146,    -1,    94,    40,    61,    20,
     149,    -1,    -1,   148,    -1,    61,    20,   149,    -1,    61,
      20,    65,   113,   114,    -1,   150,    -1,   149,   115,   150,
      -1,   139,    -1,   139,    15,    -1,   139,    29,    -1,    -1,
     152,    -1,    52,     5,    -1,    52,     5,   115,     5,    -1,
      -1,   154,    -1,    60,   155,    -1,   156,    -1,   155,   115,
     156,    -1,     3,    99,     3,    -1,     3,    99,     5,    -1,
       3,    99,   113,   157,   114,    -1,     3,    99,     3,   113,
       8,   114,    -1,     3,    99,     8,    -1,   158,    -1,   157,
     115,   158,    -1,     3,    99,   140,    -1,     3,    -1,     4,
      -1,    43,    -1,     5,    -1,     6,    -1,     9,    -1,   106,
     159,    -1,   110,   159,    -1,   159,   105,   159,    -1,   159,
     106,   159,    -1,   159,   107,   159,    -1,   159,   108,   159,
      -1,   159,   101,   159,    -1,   159,   102,   159,    -1,   159,
      98,   159,    -1,   159,    97,   159,    -1,   159,   109,   159,
      -1,   159,    32,   159,    -1,   159,    57,   159,    -1,   159,
     104,   159,    -1,   159,   103,   159,    -1,   159,    99,   159,
      -1,   159,   100,   159,    -1,   159,    96,   159,    -1,   159,
      95,   159,    -1,   113,   159,   114,    -1,   116,   163,   117,
      -1,   160,    -1,     3,   113,   161,   114,    -1,    44,   113,
     161,   114,    -1,     3,   113,   114,    -1,    56,   113,   159,
     115,   159,   114,    -1,    54,   113,   159,   115,   159,   114,
      -1,    92,   113,   114,    -1,   162,    -1,   161,   115,   162,
      -1,   159,    -1,     8,    -1,     3,    99,   140,    -1,   163,
     115,     3,    99,   140,    -1,    76,   166,    -1,    -1,    51,
       8,    -1,    91,    -1,    79,   165,    -1,    55,   165,    -1,
      13,    79,   165,    -1,    64,    -1,    63,    -1,    13,     8,
      79,   165,    -1,    13,     3,    79,   165,    -1,    45,     3,
      79,    -1,     3,    -1,    59,    -1,     8,    -1,     5,    -1,
       6,    -1,   167,    -1,   168,   106,   167,    -1,    74,     3,
      99,   172,    -1,    74,     3,    99,   171,    -1,    74,     3,
      99,    59,    -1,    74,    58,   168,    -1,    74,    10,    99,
     168,    -1,    74,    39,     9,    99,   113,   142,   114,    -1,
      74,    39,     3,    99,   171,    -1,     3,    -1,     8,    -1,
      85,    -1,    34,    -1,   140,    -1,    24,    -1,    70,    -1,
     174,    -1,    18,    -1,    78,    84,    -1,   176,    48,     3,
     177,    89,   179,    -1,    46,    -1,    68,    -1,    -1,   113,
     178,   114,    -1,   139,    -1,   178,   115,   139,    -1,   180,
      -1,   179,   115,   180,    -1,   113,   181,   114,    -1,   182,
      -1,   181,   115,   182,    -1,   140,    -1,   141,    -1,     8,
      -1,   113,   142,   114,    -1,   113,   114,    -1,    28,    37,
     133,    93,    43,    99,   140,    -1,    28,    37,   133,    93,
      43,    44,   113,   142,   114,    -1,    21,     3,   113,   185,
     188,   114,    -1,   186,    -1,   185,   115,   186,    -1,   182,
      -1,   113,   187,   114,    -1,     8,    -1,   187,   115,     8,
      -1,    -1,   115,   189,    -1,   190,    -1,   189,   115,   190,
      -1,   182,   191,   192,    -1,    -1,    14,    -1,     3,    -1,
      52,    -1,   194,     3,   165,    -1,    30,    -1,    29,    -1,
      76,    82,   165,    -1,    88,   133,    74,   197,   135,   153,
      -1,   198,    -1,   197,   115,   198,    -1,     3,    99,   140,
      -1,     3,    99,   141,    -1,     3,    99,   113,   142,   114,
      -1,     3,    99,   113,   114,    -1,    76,   207,    90,   200,
      -1,    -1,   201,    -1,    93,   202,    -1,   203,    -1,   202,
      95,   203,    -1,     3,    99,     8,    -1,    76,    23,    -1,
      76,    22,    74,    -1,    74,   207,    84,    49,    50,   208,
      -1,    -1,    39,    -1,    75,    -1,    66,    87,    -1,    66,
      25,    -1,    67,    66,    -1,    73,    -1,    27,    38,     3,
      69,   210,    77,     8,    -1,    47,    -1,    35,    -1,    80,
      -1,    33,    38,     3,    -1,    16,    45,     3,    83,    71,
       3,    -1,    36,    71,     3,    -1,    72,   215,   151,    -1,
      10,    -1,    10,   118,     3,    -1,    86,    71,     3,    -1,
      62,    45,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   130,   130,   131,   132,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   161,   162,   166,   167,   171,
     172,   180,   193,   201,   203,   208,   217,   233,   234,   238,
     239,   242,   244,   245,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   261,   262,   265,   267,   271,   275,   276,
     277,   281,   286,   293,   301,   309,   318,   323,   328,   333,
     338,   343,   348,   353,   358,   363,   368,   373,   378,   383,
     388,   393,   398,   403,   411,   415,   416,   421,   427,   433,
     439,   448,   449,   460,   461,   465,   471,   477,   479,   483,
     487,   493,   495,   499,   510,   512,   516,   520,   527,   528,
     532,   533,   534,   537,   539,   543,   548,   555,   557,   561,
     565,   566,   570,   575,   580,   586,   591,   599,   604,   611,
     621,   622,   623,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   652,   653,
     654,   655,   656,   657,   661,   662,   666,   667,   671,   672,
     678,   681,   683,   687,   688,   689,   690,   691,   692,   693,
     698,   703,   713,   714,   715,   716,   717,   721,   722,   726,
     731,   736,   741,   742,   746,   751,   759,   760,   764,   765,
     766,   780,   781,   782,   786,   787,   793,   801,   802,   805,
     807,   811,   812,   816,   817,   821,   825,   826,   830,   831,
     832,   833,   834,   840,   848,   862,   870,   874,   881,   882,
     889,   899,   905,   907,   911,   916,   920,   927,   929,   933,
     934,   940,   948,   949,   955,   961,   969,   970,   974,   978,
     982,   986,   996,  1002,  1003,  1007,  1011,  1012,  1016,  1020,
    1027,  1034,  1040,  1041,  1042,  1046,  1047,  1048,  1049,  1055,
    1066,  1067,  1068,  1072,  1083,  1095,  1106,  1114,  1115,  1124,
    1135
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENT", "TOK_ATIDENT", 
  "TOK_CONST_INT", "TOK_CONST_FLOAT", "TOK_CONST_MVA", 
  "TOK_QUOTED_STRING", "TOK_USERVAR", "TOK_SYSVAR", "TOK_CONST_STRINGS", 
  "TOK_BAD_NUMERIC", "TOK_AGENT", "TOK_AS", "TOK_ASC", "TOK_ATTACH", 
  "TOK_AVG", "TOK_BEGIN", "TOK_BETWEEN", "TOK_BY", "TOK_CALL", 
  "TOK_CHARACTER", "TOK_COLLATION", "TOK_COMMIT", "TOK_COMMITTED", 
  "TOK_COUNT", "TOK_CREATE", "TOK_DELETE", "TOK_DESC", "TOK_DESCRIBE", 
  "TOK_DISTINCT", "TOK_DIV", "TOK_DROP", "TOK_FALSE", "TOK_FLOAT", 
  "TOK_FLUSH", "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", "TOK_GROUP", 
  "TOK_GROUPBY", "TOK_GROUP_CONCAT", "TOK_ID", "TOK_IN", "TOK_INDEX", 
  "TOK_INSERT", "TOK_INT", "TOK_INTO", "TOK_ISOLATION", "TOK_LEVEL", 
  "TOK_LIKE", "TOK_LIMIT", "TOK_MATCH", "TOK_MAX", "TOK_META", "TOK_MIN", 
  "TOK_MOD", "TOK_NAMES", "TOK_NULL", "TOK_OPTION", "TOK_ORDER", 
  "TOK_OPTIMIZE", "TOK_PLAN", "TOK_PROFILE", "TOK_RAND", "TOK_READ", 
  "TOK_REPEATABLE", "TOK_REPLACE", "TOK_RETURNS", "TOK_ROLLBACK", 
  "TOK_RTINDEX", "TOK_SELECT", "TOK_SERIALIZABLE", "TOK_SET", 
  "TOK_SESSION", "TOK_SHOW", "TOK_SONAME", "TOK_START", "TOK_STATUS", 
  "TOK_STRING", "TOK_SUM", "TOK_TABLES", "TOK_TO", "TOK_TRANSACTION", 
  "TOK_TRUE", "TOK_TRUNCATE", "TOK_UNCOMMITTED", "TOK_UPDATE", 
  "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", 
  "TOK_WHERE", "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", 
  "TOK_NE", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "TOK_NOT", "TOK_NEG", "';'", "'('", "')'", "','", "'{'", 
  "'}'", "'.'", "$accept", "request", "statement", "multi_stmt_list", 
  "multi_stmt", "select", "subselect_start", "opt_outer_order", 
  "opt_outer_limit", "select_from", "select_items_list", "select_item", 
  "opt_alias", "select_expr", "ident_list", "opt_where_clause", 
  "where_clause", "where_expr", "where_item", "expr_float_unhandled", 
  "expr_ident", "const_int", "const_float", "const_list", 
  "opt_group_clause", "group_items_list", "opt_group_order_clause", 
  "group_order_clause", "opt_order_clause", "order_clause", 
  "order_items_list", "order_item", "opt_limit_clause", "limit_clause", 
  "opt_option_clause", "option_clause", "option_list", "option_item", 
  "named_const_list", "named_const", "expr", "function", "arglist", "arg", 
  "consthash", "show_stmt", "like_filter", "show_what", 
  "simple_set_value", "set_value", "set_stmt", "set_global_stmt", 
  "set_string_value", "boolean_value", "transact_op", "start_transaction", 
  "insert_into", "insert_or_replace", "opt_column_list", "column_list", 
  "insert_rows_list", "insert_row", "insert_vals_list", "insert_val", 
  "delete_from", "call_proc", "call_args_list", "call_arg", 
  "const_string_list", "opt_call_opts_list", "call_opts_list", "call_opt", 
  "opt_as", "call_opt_name", "describe", "describe_tok", "show_tables", 
  "update", "update_items_list", "update_item", "show_variables", 
  "opt_show_variables_where", "show_variables_where", 
  "show_variables_where_list", "show_variables_where_entry", 
  "show_collation", "show_character_set", "set_transaction", "opt_scope", 
  "isolation_level", "create_function", "udf_type", "drop_function", 
  "attach_index", "flush_rtindex", "select_sysvar", "sysvar_name", 
  "truncate", "optimize_index", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   124,    38,    61,
     352,    60,    62,   353,   354,    43,    45,    42,    47,    37,
     355,   356,    59,    40,    41,    44,   123,   125,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   119,   120,   120,   120,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   126,   127,   127,   127,   128,   129,   129,   130,
     130,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   134,   134,   135,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   139,   139,   139,   139,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     155,   155,   156,   156,   156,   156,   156,   157,   157,   158,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   160,   160,
     160,   160,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   167,   167,   167,   167,   167,   168,   168,   169,
     169,   169,   169,   169,   170,   170,   171,   171,   172,   172,
     172,   173,   173,   173,   174,   174,   175,   176,   176,   177,
     177,   178,   178,   179,   179,   180,   181,   181,   182,   182,
     182,   182,   182,   183,   183,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189,   190,   191,   191,   192,
     192,   193,   194,   194,   195,   196,   197,   197,   198,   198,
     198,   198,   199,   200,   200,   201,   202,   202,   203,   204,
     205,   206,   207,   207,   207,   208,   208,   208,   208,   209,
     210,   210,   210,   211,   212,   213,   214,   215,   215,   216,
     217
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       9,     0,     3,     0,     2,     4,    10,     1,     3,     1,
       2,     0,     1,     2,     1,     4,     4,     4,     4,     4,
       4,     3,     5,     1,     3,     0,     1,     2,     1,     3,
       3,     4,     3,     3,     5,     6,     3,     4,     5,     3,
       3,     3,     3,     3,     1,     5,     5,     5,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     4,     3,     3,
       1,     1,     2,     1,     2,     1,     3,     0,     3,     1,
       3,     0,     1,     5,     0,     1,     3,     5,     1,     3,
       1,     2,     2,     0,     1,     2,     4,     0,     1,     2,
       1,     3,     3,     3,     5,     6,     3,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     4,     4,
       3,     6,     6,     3,     1,     3,     1,     1,     3,     5,
       2,     0,     2,     1,     2,     2,     3,     1,     1,     4,
       4,     3,     1,     1,     1,     1,     1,     1,     3,     4,
       4,     4,     3,     4,     7,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     6,     1,     1,     0,
       3,     1,     3,     1,     3,     3,     1,     3,     1,     1,
       1,     3,     2,     7,     9,     6,     1,     3,     1,     3,
       1,     3,     0,     2,     1,     3,     3,     0,     1,     1,
       1,     3,     1,     1,     3,     6,     1,     3,     3,     3,
       5,     4,     4,     0,     1,     2,     1,     3,     3,     2,
       3,     6,     0,     1,     1,     2,     2,     2,     1,     7,
       1,     1,     1,     3,     6,     3,     3,     1,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     0,   204,     0,   201,     0,     0,   243,   242,     0,
       0,   207,     0,   208,   202,     0,   262,   262,     0,     0,
       0,     0,     2,     3,    25,    27,    29,    28,     7,     8,
       9,   203,     5,     0,     6,    10,    11,     0,    12,    13,
      14,    15,    16,    21,    17,    18,    19,    20,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,   130,   131,
     133,   134,   135,   277,     0,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
      37,    41,    44,   157,   113,     0,     0,   263,     0,   264,
       0,     0,     0,   259,   263,     0,   171,   178,   177,   171,
     171,   173,   170,     0,   205,     0,    53,     0,     1,     4,
       0,   171,     0,     0,     0,     0,   273,   275,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,     0,     0,     0,     0,    42,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     276,   114,     0,     0,     0,     0,   182,   185,   186,   184,
     183,   187,   192,     0,     0,     0,   171,   260,     0,     0,
     175,   174,   244,   253,   279,     0,     0,     0,     0,    26,
     209,   241,     0,    91,    93,   220,     0,     0,   218,   219,
     228,   232,   226,     0,     0,   167,   160,   166,     0,   164,
     278,     0,     0,     0,    51,     0,     0,     0,     0,     0,
     163,     0,     0,   155,     0,     0,   156,    31,    55,    38,
      43,   147,   148,   154,   153,   145,   144,   151,   152,   142,
     143,   150,   149,   138,   139,   140,   141,   146,   115,   196,
     197,   199,   191,   198,     0,   200,   190,   189,   193,     0,
       0,     0,     0,   171,   171,   176,   181,   172,     0,   252,
     254,     0,     0,   246,    54,     0,     0,     0,    92,    94,
     230,   222,    95,     0,     0,     0,     0,   271,   270,   272,
       0,     0,   158,     0,    45,     0,    50,    49,   159,    46,
       0,    47,     0,    48,     0,     0,   168,     0,     0,     0,
      97,    56,     0,   195,     0,   188,     0,   180,   179,     0,
     255,   256,     0,     0,   117,    85,    86,     0,     0,    90,
       0,   211,     0,     0,   274,   221,     0,   229,     0,   228,
     227,   233,   234,   225,     0,     0,     0,   165,    52,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    74,     0,
       0,   101,   116,     0,     0,     0,   268,   261,     0,     0,
       0,   248,   249,   247,     0,   245,   118,     0,     0,     0,
     210,     0,     0,   206,   213,    96,   231,   238,     0,     0,
     269,     0,   223,   162,   161,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   102,   194,   266,   265,   267,   258,   257,
     251,     0,     0,   119,   120,     0,    88,    89,   212,     0,
       0,   216,     0,   239,   240,   236,   237,   235,     0,     0,
       0,    33,     0,    60,    59,     0,     0,    66,     0,    82,
      62,    73,    83,    63,    84,    70,    79,    69,    78,    71,
      80,    72,    81,     0,    99,    98,     0,     0,   113,   105,
     250,     0,     0,    87,   215,     0,   214,   224,     0,     0,
      30,    61,     0,     0,     0,    67,     0,     0,     0,     0,
     117,   122,   123,   126,     0,   121,   217,   110,    32,   108,
      34,    68,    76,    77,    75,    64,     0,   100,     0,     0,
     106,    36,     0,     0,     0,   127,   111,   112,     0,     0,
      65,   103,     0,     0,     0,   124,     0,   109,    35,   107,
     125,   129,   128
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,   308,   441,   480,    26,
      79,    80,   141,    81,   228,   310,   311,   356,   357,   358,
     497,   282,   199,   283,   361,   465,   412,   413,   468,   469,
     498,   499,   160,   161,   375,   376,   423,   424,   514,   515,
      82,    83,   208,   209,   136,    27,   180,   102,   171,   172,
      28,    29,   256,   257,    30,    31,    32,    33,   276,   332,
     383,   384,   430,   200,    34,    35,   201,   202,   284,   286,
     341,   342,   388,   435,    36,    37,    38,    39,   272,   273,
      40,   269,   270,   320,   321,    41,    42,    43,    90,   367,
      44,   290,    45,    46,    47,    48,    84,    49,    50
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -374
static const short yypact[] =
{
     798,   -38,  -374,    42,  -374,    22,    52,  -374,  -374,    83,
      67,  -374,   109,  -374,  -374,   147,   334,   333,    62,    90,
     204,   222,  -374,   138,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,   213,  -374,  -374,  -374,   259,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,   269,   160,   272,   204,   283,   294,   298,   211,  -374,
    -374,  -374,  -374,   171,   216,   226,   229,   232,  -374,   239,
     241,   247,   252,   258,   307,  -374,   307,   307,   324,   -23,
    -374,    19,   598,  -374,   322,   278,   280,   165,   335,  -374,
     299,    35,   319,  -374,  -374,   383,   344,  -374,  -374,   344,
     344,  -374,  -374,   308,  -374,   399,  -374,   -24,  -374,   176,
     411,   344,   336,    21,   347,   -68,  -374,  -374,  -374,    53,
     418,   307,    13,   311,   307,   274,   307,   307,   307,   328,
     309,   313,  -374,  -374,   439,   346,   190,     2,   193,  -374,
     460,  -374,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   459,
    -374,  -374,    34,   335,   366,   367,  -374,  -374,  -374,  -374,
    -374,  -374,   364,   423,   394,   395,   344,  -374,   396,   468,
    -374,  -374,  -374,   384,  -374,   475,   476,   193,   312,  -374,
     385,  -374,   409,  -374,  -374,  -374,   250,    12,  -374,  -374,
    -374,   387,  -374,   146,   456,  -374,  -374,   598,    56,  -374,
    -374,   465,   497,   389,  -374,   492,   153,   332,   353,   518,
    -374,   307,   307,  -374,    23,   501,  -374,  -374,   101,  -374,
    -374,  -374,  -374,   624,   651,   677,   704,   686,   686,   214,
     214,   214,   214,   105,   105,  -374,  -374,  -374,   390,  -374,
    -374,  -374,  -374,  -374,   520,  -374,  -374,  -374,   364,   203,
     393,   335,   473,   344,   344,  -374,  -374,  -374,   523,  -374,
    -374,   429,   115,  -374,  -374,   174,   440,   527,  -374,  -374,
    -374,  -374,  -374,   200,   217,    21,   417,  -374,  -374,  -374,
     455,   -36,  -374,   274,  -374,   419,  -374,  -374,  -374,  -374,
     307,  -374,   307,  -374,   386,   412,  -374,   452,   480,   255,
     514,  -374,   550,  -374,    23,  -374,   158,  -374,  -374,   457,
     462,  -374,    30,   475,   498,  -374,  -374,   446,   463,  -374,
     467,  -374,   219,   469,  -374,  -374,    23,  -374,   570,   218,
    -374,   466,  -374,  -374,   575,   471,    23,  -374,  -374,   545,
     571,    23,   193,   472,   491,   255,   489,  -374,  -374,   141,
     585,   513,  -374,   221,   117,   542,  -374,  -374,   601,   523,
      11,  -374,  -374,  -374,   607,  -374,  -374,   504,   515,   517,
    -374,   174,    26,   519,  -374,  -374,  -374,  -374,    38,    26,
    -374,    23,  -374,  -374,  -374,  -374,    -7,   551,   625,    91,
     255,    89,     0,    59,   178,    89,    89,    89,    89,   591,
     174,   596,   576,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,   234,   539,   524,  -374,   543,  -374,  -374,  -374,    16,
     244,  -374,   469,  -374,  -374,  -374,   644,  -374,   267,   204,
     640,   609,   548,  -374,  -374,   567,   568,  -374,    23,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,    15,  -374,   569,   604,   662,   322,  -374,
    -374,    10,   607,  -374,  -374,    26,  -374,  -374,   174,   681,
    -374,  -374,    89,    89,   286,  -374,    23,   174,   667,   261,
     498,   577,  -374,  -374,   685,  -374,  -374,   118,   574,  -374,
     595,  -374,  -374,  -374,  -374,  -374,   290,  -374,   174,   578,
     574,  -374,   684,   612,   292,  -374,  -374,  -374,   174,   707,
    -374,   574,   599,   600,    23,  -374,   685,  -374,  -374,  -374,
    -374,  -374,  -374
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -374,  -374,  -374,  -374,   606,  -374,  -374,  -374,  -374,   408,
     365,   581,  -374,  -374,   104,  -374,   470,  -245,  -374,  -374,
    -269,  -113,  -303,  -304,  -374,  -374,  -374,  -374,  -374,  -374,
    -373,   220,   271,  -374,   245,  -374,  -374,   265,  -374,   215,
     -73,  -374,   615,   451,  -374,  -374,   -88,  -374,   484,   583,
    -374,  -374,   488,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,   330,  -374,  -283,  -374,  -374,  -374,   478,  -374,  -374,
    -374,   375,  -374,  -374,  -374,  -374,  -374,  -374,  -374,   442,
    -374,  -374,  -374,  -374,   397,  -374,  -374,  -374,   750,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -238
static const short yytable[] =
{
     198,   132,   339,   133,   134,   106,   331,    51,   345,   447,
     363,   181,   182,   491,   137,   492,   193,   193,   493,   372,
     280,   193,   139,   191,   485,   204,   193,   194,   193,   195,
     439,   193,   194,   140,   195,   193,   194,   249,   174,   193,
     359,   433,   250,   175,   212,    52,   207,   186,   211,   255,
     185,   215,   207,   217,   218,   219,    58,    59,    60,    61,
      53,   205,    62,   346,   193,   194,   421,   449,   251,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   359,   438,   265,    54,
     434,   186,   138,   252,   193,   194,    68,    69,   446,   431,
     451,   454,   456,   458,   460,   462,   436,   130,   138,   131,
     399,   306,   428,   448,   176,   227,   510,   254,   254,   253,
     213,    55,   254,   494,   107,   420,   281,   196,   486,   254,
     281,   359,   196,   516,   197,   521,   196,   142,    56,   429,
     254,   464,   415,   370,   484,    73,   104,   517,   304,   305,
      58,    59,    60,    61,    57,   444,    62,    63,   115,    74,
     401,   105,   143,    76,    64,   196,    77,   206,   164,    78,
     292,   293,   198,    65,   165,   317,   318,   325,   326,   502,
     504,   287,   506,   193,   194,   402,   452,   400,    66,    67,
      68,    69,   496,   288,   309,   196,    58,    59,    60,    61,
     327,    70,    62,    71,   416,   443,   249,   106,   309,   371,
      64,   250,   156,   157,   158,   328,   186,   329,   507,    65,
     207,  -237,   108,   385,   364,   365,   289,   349,    72,   350,
     323,   366,   387,   392,    66,    67,    68,    69,   395,    73,
     403,   404,   405,   406,   407,   408,   142,    70,   187,    71,
     109,   409,   188,    74,    75,   278,   279,    76,   325,   326,
      77,   110,   111,    78,   325,   326,   330,   298,   293,   198,
    -237,   143,   112,   113,    72,   114,   198,    58,    59,    60,
      61,   327,   205,    62,   196,    73,   116,   327,   445,   120,
     450,   453,   455,   457,   459,   461,   328,   117,   329,    74,
      75,   118,   328,    76,   329,   225,    77,   226,   354,    78,
      58,    59,    60,    61,   335,   336,    62,    68,    69,   154,
     155,   156,   157,   158,   119,    91,   509,   135,   130,   121,
     131,   337,   338,   380,   381,   414,   336,    85,   166,   122,
     167,   168,   123,   169,    86,   124,    91,   330,   470,   336,
      68,    69,   125,   330,   126,    92,    93,    95,   474,   475,
     127,   130,   198,   131,   142,   128,    73,    96,   355,   501,
     503,   129,    94,    87,   159,    97,    98,   162,    95,   163,
      74,   477,   336,   173,    76,   142,   178,    77,    96,   143,
      78,    99,    88,   177,   170,   179,    97,    98,   183,    73,
     505,   336,   184,   101,   520,   336,   525,   526,    89,    89,
     143,   531,    99,    74,   190,   100,   203,    76,   142,   192,
      77,   210,   221,    78,   101,   214,   222,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   220,   143,   142,   224,   299,   300,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   230,   248,   259,   260,   301,   302,   143,
     261,   142,   262,   263,   264,   266,   267,   268,   271,   274,
     277,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   143,   142,   275,   291,
     295,   300,   285,   296,   307,   312,   314,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   143,   316,   142,   278,   319,   302,   322,   333,
     334,   343,   344,   348,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   143,
     142,   351,   352,   223,   360,   362,   368,   369,   374,   377,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   143,   378,   142,   386,   294,
     379,   389,   382,   390,   391,   400,   397,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   143,   142,   398,   410,   297,   411,   417,   418,
     422,   425,   440,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   143,   426,
     142,   427,   303,   442,   432,   463,   466,   467,   471,   472,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   143,   142,   473,   387,   393,
     478,   479,   481,   482,   483,   488,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   143,   489,   142,   487,   394,   500,   508,   513,   518,
     512,   522,   523,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   143,   142,
     519,   524,   528,   529,   530,   189,   353,   396,   142,   229,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   143,   511,   142,   495,   527,   490,
     216,   532,   324,   143,   347,   315,   258,   313,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   143,   476,   340,   437,   373,   419,   103,     0,     0,
       0,     0,     0,     0,     0,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,     0,     0,     0,
       0,     0,     0,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     1,     0,     2,     0,     0,     3,
       0,     0,     4,     0,     0,     5,     6,     7,     8,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,    13,     0,    14,     0,
      15,     0,    16,     0,    17,     0,    18,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    20
};

static const short yycheck[] =
{
     113,    74,   285,    76,    77,     3,   275,    45,    44,     9,
     314,    99,   100,     3,    37,     5,     5,     5,     8,   322,
       8,     5,     3,   111,     9,    93,     5,     6,     5,     8,
      37,     5,     6,    14,     8,     5,     6,     3,     3,     5,
     309,     3,     8,     8,    31,     3,   119,   115,   121,   162,
      74,   124,   125,   126,   127,   128,     3,     4,     5,     6,
      38,     8,     9,    99,     5,     6,   370,     8,    34,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   355,   391,   176,    37,
      52,   115,   115,    59,     5,     6,    43,    44,   401,   382,
     403,   404,   405,   406,   407,   408,   389,    54,   115,    56,
     355,   224,   381,   113,    79,   113,   489,   106,   106,    85,
     107,    38,   106,   113,    20,   114,   114,   106,   113,   106,
     114,   400,   106,    15,   113,   508,   106,    32,    71,   113,
     106,   410,    25,   113,   448,    92,    84,    29,   221,   222,
       3,     4,     5,     6,    45,   400,     9,    10,    54,   106,
      19,    71,    57,   110,    17,   106,   113,   114,     3,   116,
     114,   115,   285,    26,     9,   263,   264,     3,     4,   482,
     483,    35,   486,     5,     6,    44,     8,    96,    41,    42,
      43,    44,   475,    47,    93,   106,     3,     4,     5,     6,
      26,    54,     9,    56,    87,   114,     3,     3,    93,   322,
      17,     8,   107,   108,   109,    41,   115,    43,   487,    26,
     293,     3,     0,   336,    66,    67,    80,   300,    81,   302,
     115,    73,    14,   346,    41,    42,    43,    44,   351,    92,
      99,   100,   101,   102,   103,   104,    32,    54,    72,    56,
     112,   110,    76,   106,   107,     5,     6,   110,     3,     4,
     113,    48,     3,   116,     3,     4,    92,   114,   115,   382,
      52,    57,     3,   113,    81,     3,   389,     3,     4,     5,
       6,    26,     8,     9,   106,    92,     3,    26,   401,   118,
     403,   404,   405,   406,   407,   408,    41,     3,    43,   106,
     107,     3,    41,   110,    43,   115,   113,   117,    53,   116,
       3,     4,     5,     6,   114,   115,     9,    43,    44,   105,
     106,   107,   108,   109,   113,    13,    65,     3,    54,   113,
      56,   114,   115,   114,   115,   114,   115,     3,     3,   113,
       5,     6,   113,     8,    10,   113,    13,    92,   114,   115,
      43,    44,   113,    92,   113,    22,    23,    45,   114,   115,
     113,    54,   475,    56,    32,   113,    92,    55,   113,   482,
     483,   113,    39,    39,    52,    63,    64,    99,    45,    99,
     106,   114,   115,    84,   110,    32,     3,   113,    55,    57,
     116,    79,    58,    74,    59,    51,    63,    64,    90,    92,
     114,   115,     3,    91,   114,   115,   114,   115,    75,    75,
      57,   524,    79,   106,     3,    82,    69,   110,    32,    83,
     113,     3,   113,   116,    91,   114,   113,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   114,    57,    32,    99,   114,   115,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     3,     5,    99,    99,   114,   115,    57,
     106,    32,    49,    79,    79,    79,     8,    93,     3,     3,
      71,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    57,    32,   113,    43,
       3,   115,   115,   114,     3,   115,   113,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    57,    50,    32,     5,     3,   115,    99,    89,
       3,   114,    77,   114,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    57,
      32,    99,    72,   114,    40,     5,    99,    95,    60,   113,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    57,   113,    32,     8,   114,
     113,   115,   113,     8,   113,    96,   114,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    57,    32,   113,    20,   114,    94,    66,     8,
       3,   107,    61,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    57,   114,
      32,   114,   114,     8,   115,    44,    40,    61,    99,   115,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    57,    32,   114,    14,   114,
      20,    52,   114,    96,    96,    61,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    57,    20,    32,   115,   114,     5,    20,     3,   115,
     113,   113,     8,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    57,    32,
     115,    99,     5,   114,   114,   109,   308,   352,    32,   138,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    57,   490,    32,   472,   518,   468,
     125,   526,   272,    57,   293,   261,   163,   259,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    57,   432,   285,   389,   323,   369,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    16,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,
      72,    -1,    74,    -1,    76,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    88
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    16,    18,    21,    24,    27,    28,    29,    30,    33,
      36,    46,    62,    68,    70,    72,    74,    76,    78,    86,
      88,   120,   121,   122,   123,   124,   128,   164,   169,   170,
     173,   174,   175,   176,   183,   184,   193,   194,   195,   196,
     199,   204,   205,   206,   209,   211,   212,   213,   214,   216,
     217,    45,     3,    38,    37,    38,    71,    45,     3,     4,
       5,     6,     9,    10,    17,    26,    41,    42,    43,    44,
      54,    56,    81,    92,   106,   107,   110,   113,   116,   129,
     130,   132,   159,   160,   215,     3,    10,    39,    58,    75,
     207,    13,    22,    23,    39,    45,    55,    63,    64,    79,
      82,    91,   166,   207,    84,    71,     3,   133,     0,   112,
      48,     3,     3,   113,     3,   133,     3,     3,     3,   113,
     118,   113,   113,   113,   113,   113,   113,   113,   113,   113,
      54,    56,   159,   159,   159,     3,   163,    37,   115,     3,
      14,   131,    32,    57,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    52,
     151,   152,    99,    99,     3,     9,     3,     5,     6,     8,
      59,   167,   168,    84,     3,     8,    79,    74,     3,    51,
     165,   165,   165,    90,     3,    74,   115,    72,    76,   123,
       3,   165,    83,     5,     6,     8,   106,   113,   140,   141,
     182,   185,   186,    69,    93,     8,   114,   159,   161,   162,
       3,   159,    31,   107,   114,   159,   161,   159,   159,   159,
     114,   113,   113,   114,    99,   115,   117,   113,   133,   130,
       3,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,     5,     3,
       8,    34,    59,    85,   106,   140,   171,   172,   168,    99,
      99,   106,    49,    79,    79,   165,    79,     8,    93,   200,
     201,     3,   197,   198,     3,   113,   177,    71,     5,     6,
       8,   114,   140,   142,   187,   115,   188,    35,    47,    80,
     210,    43,   114,   115,   114,     3,   114,   114,   114,   114,
     115,   114,   115,   114,   159,   159,   140,     3,   125,    93,
     134,   135,   115,   171,   113,   167,    50,   165,   165,     3,
     202,   203,    99,   115,   135,     3,     4,    26,    41,    43,
      92,   139,   178,    89,     3,   114,   115,   114,   115,   182,
     186,   189,   190,   114,    77,    44,    99,   162,   114,   159,
     159,    99,    72,   128,    53,   113,   136,   137,   138,   139,
      40,   143,     5,   142,    66,    67,    73,   208,    99,    95,
     113,   140,   141,   198,    60,   153,   154,   113,   113,   113,
     114,   115,   113,   179,   180,   140,     8,    14,   191,   115,
       8,   113,   140,   114,   114,   140,   129,   114,   113,   136,
      96,    19,    44,    99,   100,   101,   102,   103,   104,   110,
      20,    94,   145,   146,   114,    25,    87,    66,     8,   203,
     114,   142,     3,   155,   156,   107,   114,   114,   139,   113,
     181,   182,   115,     3,    52,   192,   182,   190,   142,    37,
      61,   126,     8,   114,   136,   140,   141,     9,   113,     8,
     140,   141,     8,   140,   141,   140,   141,   140,   141,   140,
     141,   140,   141,    44,   139,   144,    40,    61,   147,   148,
     114,    99,   115,   114,   114,   115,   180,   114,    20,    52,
     127,   114,    96,    96,   142,     9,   113,   115,    61,    20,
     151,     3,     5,     8,   113,   156,   182,   139,   149,   150,
       5,   140,   141,   140,   141,   114,   142,   139,    20,    65,
     149,   153,   113,     3,   157,   158,    15,    29,   115,   115,
     114,   149,   113,     8,    99,   114,   115,   150,     5,   114,
     114,   140,   158
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror (pParser, "syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, pParser)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse ( SqlParser_c * pParser );
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse ( SqlParser_c * pParser )
#else
int
yyparse (pParser)
     SqlParser_c * pParser ;
#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

    { pParser->PushQuery(); ;}
    break;

  case 25:

    { pParser->PushQuery(); ;}
    break;

  case 26:

    { pParser->PushQuery(); ;}
    break;

  case 30:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by subselect
		;}
    break;

  case 31:

    {
		CSphVector<CSphQueryItem> & dItems = pParser->m_pQuery->m_dItems;
		if ( dItems.GetLength()!=1 || dItems[0].m_sExpr!="*" )
		{
			yyerror ( pParser, "outer select list must be a single star" );
			YYERROR;
		}
		dItems.Reset();
		pParser->ResetSelect();
	;}
    break;

  case 32:

    {
			pParser->m_pQuery->m_sOuterOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart,
				yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 34:

    {
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 35:

    {
			pParser->m_pQuery->m_iOuterOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 36:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->m_pQuery->m_sIndexes.SetBinary ( pParser->m_pBuf+yyvsp[-6].m_iStart,
				yyvsp[-6].m_iEnd-yyvsp[-6].m_iStart );
		;}
    break;

  case 39:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 42:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 43:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 44:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 45:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 46:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 47:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 48:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 49:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_CAT, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 50:

    { if ( !pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 51:

    { if ( !pParser->AddItem ( "groupby()", &yyvsp[-2], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 52:

    { if ( !pParser->AddDistinct ( &yyvsp[-1], &yyvsp[-4], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 54:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 61:

    {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		;}
    break;

  case 62:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 63:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 64:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 65:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 66:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 67:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-3].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 68:

    {
			if ( !pParser->AddIntRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 69:

    {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 70:

    {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 71:

    {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 72:

    {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 73:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 74:

    {
			yyerror ( pParser, "NEQ filter on floats is not (yet?) supported" );
			YYERROR;
		;}
    break;

  case 75:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 76:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 77:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 78:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX, false ) )
				YYERROR;
		;}
    break;

  case 79:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue, false ) )
				YYERROR;
		;}
    break;

  case 80:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX, true ) )
				YYERROR;
		;}
    break;

  case 81:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 82:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 83:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 86:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 87:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 88:

    {
			yyval.m_sValue = "@groupby";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 89:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 90:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 91:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 92:

    {
			yyval.m_iInstype = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 93:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 94:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 95:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 96:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 99:

    {
			pParser->AddGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 100:

    {
			pParser->AddGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 103:

    {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 106:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 107:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 109:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 111:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 112:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 115:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 116:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 122:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 123:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 124:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 125:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-2], yyvsp[-1].m_sValue ) )
				YYERROR;
		;}
    break;

  case 126:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 127:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 128:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 129:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 131:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 132:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 136:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 137:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 138:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 139:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 140:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 141:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 142:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 143:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 144:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 145:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 146:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 147:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 148:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 149:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 150:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 151:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 152:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 153:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 154:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 155:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 156:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 158:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 159:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 160:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 161:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 162:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 163:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 168:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 169:

    { yyval = yyvsp[-4]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 172:

    { pParser->m_pStmt->m_sStringParam = yyvsp[0].m_sValue; ;}
    break;

  case 173:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 174:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 175:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; ;}
    break;

  case 177:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; ;}
    break;

  case 178:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; ;}
    break;

  case 179:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 180:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 181:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 189:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 190:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 191:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 192:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 193:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 194:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 195:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 198:

    { yyval.m_iValue = 1; ;}
    break;

  case 199:

    { yyval.m_iValue = 0; ;}
    break;

  case 200:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 201:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 202:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 203:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 206:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 207:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 208:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 211:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 212:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 215:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 216:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 217:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 218:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 219:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 220:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 221:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 222:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 223:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-4].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-4].m_iEnd;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 224:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-6].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-6].m_iEnd;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 225:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 226:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 227:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 229:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 230:

    {
			// FIXME? for now, one such array per CALL statement, tops
			if ( pParser->m_pStmt->m_dCallStrings.GetLength() )
			{
				yyerror ( pParser, "unexpected constant string list" );
				YYERROR;
			}
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 231:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 234:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 236:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 240:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 241:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 244:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 245:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-4] ) )
				YYERROR;
		;}
    break;

  case 248:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 249:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 250:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 251:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 252:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 259:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		;}
    break;

  case 260:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		;}
    break;

  case 261:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 269:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 270:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 271:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 272:

    { yyval.m_iValue = SPH_ATTR_STRINGPTR; ;}
    break;

  case 273:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 274:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sStringParam = yyvsp[0].m_sValue;
		;}
    break;

  case 275:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 276:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->m_pStmt->m_tQuery.m_sQuery = yyvsp[-1].m_sValue;
		;}
    break;

  case 278:

    {
			yyval.m_sValue.SetSprintf ( "%s.%s", yyvsp[-2].m_sValue.cstr(), yyvsp[0].m_sValue.cstr() );
		;}
    break;

  case 279:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 280:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_OPTIMIZE_INDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;


    }

/* Line 991 of yacc.c.  */


  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 4)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      else
		{
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			snprintf (yyp, (int)(yysize - (yyp - yymsg)), ", expecting %s (or %d other tokens)", yytname[yyx], yycount - 1);
			while (*yyp++);
			break;
		      }
		}

	      yyerror (pParser, yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror (pParser, "syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (pParser, "syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
//  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror (pParser, "parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}





#if USE_WINDOWS
#pragma warning(pop)
#endif

