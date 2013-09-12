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
     TOK_BIGINT = 275,
     TOK_BY = 276,
     TOK_CALL = 277,
     TOK_CHARACTER = 278,
     TOK_COLLATION = 279,
     TOK_COMMIT = 280,
     TOK_COMMITTED = 281,
     TOK_COUNT = 282,
     TOK_CREATE = 283,
     TOK_DELETE = 284,
     TOK_DESC = 285,
     TOK_DESCRIBE = 286,
     TOK_DISTINCT = 287,
     TOK_DIV = 288,
     TOK_DROP = 289,
     TOK_FALSE = 290,
     TOK_FLOAT = 291,
     TOK_FLUSH = 292,
     TOK_FROM = 293,
     TOK_FUNCTION = 294,
     TOK_GLOBAL = 295,
     TOK_GROUP = 296,
     TOK_GROUPBY = 297,
     TOK_GROUP_CONCAT = 298,
     TOK_ID = 299,
     TOK_IN = 300,
     TOK_INDEX = 301,
     TOK_INSERT = 302,
     TOK_INT = 303,
     TOK_INTO = 304,
     TOK_ISOLATION = 305,
     TOK_LEVEL = 306,
     TOK_LIKE = 307,
     TOK_LIMIT = 308,
     TOK_MATCH = 309,
     TOK_MAX = 310,
     TOK_META = 311,
     TOK_MIN = 312,
     TOK_MOD = 313,
     TOK_NAMES = 314,
     TOK_NULL = 315,
     TOK_OPTION = 316,
     TOK_ORDER = 317,
     TOK_OPTIMIZE = 318,
     TOK_PLAN = 319,
     TOK_PROFILE = 320,
     TOK_RAND = 321,
     TOK_RAMCHUNK = 322,
     TOK_READ = 323,
     TOK_REPEATABLE = 324,
     TOK_REPLACE = 325,
     TOK_RETURNS = 326,
     TOK_ROLLBACK = 327,
     TOK_RTINDEX = 328,
     TOK_SELECT = 329,
     TOK_SERIALIZABLE = 330,
     TOK_SET = 331,
     TOK_SESSION = 332,
     TOK_SHOW = 333,
     TOK_SONAME = 334,
     TOK_START = 335,
     TOK_STATUS = 336,
     TOK_STRING = 337,
     TOK_SUM = 338,
     TOK_TABLES = 339,
     TOK_TO = 340,
     TOK_TRANSACTION = 341,
     TOK_TRUE = 342,
     TOK_TRUNCATE = 343,
     TOK_UNCOMMITTED = 344,
     TOK_UPDATE = 345,
     TOK_VALUES = 346,
     TOK_VARIABLES = 347,
     TOK_WARNINGS = 348,
     TOK_WEIGHT = 349,
     TOK_WHERE = 350,
     TOK_WITHIN = 351,
     TOK_OR = 352,
     TOK_AND = 353,
     TOK_NE = 354,
     TOK_GTE = 355,
     TOK_LTE = 356,
     TOK_NOT = 357,
     TOK_NEG = 358
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
#define TOK_BIGINT 275
#define TOK_BY 276
#define TOK_CALL 277
#define TOK_CHARACTER 278
#define TOK_COLLATION 279
#define TOK_COMMIT 280
#define TOK_COMMITTED 281
#define TOK_COUNT 282
#define TOK_CREATE 283
#define TOK_DELETE 284
#define TOK_DESC 285
#define TOK_DESCRIBE 286
#define TOK_DISTINCT 287
#define TOK_DIV 288
#define TOK_DROP 289
#define TOK_FALSE 290
#define TOK_FLOAT 291
#define TOK_FLUSH 292
#define TOK_FROM 293
#define TOK_FUNCTION 294
#define TOK_GLOBAL 295
#define TOK_GROUP 296
#define TOK_GROUPBY 297
#define TOK_GROUP_CONCAT 298
#define TOK_ID 299
#define TOK_IN 300
#define TOK_INDEX 301
#define TOK_INSERT 302
#define TOK_INT 303
#define TOK_INTO 304
#define TOK_ISOLATION 305
#define TOK_LEVEL 306
#define TOK_LIKE 307
#define TOK_LIMIT 308
#define TOK_MATCH 309
#define TOK_MAX 310
#define TOK_META 311
#define TOK_MIN 312
#define TOK_MOD 313
#define TOK_NAMES 314
#define TOK_NULL 315
#define TOK_OPTION 316
#define TOK_ORDER 317
#define TOK_OPTIMIZE 318
#define TOK_PLAN 319
#define TOK_PROFILE 320
#define TOK_RAND 321
#define TOK_RAMCHUNK 322
#define TOK_READ 323
#define TOK_REPEATABLE 324
#define TOK_REPLACE 325
#define TOK_RETURNS 326
#define TOK_ROLLBACK 327
#define TOK_RTINDEX 328
#define TOK_SELECT 329
#define TOK_SERIALIZABLE 330
#define TOK_SET 331
#define TOK_SESSION 332
#define TOK_SHOW 333
#define TOK_SONAME 334
#define TOK_START 335
#define TOK_STATUS 336
#define TOK_STRING 337
#define TOK_SUM 338
#define TOK_TABLES 339
#define TOK_TO 340
#define TOK_TRANSACTION 341
#define TOK_TRUE 342
#define TOK_TRUNCATE 343
#define TOK_UNCOMMITTED 344
#define TOK_UPDATE 345
#define TOK_VALUES 346
#define TOK_VARIABLES 347
#define TOK_WARNINGS 348
#define TOK_WEIGHT 349
#define TOK_WHERE 350
#define TOK_WITHIN 351
#define TOK_OR 352
#define TOK_AND 353
#define TOK_NE 354
#define TOK_GTE 355
#define TOK_LTE 356
#define TOK_NOT 357
#define TOK_NEG 358




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
#define YYFINAL  112
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1023

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  101
/* YYNRULES -- Number of rules. */
#define YYNRULES  286
/* YYNRULES -- Number of states. */
#define YYNSTATES  543

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   111,   100,     2,
     115,   116,   109,   107,   117,   108,   120,   110,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   114,
     103,   101,   104,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   118,    99,   119,     2,     2,     2,     2,
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
      95,    96,    97,    98,   102,   105,   106,   112,   113
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    60,
      62,    64,    66,    76,    77,    81,    82,    85,    90,   101,
     103,   107,   109,   112,   113,   115,   118,   120,   125,   130,
     135,   140,   145,   150,   154,   160,   162,   166,   167,   169,
     172,   174,   178,   182,   187,   191,   195,   201,   208,   212,
     217,   223,   227,   231,   235,   239,   243,   245,   251,   257,
     263,   267,   271,   275,   279,   283,   287,   291,   293,   295,
     300,   304,   308,   310,   312,   315,   317,   320,   322,   326,
     327,   331,   333,   337,   338,   340,   346,   347,   349,   353,
     359,   361,   365,   367,   370,   373,   374,   376,   379,   384,
     385,   387,   390,   392,   396,   400,   404,   410,   417,   421,
     423,   427,   431,   433,   435,   437,   439,   441,   443,   446,
     449,   453,   457,   461,   465,   469,   473,   477,   481,   485,
     489,   493,   497,   501,   505,   509,   513,   517,   521,   525,
     527,   532,   537,   542,   546,   553,   560,   564,   566,   570,
     572,   574,   578,   584,   587,   588,   591,   593,   596,   599,
     603,   605,   607,   612,   617,   621,   623,   625,   627,   629,
     631,   633,   637,   642,   647,   652,   656,   661,   669,   675,
     677,   679,   681,   683,   685,   687,   689,   691,   693,   696,
     703,   705,   707,   708,   712,   714,   718,   720,   724,   728,
     730,   734,   736,   738,   740,   744,   747,   755,   765,   772,
     774,   778,   780,   784,   786,   790,   791,   794,   796,   800,
     804,   805,   807,   809,   811,   815,   817,   819,   823,   830,
     832,   836,   840,   844,   850,   855,   860,   861,   863,   866,
     868,   872,   876,   879,   883,   890,   891,   893,   895,   898,
     901,   904,   906,   914,   916,   918,   920,   922,   926,   933,
     937,   941,   945,   947,   951,   954,   958
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     122,     0,    -1,   123,    -1,   124,    -1,   124,   114,    -1,
     177,    -1,   185,    -1,   171,    -1,   172,    -1,   175,    -1,
     186,    -1,   195,    -1,   197,    -1,   198,    -1,   201,    -1,
     206,    -1,   207,    -1,   211,    -1,   213,    -1,   214,    -1,
     215,    -1,   216,    -1,   208,    -1,   217,    -1,   219,    -1,
     220,    -1,   221,    -1,   125,    -1,   124,   114,   125,    -1,
     126,    -1,   166,    -1,   130,    -1,    74,   131,    38,   115,
     127,   130,   116,   128,   129,    -1,    -1,    62,    21,   151,
      -1,    -1,    53,     5,    -1,    53,     5,   117,     5,    -1,
      74,   131,    38,   135,   136,   145,   147,   149,   153,   155,
      -1,   132,    -1,   131,   117,   132,    -1,   109,    -1,   134,
     133,    -1,    -1,     3,    -1,    14,     3,    -1,   161,    -1,
      17,   115,   161,   116,    -1,    55,   115,   161,   116,    -1,
      57,   115,   161,   116,    -1,    83,   115,   161,   116,    -1,
      43,   115,   161,   116,    -1,    27,   115,   109,   116,    -1,
      42,   115,   116,    -1,    27,   115,    32,     3,   116,    -1,
       3,    -1,   135,   117,     3,    -1,    -1,   137,    -1,    95,
     138,    -1,   139,    -1,   138,    98,   138,    -1,   115,   138,
     116,    -1,    54,   115,     8,   116,    -1,   141,   101,   142,
      -1,   141,   102,   142,    -1,   141,    45,   115,   144,   116,
      -1,   141,   112,    45,   115,   144,   116,    -1,   141,    45,
       9,    -1,   141,   112,    45,     9,    -1,   141,    19,   142,
      98,   142,    -1,   141,   104,   142,    -1,   141,   103,   142,
      -1,   141,   105,   142,    -1,   141,   106,   142,    -1,   141,
     101,   143,    -1,   140,    -1,   141,    19,   143,    98,   143,
      -1,   141,    19,   142,    98,   143,    -1,   141,    19,   143,
      98,   142,    -1,   141,   104,   143,    -1,   141,   103,   143,
      -1,   141,   105,   143,    -1,   141,   106,   143,    -1,   141,
     101,     8,    -1,   141,   102,     8,    -1,   141,   102,   143,
      -1,     3,    -1,     4,    -1,    27,   115,   109,   116,    -1,
      42,   115,   116,    -1,    94,   115,   116,    -1,    44,    -1,
       5,    -1,   108,     5,    -1,     6,    -1,   108,     6,    -1,
     142,    -1,   144,   117,   142,    -1,    -1,    41,    21,   146,
      -1,   141,    -1,   146,   117,   141,    -1,    -1,   148,    -1,
      96,    41,    62,    21,   151,    -1,    -1,   150,    -1,    62,
      21,   151,    -1,    62,    21,    66,   115,   116,    -1,   152,
      -1,   151,   117,   152,    -1,   141,    -1,   141,    15,    -1,
     141,    30,    -1,    -1,   154,    -1,    53,     5,    -1,    53,
       5,   117,     5,    -1,    -1,   156,    -1,    61,   157,    -1,
     158,    -1,   157,   117,   158,    -1,     3,   101,     3,    -1,
       3,   101,     5,    -1,     3,   101,   115,   159,   116,    -1,
       3,   101,     3,   115,     8,   116,    -1,     3,   101,     8,
      -1,   160,    -1,   159,   117,   160,    -1,     3,   101,   142,
      -1,     3,    -1,     4,    -1,    44,    -1,     5,    -1,     6,
      -1,     9,    -1,   108,   161,    -1,   112,   161,    -1,   161,
     107,   161,    -1,   161,   108,   161,    -1,   161,   109,   161,
      -1,   161,   110,   161,    -1,   161,   103,   161,    -1,   161,
     104,   161,    -1,   161,   100,   161,    -1,   161,    99,   161,
      -1,   161,   111,   161,    -1,   161,    33,   161,    -1,   161,
      58,   161,    -1,   161,   106,   161,    -1,   161,   105,   161,
      -1,   161,   101,   161,    -1,   161,   102,   161,    -1,   161,
      98,   161,    -1,   161,    97,   161,    -1,   115,   161,   116,
      -1,   118,   165,   119,    -1,   162,    -1,     3,   115,   163,
     116,    -1,    45,   115,   163,   116,    -1,    20,   115,   163,
     116,    -1,     3,   115,   116,    -1,    57,   115,   161,   117,
     161,   116,    -1,    55,   115,   161,   117,   161,   116,    -1,
      94,   115,   116,    -1,   164,    -1,   163,   117,   164,    -1,
     161,    -1,     8,    -1,     3,   101,   142,    -1,   165,   117,
       3,   101,   142,    -1,    78,   168,    -1,    -1,    52,     8,
      -1,    93,    -1,    81,   167,    -1,    56,   167,    -1,    13,
      81,   167,    -1,    65,    -1,    64,    -1,    13,     8,    81,
     167,    -1,    13,     3,    81,   167,    -1,    46,     3,    81,
      -1,     3,    -1,    60,    -1,     8,    -1,     5,    -1,     6,
      -1,   169,    -1,   170,   108,   169,    -1,    76,     3,   101,
     174,    -1,    76,     3,   101,   173,    -1,    76,     3,   101,
      60,    -1,    76,    59,   170,    -1,    76,    10,   101,   170,
      -1,    76,    40,     9,   101,   115,   144,   116,    -1,    76,
      40,     3,   101,   173,    -1,     3,    -1,     8,    -1,    87,
      -1,    35,    -1,   142,    -1,    25,    -1,    72,    -1,   176,
      -1,    18,    -1,    80,    86,    -1,   178,    49,     3,   179,
      91,   181,    -1,    47,    -1,    70,    -1,    -1,   115,   180,
     116,    -1,   141,    -1,   180,   117,   141,    -1,   182,    -1,
     181,   117,   182,    -1,   115,   183,   116,    -1,   184,    -1,
     183,   117,   184,    -1,   142,    -1,   143,    -1,     8,    -1,
     115,   144,   116,    -1,   115,   116,    -1,    29,    38,   135,
      95,    44,   101,   142,    -1,    29,    38,   135,    95,    44,
      45,   115,   144,   116,    -1,    22,     3,   115,   187,   190,
     116,    -1,   188,    -1,   187,   117,   188,    -1,   184,    -1,
     115,   189,   116,    -1,     8,    -1,   189,   117,     8,    -1,
      -1,   117,   191,    -1,   192,    -1,   191,   117,   192,    -1,
     184,   193,   194,    -1,    -1,    14,    -1,     3,    -1,    53,
      -1,   196,     3,   167,    -1,    31,    -1,    30,    -1,    78,
      84,   167,    -1,    90,   135,    76,   199,   137,   155,    -1,
     200,    -1,   199,   117,   200,    -1,     3,   101,   142,    -1,
       3,   101,   143,    -1,     3,   101,   115,   144,   116,    -1,
       3,   101,   115,   116,    -1,    78,   209,    92,   202,    -1,
      -1,   203,    -1,    95,   204,    -1,   205,    -1,   204,    97,
     205,    -1,     3,   101,     8,    -1,    78,    24,    -1,    78,
      23,    76,    -1,    76,   209,    86,    50,    51,   210,    -1,
      -1,    40,    -1,    77,    -1,    68,    89,    -1,    68,    26,
      -1,    69,    68,    -1,    75,    -1,    28,    39,     3,    71,
     212,    79,     8,    -1,    48,    -1,    20,    -1,    36,    -1,
      82,    -1,    34,    39,     3,    -1,    16,    46,     3,    85,
      73,     3,    -1,    37,    73,     3,    -1,    37,    67,     3,
      -1,    74,   218,   153,    -1,    10,    -1,    10,   120,     3,
      -1,    74,   161,    -1,    88,    73,     3,    -1,    63,    46,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   132,   132,   133,   134,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   165,   166,   170,
     171,   175,   176,   184,   197,   205,   207,   212,   221,   237,
     238,   242,   243,   246,   248,   249,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   265,   266,   269,   271,   275,
     279,   280,   281,   285,   290,   297,   305,   313,   322,   327,
     332,   337,   342,   347,   352,   357,   362,   367,   372,   377,
     382,   387,   392,   397,   402,   407,   415,   419,   420,   425,
     431,   437,   443,   452,   453,   464,   465,   469,   475,   481,
     483,   487,   491,   497,   499,   503,   514,   516,   520,   524,
     531,   532,   536,   537,   538,   541,   543,   547,   552,   559,
     561,   565,   569,   570,   574,   579,   584,   590,   595,   603,
     608,   615,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   652,
     656,   657,   658,   659,   660,   661,   662,   666,   667,   671,
     672,   676,   677,   683,   686,   688,   692,   693,   694,   695,
     696,   697,   698,   703,   708,   718,   719,   720,   721,   722,
     726,   727,   731,   736,   741,   746,   747,   751,   756,   764,
     765,   769,   770,   771,   785,   786,   787,   791,   792,   798,
     806,   807,   810,   812,   816,   817,   821,   822,   826,   830,
     831,   835,   836,   837,   838,   839,   845,   853,   867,   875,
     879,   886,   887,   894,   904,   910,   912,   916,   921,   925,
     932,   934,   938,   939,   945,   953,   954,   960,   966,   974,
     975,   979,   983,   987,   991,  1001,  1007,  1008,  1012,  1016,
    1017,  1021,  1025,  1032,  1039,  1045,  1046,  1047,  1051,  1052,
    1053,  1054,  1060,  1071,  1072,  1073,  1074,  1078,  1089,  1101,
    1110,  1121,  1129,  1130,  1137,  1148,  1159
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
  "TOK_AVG", "TOK_BEGIN", "TOK_BETWEEN", "TOK_BIGINT", "TOK_BY", 
  "TOK_CALL", "TOK_CHARACTER", "TOK_COLLATION", "TOK_COMMIT", 
  "TOK_COMMITTED", "TOK_COUNT", "TOK_CREATE", "TOK_DELETE", "TOK_DESC", 
  "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DROP", "TOK_FALSE", 
  "TOK_FLOAT", "TOK_FLUSH", "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", 
  "TOK_GROUP", "TOK_GROUPBY", "TOK_GROUP_CONCAT", "TOK_ID", "TOK_IN", 
  "TOK_INDEX", "TOK_INSERT", "TOK_INT", "TOK_INTO", "TOK_ISOLATION", 
  "TOK_LEVEL", "TOK_LIKE", "TOK_LIMIT", "TOK_MATCH", "TOK_MAX", 
  "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_NAMES", "TOK_NULL", "TOK_OPTION", 
  "TOK_ORDER", "TOK_OPTIMIZE", "TOK_PLAN", "TOK_PROFILE", "TOK_RAND", 
  "TOK_RAMCHUNK", "TOK_READ", "TOK_REPEATABLE", "TOK_REPLACE", 
  "TOK_RETURNS", "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT", 
  "TOK_SERIALIZABLE", "TOK_SET", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME", 
  "TOK_START", "TOK_STATUS", "TOK_STRING", "TOK_SUM", "TOK_TABLES", 
  "TOK_TO", "TOK_TRANSACTION", "TOK_TRUE", "TOK_TRUNCATE", 
  "TOK_UNCOMMITTED", "TOK_UPDATE", "TOK_VALUES", "TOK_VARIABLES", 
  "TOK_WARNINGS", "TOK_WEIGHT", "TOK_WHERE", "TOK_WITHIN", "TOK_OR", 
  "TOK_AND", "'|'", "'&'", "'='", "TOK_NE", "'<'", "'>'", "TOK_GTE", 
  "TOK_LTE", "'+'", "'-'", "'*'", "'/'", "'%'", "TOK_NOT", "TOK_NEG", 
  "';'", "'('", "')'", "','", "'{'", "'}'", "'.'", "$accept", "request", 
  "statement", "multi_stmt_list", "multi_stmt", "select", 
  "subselect_start", "opt_outer_order", "opt_outer_limit", "select_from", 
  "select_items_list", "select_item", "opt_alias", "select_expr", 
  "ident_list", "opt_where_clause", "where_clause", "where_expr", 
  "where_item", "expr_float_unhandled", "expr_ident", "const_int", 
  "const_float", "const_list", "opt_group_clause", "group_items_list", 
  "opt_group_order_clause", "group_order_clause", "opt_order_clause", 
  "order_clause", "order_items_list", "order_item", "opt_limit_clause", 
  "limit_clause", "opt_option_clause", "option_clause", "option_list", 
  "option_item", "named_const_list", "named_const", "expr", "function", 
  "arglist", "arg", "consthash", "show_stmt", "like_filter", "show_what", 
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
  "attach_index", "flush_rtindex", "flush_ramchunk", "select_sysvar", 
  "sysvar_name", "select_dual", "truncate", "optimize_index", 0
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   124,
      38,    61,   354,    60,    62,   355,   356,    43,    45,    42,
      47,    37,   357,   358,    59,    40,    41,    44,   123,   125,
      46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   121,   122,   122,   122,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   128,   129,   129,   129,   130,   131,
     131,   132,   132,   133,   133,   133,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     138,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   141,   141,   141,
     141,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   146,   147,   147,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   157,   157,   158,   158,   158,   158,   158,   159,
     159,   160,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     162,   162,   162,   162,   162,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   169,   169,
     170,   170,   171,   171,   171,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   175,   175,   175,   176,   176,   177,
     178,   178,   179,   179,   180,   180,   181,   181,   182,   183,
     183,   184,   184,   184,   184,   184,   185,   185,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     193,   193,   194,   194,   195,   196,   196,   197,   198,   199,
     199,   200,   200,   200,   200,   201,   202,   202,   203,   204,
     204,   205,   206,   207,   208,   209,   209,   209,   210,   210,
     210,   210,   211,   212,   212,   212,   212,   213,   214,   215,
     216,   217,   218,   218,   219,   220,   221
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     9,     0,     3,     0,     2,     4,    10,     1,
       3,     1,     2,     0,     1,     2,     1,     4,     4,     4,
       4,     4,     4,     3,     5,     1,     3,     0,     1,     2,
       1,     3,     3,     4,     3,     3,     5,     6,     3,     4,
       5,     3,     3,     3,     3,     3,     1,     5,     5,     5,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     4,
       3,     3,     1,     1,     2,     1,     2,     1,     3,     0,
       3,     1,     3,     0,     1,     5,     0,     1,     3,     5,
       1,     3,     1,     2,     2,     0,     1,     2,     4,     0,
       1,     2,     1,     3,     3,     3,     5,     6,     3,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     4,     4,     3,     6,     6,     3,     1,     3,     1,
       1,     3,     5,     2,     0,     2,     1,     2,     2,     3,
       1,     1,     4,     4,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     4,     3,     4,     7,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     6,
       1,     1,     0,     3,     1,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     3,     2,     7,     9,     6,     1,
       3,     1,     3,     1,     3,     0,     2,     1,     3,     3,
       0,     1,     1,     1,     3,     1,     1,     3,     6,     1,
       3,     3,     3,     5,     4,     4,     0,     1,     2,     1,
       3,     3,     2,     3,     6,     0,     1,     1,     2,     2,
       2,     1,     7,     1,     1,     1,     1,     3,     6,     3,
       3,     3,     1,     3,     2,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     0,   207,     0,   204,     0,     0,   246,   245,     0,
       0,   210,     0,   211,   205,     0,   265,   265,     0,     0,
       0,     0,     2,     3,    27,    29,    31,    30,     7,     8,
       9,   206,     5,     0,     6,    10,    11,     0,    12,    13,
      14,    15,    16,    22,    17,    18,    19,    20,    21,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   132,   133,   135,   136,   137,   282,     0,     0,     0,
       0,     0,   134,     0,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    39,    43,    46,   159,   115,     0,
       0,   266,     0,   267,     0,     0,     0,   262,   266,     0,
     174,   181,   180,   174,   174,   176,   173,     0,   208,     0,
      55,     0,     1,     4,     0,   174,     0,     0,     0,     0,
     277,   280,   279,   286,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,     0,     0,     0,     0,    44,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   281,   116,     0,     0,
       0,     0,   185,   188,   189,   187,   186,   190,   195,     0,
       0,     0,   174,   263,     0,     0,   178,   177,   247,   256,
     285,     0,     0,     0,     0,    28,   212,   244,     0,    93,
      95,   223,     0,     0,   221,   222,   231,   235,   229,     0,
       0,   170,   163,   169,     0,   167,   283,     0,     0,     0,
       0,    53,     0,     0,     0,     0,     0,   166,     0,     0,
     157,     0,     0,   158,    33,    57,    40,    46,    45,   149,
     150,   156,   155,   147,   146,   153,   154,   144,   145,   152,
     151,   140,   141,   142,   143,   148,   117,   199,   200,   202,
     194,   201,     0,   203,   193,   192,   196,     0,     0,     0,
       0,   174,   174,   179,   184,   175,     0,   255,   257,     0,
       0,   249,    56,     0,     0,     0,    94,    96,   233,   225,
      97,     0,     0,     0,     0,   274,   275,   273,   276,     0,
       0,   160,     0,    47,   162,     0,    52,    51,   161,    48,
       0,    49,     0,    50,     0,     0,   171,     0,     0,     0,
      99,    58,     0,   198,     0,   191,     0,   183,   182,     0,
     258,   259,     0,     0,   119,    87,    88,     0,     0,    92,
       0,   214,     0,     0,   278,   224,     0,   232,     0,   231,
     230,   236,   237,   228,     0,     0,     0,   168,    54,     0,
       0,     0,     0,     0,     0,     0,    59,    60,    76,     0,
       0,   103,   118,     0,     0,     0,   271,   264,     0,     0,
       0,   251,   252,   250,     0,   248,   120,     0,     0,     0,
     213,     0,     0,   209,   216,    98,   234,   241,     0,     0,
     272,     0,   226,   165,   164,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   106,   104,   197,   269,   268,   270,   261,   260,
     254,     0,     0,   121,   122,     0,    90,    91,   215,     0,
       0,   219,     0,   242,   243,   239,   240,   238,     0,     0,
       0,    35,     0,    62,    61,     0,     0,    68,     0,    84,
      64,    75,    85,    65,    86,    72,    81,    71,    80,    73,
      82,    74,    83,     0,   101,   100,     0,     0,   115,   107,
     253,     0,     0,    89,   218,     0,   217,   227,     0,     0,
      32,    63,     0,     0,     0,    69,     0,     0,     0,     0,
     119,   124,   125,   128,     0,   123,   220,   112,    34,   110,
      36,    70,    78,    79,    77,    66,     0,   102,     0,     0,
     108,    38,     0,     0,     0,   129,   113,   114,     0,     0,
      67,   105,     0,     0,     0,   126,     0,   111,    37,   109,
     127,   131,   130
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,   318,   451,   490,    26,
      83,    84,   147,    85,   235,   320,   321,   366,   367,   368,
     507,   290,   205,   291,   371,   475,   422,   423,   478,   479,
     508,   509,   166,   167,   385,   386,   433,   434,   524,   525,
     213,    87,   214,   215,   142,    27,   186,   106,   177,   178,
      28,    29,   264,   265,    30,    31,    32,    33,   284,   342,
     393,   394,   440,   206,    34,    35,   207,   208,   292,   294,
     351,   352,   398,   445,    36,    37,    38,    39,   280,   281,
      40,   277,   278,   330,   331,    41,    42,    43,    94,   377,
      44,   299,    45,    46,    47,    48,    49,    88,    50,    51,
      52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -330
static const short yypact[] =
{
     933,   -16,  -330,    40,  -330,    14,    70,  -330,  -330,    80,
     113,  -330,   116,  -330,  -330,   154,   209,   723,    79,   110,
     188,   192,  -330,    81,  -330,  -330,  -330,  -330,  -330,  -330,
    -330,  -330,  -330,   161,  -330,  -330,  -330,   219,  -330,  -330,
    -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,
    -330,  -330,  -330,   231,    99,   235,   188,   237,   248,   252,
     258,   155,  -330,  -330,  -330,  -330,   144,   159,   166,   170,
     173,   190,  -330,   201,   207,   210,   212,   224,   315,  -330,
     315,   315,   273,   -14,  -330,   102,   344,  -330,   254,   244,
     263,   185,    49,  -330,   256,    31,   289,  -330,  -330,   331,
     314,  -330,  -330,   314,   314,  -330,  -330,   275,  -330,   368,
    -330,   -39,  -330,   -34,   371,   314,   293,    23,   311,   -54,
    -330,  -330,  -330,  -330,     5,   381,   315,   306,   -13,   269,
     315,   306,   315,   315,   315,   270,   274,   278,  -330,  -330,
     488,   287,   106,    15,   286,  -330,   387,  -330,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   391,  -330,  -330,   200,    49,
     296,   298,  -330,  -330,  -330,  -330,  -330,  -330,   295,   357,
     330,   332,   314,  -330,   334,   404,  -330,  -330,  -330,   321,
    -330,   416,   419,   286,   327,  -330,   310,  -330,   353,  -330,
    -330,  -330,   128,    53,  -330,  -330,  -330,   312,  -330,   211,
     384,  -330,  -330,   720,   126,  -330,  -330,   514,   129,   429,
     318,  -330,   543,   137,   377,   398,   569,  -330,   315,   315,
    -330,     7,   457,  -330,  -330,   -53,  -330,   720,  -330,  -330,
    -330,   734,   747,   826,   837,   757,   757,   329,   329,   329,
     329,   348,   348,  -330,  -330,  -330,   351,  -330,  -330,  -330,
    -330,  -330,   464,  -330,  -330,  -330,   295,   233,   355,    49,
     420,   314,   314,  -330,  -330,  -330,   470,  -330,  -330,   388,
     -48,  -330,  -330,   229,   399,   507,  -330,  -330,  -330,  -330,
    -330,   141,   162,    23,   395,  -330,  -330,  -330,  -330,   433,
       3,  -330,   306,  -330,  -330,   397,  -330,  -330,  -330,  -330,
     315,  -330,   315,  -330,   434,   458,  -330,   417,   443,   223,
     478,  -330,   515,  -330,     7,  -330,   149,  -330,  -330,   421,
     426,  -330,    92,   416,   463,  -330,  -330,   410,   411,  -330,
     412,  -330,   167,   413,  -330,  -330,     7,  -330,   521,    42,
    -330,   431,  -330,  -330,   522,   435,     7,  -330,  -330,   598,
     624,     7,   286,   436,   438,   223,   451,  -330,  -330,   360,
     533,   474,  -330,   216,    -3,   503,  -330,  -330,   565,   470,
      62,  -330,  -330,  -330,   571,  -330,  -330,   468,   462,   465,
    -330,   229,    69,   466,  -330,  -330,  -330,  -330,    18,    69,
    -330,     7,  -330,  -330,  -330,  -330,   -11,   517,   572,    -5,
     223,    96,    13,    27,    60,    96,    96,    96,    96,   537,
     229,   559,   541,  -330,  -330,  -330,  -330,  -330,  -330,  -330,
    -330,   220,   483,   489,  -330,   491,  -330,  -330,  -330,    71,
     230,  -330,   413,  -330,  -330,  -330,   591,  -330,   232,   188,
     587,   556,   494,  -330,  -330,   528,   530,  -330,     7,  -330,
    -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,
    -330,  -330,  -330,    17,  -330,   512,   570,   612,   254,  -330,
    -330,    12,   571,  -330,  -330,    69,  -330,  -330,   229,   629,
    -330,  -330,    96,    96,   236,  -330,     7,   229,   614,   186,
     463,   523,  -330,  -330,   633,  -330,  -330,    64,   520,  -330,
     538,  -330,  -330,  -330,  -330,  -330,   239,  -330,   229,   524,
     520,  -330,   650,   560,   241,  -330,  -330,  -330,   229,   655,
    -330,   520,   546,   547,     7,  -330,   633,  -330,  -330,  -330,
    -330,  -330,  -330
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -330,  -330,  -330,  -330,   551,  -330,  -330,  -330,  -330,   347,
     319,   539,  -330,  -330,    26,  -330,   406,  -329,  -330,  -330,
    -281,  -117,  -326,  -321,  -330,  -330,  -330,  -330,  -330,  -330,
    -317,   156,   213,  -330,   187,  -330,  -330,   206,  -330,   153,
      -8,  -330,    75,   390,  -330,  -330,   -99,  -330,   424,   525,
    -330,  -330,   423,  -330,  -330,  -330,  -330,  -330,  -330,  -330,
    -330,   268,  -330,  -292,  -330,  -330,  -330,   418,  -330,  -330,
    -330,   313,  -330,  -330,  -330,  -330,  -330,  -330,  -330,   380,
    -330,  -330,  -330,  -330,   336,  -330,  -330,  -330,   699,  -330,
    -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,  -330,
    -330
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -285
static const short yytable[] =
{
     204,   349,   341,   373,   187,   188,   382,    86,    61,    62,
      63,    64,   199,   211,    65,   501,   197,   502,   110,   219,
     503,   443,   457,   425,   143,    68,   495,   449,   199,   200,
      53,   201,   199,   200,   180,   459,   409,   191,   369,   181,
     193,   210,   319,    54,   194,  -240,   111,   319,   355,    72,
      73,   263,   172,    55,   173,   174,   397,   175,   199,   431,
     136,   288,   137,   192,   192,   199,   200,   199,   462,   333,
     138,   444,   139,   140,   199,   200,   199,   201,   192,   526,
     448,   454,   119,   273,   369,   456,   426,   461,   464,   466,
     468,   470,   472,   410,   527,  -240,   220,   199,   200,    77,
     441,   199,   200,   144,   356,   145,   144,   446,    56,   176,
     438,   453,   182,    78,   316,   262,   146,    80,   217,    57,
      81,   212,   222,    82,   224,   225,   226,   504,   458,   369,
     234,   202,   496,   286,   287,   202,   237,   494,   203,   474,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,    61,    62,    63,
      64,   262,    60,    65,    66,   108,   512,   514,   202,   289,
     262,    67,   327,   328,    68,   516,   204,   202,   430,   262,
      58,    69,   520,   109,   439,   237,    59,   289,   170,   335,
     336,   110,   112,   506,   171,   113,    70,    71,    72,    73,
     202,   531,   218,   257,   202,   199,   223,   380,   258,    74,
     114,    75,    89,   337,   117,   381,   517,   374,   375,    90,
     314,   315,   115,   232,   376,   233,   335,   336,   338,   395,
     339,   295,   335,   336,   116,   259,   257,    76,   118,   402,
     120,   258,   301,   302,   405,   304,   302,   296,    77,    91,
     337,   121,   519,   308,   302,   122,   337,   345,   346,   297,
     260,   123,    78,    79,   125,   338,    80,   339,    92,    81,
     124,   338,    82,   339,   126,   204,   141,   364,   347,   348,
     340,   127,   204,   390,   391,   128,    93,   261,   129,    61,
      62,    63,    64,   298,   455,    65,   460,   463,   465,   467,
     469,   471,   359,    67,   360,   130,    68,   165,   262,    61,
      62,    63,    64,    69,   211,    65,   131,   340,    61,    62,
      63,    64,   132,   340,    65,   133,    68,   134,    70,    71,
      72,    73,   424,   346,   184,    68,   480,   346,   365,   135,
      95,    74,   179,    75,  -284,   168,   484,   485,   487,   346,
      72,    73,   515,   346,   237,   530,   346,   535,   536,    72,
      73,   136,   148,   137,   169,   183,   185,   189,   204,    76,
     136,   190,   137,    99,   196,   511,   513,   148,   198,   411,
      77,   148,   209,   100,   216,   221,   227,   149,   231,   228,
     238,   101,   102,   229,    78,    79,   256,   267,    80,   268,
      77,    81,   149,   269,    82,   412,   149,   270,   103,    77,
     148,   271,   275,   272,    78,   274,   276,   541,    80,   279,
     105,    81,   282,    78,    82,   283,   285,    80,   300,   293,
      81,   148,   305,    82,   306,   149,   160,   161,   162,   163,
     164,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   149,   162,   163,   164,
     317,   413,   414,   415,   416,   417,   418,   148,   322,   286,
     324,   326,   419,   329,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   332,
     343,   148,   149,   309,   310,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     344,   353,   354,   358,   311,   312,   149,   362,   361,   370,
     372,   148,   378,   379,   384,   387,   388,   389,   392,   396,
     400,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   149,   148,   399,   410,
     401,   310,   407,   408,   420,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     421,   427,   149,   428,   432,   312,   148,   435,   436,   450,
     452,   437,   473,   442,   481,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     476,   149,   148,   477,   230,   397,   482,   483,   488,   489,
     491,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   492,   149,   493,   497,
     303,   148,   498,   499,   510,   518,   523,   528,   522,   532,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   529,   149,   148,   533,   307,
     538,   534,   539,   540,   195,   363,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   406,   149,   236,   537,   313,   334,   521,   505,   542,
     323,   500,   357,   325,   266,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     486,   350,   447,   383,   403,   429,   107,     0,     0,     0,
       0,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    95,     0,     0,     0,
     404,     0,     0,     0,     0,     0,    96,    97,     0,     0,
       0,     0,     0,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,   148,     0,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   149,   100,
     148,     0,     0,     0,     0,     0,     0,   101,   102,     0,
     148,     0,   149,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,   103,   149,     0,   104,     0,     0,
       0,     0,     0,     0,     0,   149,   105,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   148,
     156,   157,   158,   159,   160,   161,   162,   163,   164,     0,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,     1,
       0,     2,     0,     0,     0,     3,     0,     0,     4,     0,
       0,     5,     6,     7,     8,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    13,     0,    14,     0,    15,     0,    16,
       0,    17,     0,    18,     0,     0,     0,     0,     0,     0,
       0,    19,     0,    20
};

static const short yycheck[] =
{
     117,   293,   283,   324,   103,   104,   332,    15,     3,     4,
       5,     6,     5,     8,     9,     3,   115,     5,     3,    32,
       8,     3,     9,    26,    38,    20,     9,    38,     5,     6,
      46,     8,     5,     6,     3,     8,   365,    76,   319,     8,
      74,    95,    95,     3,    78,     3,    20,    95,    45,    44,
      45,   168,     3,    39,     5,     6,    14,     8,     5,   380,
      55,     8,    57,   117,   117,     5,     6,     5,     8,   117,
      78,    53,    80,    81,     5,     6,     5,     8,   117,    15,
     401,   410,    56,   182,   365,   411,    89,   413,   414,   415,
     416,   417,   418,    98,    30,    53,   109,     5,     6,    94,
     392,     5,     6,   117,   101,     3,   117,   399,    38,    60,
     391,   116,    81,   108,   231,   108,    14,   112,   126,    39,
     115,   116,   130,   118,   132,   133,   134,   115,   115,   410,
     115,   108,   115,     5,     6,   108,   144,   458,   115,   420,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,     3,     4,     5,
       6,   108,    46,     9,    10,    86,   492,   493,   108,   116,
     108,    17,   271,   272,    20,   496,   293,   108,   116,   108,
      67,    27,   499,    73,   115,   193,    73,   116,     3,     3,
       4,     3,     0,   485,     9,   114,    42,    43,    44,    45,
     108,   518,   127,     3,   108,     5,   131,   115,     8,    55,
      49,    57,     3,    27,   115,   332,   497,    68,    69,    10,
     228,   229,     3,   117,    75,   119,     3,     4,    42,   346,
      44,    20,     3,     4,     3,    35,     3,    83,     3,   356,
       3,     8,   116,   117,   361,   116,   117,    36,    94,    40,
      27,     3,    66,   116,   117,     3,    27,   116,   117,    48,
      60,     3,   108,   109,   120,    42,   112,    44,    59,   115,
     115,    42,   118,    44,   115,   392,     3,    54,   116,   117,
      94,   115,   399,   116,   117,   115,    77,    87,   115,     3,
       4,     5,     6,    82,   411,     9,   413,   414,   415,   416,
     417,   418,   310,    17,   312,   115,    20,    53,   108,     3,
       4,     5,     6,    27,     8,     9,   115,    94,     3,     4,
       5,     6,   115,    94,     9,   115,    20,   115,    42,    43,
      44,    45,   116,   117,     3,    20,   116,   117,   115,   115,
      13,    55,    86,    57,     0,   101,   116,   117,   116,   117,
      44,    45,   116,   117,   362,   116,   117,   116,   117,    44,
      45,    55,    33,    57,   101,    76,    52,    92,   485,    83,
      55,     3,    57,    46,     3,   492,   493,    33,    85,    19,
      94,    33,    71,    56,     3,   116,   116,    58,   101,   115,
       3,    64,    65,   115,   108,   109,     5,   101,   112,   101,
      94,   115,    58,   108,   118,    45,    58,    50,    81,    94,
      33,    81,     8,    81,   108,    81,    95,   534,   112,     3,
      93,   115,     3,   108,   118,   115,    73,   112,    44,   117,
     115,    33,     3,   118,   116,    58,   107,   108,   109,   110,
     111,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    58,   109,   110,   111,
       3,   101,   102,   103,   104,   105,   106,    33,   117,     5,
     115,    51,   112,     3,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   101,
      91,    33,    58,   116,   117,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       3,   116,    79,   116,   116,   117,    58,    74,   101,    41,
       5,    33,   101,    97,    61,   115,   115,   115,   115,     8,
       8,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    58,    33,   117,    98,
     115,   117,   116,   115,    21,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      96,    68,    58,     8,     3,   117,    33,   109,   116,    62,
       8,   116,    45,   117,   101,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      41,    58,    33,    62,   116,    14,   117,   116,    21,    53,
     116,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    98,    58,    98,   117,
     116,    33,    62,    21,     5,    21,     3,   117,   115,   115,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   117,    58,    33,     8,   116,
       5,   101,   116,   116,   113,   318,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   362,    58,   144,   528,   116,   280,   500,   482,   536,
     267,   478,   302,   269,   169,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     442,   293,   399,   333,   116,   379,    17,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    13,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    33,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    56,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      33,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    81,    58,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    93,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    33,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    16,
      -1,    18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,
      -1,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    16,    18,    22,    25,    28,    29,    30,    31,    34,
      37,    47,    63,    70,    72,    74,    76,    78,    80,    88,
      90,   122,   123,   124,   125,   126,   130,   166,   171,   172,
     175,   176,   177,   178,   185,   186,   195,   196,   197,   198,
     201,   206,   207,   208,   211,   213,   214,   215,   216,   217,
     219,   220,   221,    46,     3,    39,    38,    39,    67,    73,
      46,     3,     4,     5,     6,     9,    10,    17,    20,    27,
      42,    43,    44,    45,    55,    57,    83,    94,   108,   109,
     112,   115,   118,   131,   132,   134,   161,   162,   218,     3,
      10,    40,    59,    77,   209,    13,    23,    24,    40,    46,
      56,    64,    65,    81,    84,    93,   168,   209,    86,    73,
       3,   135,     0,   114,    49,     3,     3,   115,     3,   135,
       3,     3,     3,     3,   115,   120,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,    55,    57,   161,   161,
     161,     3,   165,    38,   117,     3,    14,   133,    33,    58,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    53,   153,   154,   101,   101,
       3,     9,     3,     5,     6,     8,    60,   169,   170,    86,
       3,     8,    81,    76,     3,    52,   167,   167,   167,    92,
       3,    76,   117,    74,    78,   125,     3,   167,    85,     5,
       6,     8,   108,   115,   142,   143,   184,   187,   188,    71,
      95,     8,   116,   161,   163,   164,     3,   161,   163,    32,
     109,   116,   161,   163,   161,   161,   161,   116,   115,   115,
     116,   101,   117,   119,   115,   135,   132,   161,     3,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,     5,     3,     8,    35,
      60,    87,   108,   142,   173,   174,   170,   101,   101,   108,
      50,    81,    81,   167,    81,     8,    95,   202,   203,     3,
     199,   200,     3,   115,   179,    73,     5,     6,     8,   116,
     142,   144,   189,   117,   190,    20,    36,    48,    82,   212,
      44,   116,   117,   116,   116,     3,   116,   116,   116,   116,
     117,   116,   117,   116,   161,   161,   142,     3,   127,    95,
     136,   137,   117,   173,   115,   169,    51,   167,   167,     3,
     204,   205,   101,   117,   137,     3,     4,    27,    42,    44,
      94,   141,   180,    91,     3,   116,   117,   116,   117,   184,
     188,   191,   192,   116,    79,    45,   101,   164,   116,   161,
     161,   101,    74,   130,    54,   115,   138,   139,   140,   141,
      41,   145,     5,   144,    68,    69,    75,   210,   101,    97,
     115,   142,   143,   200,    61,   155,   156,   115,   115,   115,
     116,   117,   115,   181,   182,   142,     8,    14,   193,   117,
       8,   115,   142,   116,   116,   142,   131,   116,   115,   138,
      98,    19,    45,   101,   102,   103,   104,   105,   106,   112,
      21,    96,   147,   148,   116,    26,    89,    68,     8,   205,
     116,   144,     3,   157,   158,   109,   116,   116,   141,   115,
     183,   184,   117,     3,    53,   194,   184,   192,   144,    38,
      62,   128,     8,   116,   138,   142,   143,     9,   115,     8,
     142,   143,     8,   142,   143,   142,   143,   142,   143,   142,
     143,   142,   143,    45,   141,   146,    41,    62,   149,   150,
     116,   101,   117,   116,   116,   117,   182,   116,    21,    53,
     129,   116,    98,    98,   144,     9,   115,   117,    62,    21,
     153,     3,     5,     8,   115,   158,   184,   141,   151,   152,
       5,   142,   143,   142,   143,   116,   144,   141,    21,    66,
     151,   155,   115,     3,   159,   160,    15,    30,   117,   117,
     116,   151,   115,     8,   101,   116,   117,   152,     5,   116,
     116,   142,   160
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

  case 27:

    { pParser->PushQuery(); ;}
    break;

  case 28:

    { pParser->PushQuery(); ;}
    break;

  case 32:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by subselect
		;}
    break;

  case 33:

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

  case 34:

    {
			pParser->m_pQuery->m_sOuterOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart,
				yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 36:

    {
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 37:

    {
			pParser->m_pQuery->m_iOuterOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 38:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->m_pQuery->m_sIndexes.SetBinary ( pParser->m_pBuf+yyvsp[-6].m_iStart,
				yyvsp[-6].m_iEnd-yyvsp[-6].m_iStart );
		;}
    break;

  case 41:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 44:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 45:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 46:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 47:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 48:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 49:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 50:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 51:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_CAT, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 52:

    { if ( !pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 53:

    { if ( !pParser->AddItem ( "groupby()", &yyvsp[-2], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 54:

    { if ( !pParser->AddDistinct ( &yyvsp[-1], &yyvsp[-4], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 56:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 63:

    {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		;}
    break;

  case 64:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 65:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 66:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 67:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 68:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 69:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-3].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 70:

    {
			if ( !pParser->AddIntRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 71:

    {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 72:

    {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 73:

    {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 74:

    {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 75:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 76:

    {
			yyerror ( pParser, "NEQ filter on floats is not (yet?) supported" );
			YYERROR;
		;}
    break;

  case 77:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 78:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 79:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 80:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX, false ) )
				YYERROR;
		;}
    break;

  case 81:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue, false ) )
				YYERROR;
		;}
    break;

  case 82:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX, true ) )
				YYERROR;
		;}
    break;

  case 83:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 84:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 85:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 88:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 89:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 90:

    {
			yyval.m_sValue = "@groupby";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 91:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 92:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 93:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 94:

    {
			yyval.m_iInstype = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 95:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 96:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 97:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 98:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 101:

    {
			pParser->AddGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 102:

    {
			pParser->AddGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 105:

    {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 108:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 109:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 111:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 113:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 114:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 117:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 118:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 124:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 125:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 126:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 127:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-2], yyvsp[-1].m_sValue ) )
				YYERROR;
		;}
    break;

  case 128:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 129:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 130:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 131:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 133:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 134:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 138:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 139:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
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

  case 157:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 158:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 160:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 161:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 162:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 163:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 164:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 165:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 166:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 171:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 172:

    { yyval = yyvsp[-4]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 175:

    { pParser->m_pStmt->m_sStringParam = yyvsp[0].m_sValue; ;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 177:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 178:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 179:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; ;}
    break;

  case 180:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; ;}
    break;

  case 181:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; ;}
    break;

  case 182:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 183:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 184:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 192:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 193:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 194:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 195:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 196:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 197:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 198:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 201:

    { yyval.m_iValue = 1; ;}
    break;

  case 202:

    { yyval.m_iValue = 0; ;}
    break;

  case 203:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 204:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 205:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 206:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 209:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 210:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 211:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 214:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 215:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 218:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 219:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 220:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 221:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 222:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 223:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 224:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 225:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 226:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-4].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-4].m_iEnd;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 227:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-6].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-6].m_iEnd;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 228:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 229:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 230:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 232:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 233:

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

  case 234:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 237:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 239:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 243:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 244:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 247:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 248:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-4] ) )
				YYERROR;
		;}
    break;

  case 251:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 252:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 253:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 254:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 255:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 262:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		;}
    break;

  case 263:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		;}
    break;

  case 264:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 272:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 273:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 274:

    { yyval.m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 275:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 276:

    { yyval.m_iValue = SPH_ATTR_STRINGPTR; ;}
    break;

  case 277:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 278:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sStringParam = yyvsp[0].m_sValue;
		;}
    break;

  case 279:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 280:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RAMCHUNK;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 281:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->m_pStmt->m_tQuery.m_sQuery = yyvsp[-1].m_sValue;
		;}
    break;

  case 283:

    {
			yyval.m_sValue.SetSprintf ( "%s.%s", yyvsp[-2].m_sValue.cstr(), yyvsp[0].m_sValue.cstr() );
		;}
    break;

  case 284:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_DUAL;
			pParser->m_pStmt->m_tQuery.m_sQuery.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart,
				yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 285:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 286:

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

