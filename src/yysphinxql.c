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
#define YYFINAL  111
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   967

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  100
/* YYNRULES -- Number of rules. */
#define YYNRULES  284
/* YYNRULES -- Number of states. */
#define YYNSTATES  541

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
      40,    42,    44,    46,    48,    50,    52,    54,    58,    60,
      62,    64,    74,    75,    79,    80,    83,    88,    99,   101,
     105,   107,   110,   111,   113,   116,   118,   123,   128,   133,
     138,   143,   148,   152,   158,   160,   164,   165,   167,   170,
     172,   176,   180,   185,   189,   193,   199,   206,   210,   215,
     221,   225,   229,   233,   237,   241,   243,   249,   255,   261,
     265,   269,   273,   277,   281,   285,   289,   291,   293,   298,
     302,   306,   308,   310,   313,   315,   318,   320,   324,   325,
     329,   331,   335,   336,   338,   344,   345,   347,   351,   357,
     359,   363,   365,   368,   371,   372,   374,   377,   382,   383,
     385,   388,   390,   394,   398,   402,   408,   415,   419,   421,
     425,   429,   431,   433,   435,   437,   439,   441,   444,   447,
     451,   455,   459,   463,   467,   471,   475,   479,   483,   487,
     491,   495,   499,   503,   507,   511,   515,   519,   523,   525,
     530,   535,   540,   544,   551,   558,   562,   564,   568,   570,
     572,   576,   582,   585,   586,   589,   591,   594,   597,   601,
     603,   605,   610,   615,   619,   621,   623,   625,   627,   629,
     631,   635,   640,   645,   650,   654,   659,   667,   673,   675,
     677,   679,   681,   683,   685,   687,   689,   691,   694,   701,
     703,   705,   706,   710,   712,   716,   718,   722,   726,   728,
     732,   734,   736,   738,   742,   745,   753,   763,   770,   772,
     776,   778,   782,   784,   788,   789,   792,   794,   798,   802,
     803,   805,   807,   809,   813,   815,   817,   821,   828,   830,
     834,   838,   842,   848,   853,   858,   859,   861,   864,   866,
     870,   874,   877,   881,   888,   889,   891,   893,   896,   899,
     902,   904,   912,   914,   916,   918,   920,   924,   931,   935,
     939,   943,   945,   949,   953
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     122,     0,    -1,   123,    -1,   124,    -1,   124,   114,    -1,
     177,    -1,   185,    -1,   171,    -1,   172,    -1,   175,    -1,
     186,    -1,   195,    -1,   197,    -1,   198,    -1,   201,    -1,
     206,    -1,   207,    -1,   211,    -1,   213,    -1,   214,    -1,
     215,    -1,   216,    -1,   208,    -1,   217,    -1,   219,    -1,
     220,    -1,   125,    -1,   124,   114,   125,    -1,   126,    -1,
     166,    -1,   130,    -1,    74,   131,    38,   115,   127,   130,
     116,   128,   129,    -1,    -1,    62,    21,   151,    -1,    -1,
      53,     5,    -1,    53,     5,   117,     5,    -1,    74,   131,
      38,   135,   136,   145,   147,   149,   153,   155,    -1,   132,
      -1,   131,   117,   132,    -1,   109,    -1,   134,   133,    -1,
      -1,     3,    -1,    14,     3,    -1,   161,    -1,    17,   115,
     161,   116,    -1,    55,   115,   161,   116,    -1,    57,   115,
     161,   116,    -1,    83,   115,   161,   116,    -1,    43,   115,
     161,   116,    -1,    27,   115,   109,   116,    -1,    42,   115,
     116,    -1,    27,   115,    32,     3,   116,    -1,     3,    -1,
     135,   117,     3,    -1,    -1,   137,    -1,    95,   138,    -1,
     139,    -1,   138,    98,   138,    -1,   115,   138,   116,    -1,
      54,   115,     8,   116,    -1,   141,   101,   142,    -1,   141,
     102,   142,    -1,   141,    45,   115,   144,   116,    -1,   141,
     112,    45,   115,   144,   116,    -1,   141,    45,     9,    -1,
     141,   112,    45,     9,    -1,   141,    19,   142,    98,   142,
      -1,   141,   104,   142,    -1,   141,   103,   142,    -1,   141,
     105,   142,    -1,   141,   106,   142,    -1,   141,   101,   143,
      -1,   140,    -1,   141,    19,   143,    98,   143,    -1,   141,
      19,   142,    98,   143,    -1,   141,    19,   143,    98,   142,
      -1,   141,   104,   143,    -1,   141,   103,   143,    -1,   141,
     105,   143,    -1,   141,   106,   143,    -1,   141,   101,     8,
      -1,   141,   102,     8,    -1,   141,   102,   143,    -1,     3,
      -1,     4,    -1,    27,   115,   109,   116,    -1,    42,   115,
     116,    -1,    94,   115,   116,    -1,    44,    -1,     5,    -1,
     108,     5,    -1,     6,    -1,   108,     6,    -1,   142,    -1,
     144,   117,   142,    -1,    -1,    41,    21,   146,    -1,   141,
      -1,   146,   117,   141,    -1,    -1,   148,    -1,    96,    41,
      62,    21,   151,    -1,    -1,   150,    -1,    62,    21,   151,
      -1,    62,    21,    66,   115,   116,    -1,   152,    -1,   151,
     117,   152,    -1,   141,    -1,   141,    15,    -1,   141,    30,
      -1,    -1,   154,    -1,    53,     5,    -1,    53,     5,   117,
       5,    -1,    -1,   156,    -1,    61,   157,    -1,   158,    -1,
     157,   117,   158,    -1,     3,   101,     3,    -1,     3,   101,
       5,    -1,     3,   101,   115,   159,   116,    -1,     3,   101,
       3,   115,     8,   116,    -1,     3,   101,     8,    -1,   160,
      -1,   159,   117,   160,    -1,     3,   101,   142,    -1,     3,
      -1,     4,    -1,    44,    -1,     5,    -1,     6,    -1,     9,
      -1,   108,   161,    -1,   112,   161,    -1,   161,   107,   161,
      -1,   161,   108,   161,    -1,   161,   109,   161,    -1,   161,
     110,   161,    -1,   161,   103,   161,    -1,   161,   104,   161,
      -1,   161,   100,   161,    -1,   161,    99,   161,    -1,   161,
     111,   161,    -1,   161,    33,   161,    -1,   161,    58,   161,
      -1,   161,   106,   161,    -1,   161,   105,   161,    -1,   161,
     101,   161,    -1,   161,   102,   161,    -1,   161,    98,   161,
      -1,   161,    97,   161,    -1,   115,   161,   116,    -1,   118,
     165,   119,    -1,   162,    -1,     3,   115,   163,   116,    -1,
      45,   115,   163,   116,    -1,    20,   115,   163,   116,    -1,
       3,   115,   116,    -1,    57,   115,   161,   117,   161,   116,
      -1,    55,   115,   161,   117,   161,   116,    -1,    94,   115,
     116,    -1,   164,    -1,   163,   117,   164,    -1,   161,    -1,
       8,    -1,     3,   101,   142,    -1,   165,   117,     3,   101,
     142,    -1,    78,   168,    -1,    -1,    52,     8,    -1,    93,
      -1,    81,   167,    -1,    56,   167,    -1,    13,    81,   167,
      -1,    65,    -1,    64,    -1,    13,     8,    81,   167,    -1,
      13,     3,    81,   167,    -1,    46,     3,    81,    -1,     3,
      -1,    60,    -1,     8,    -1,     5,    -1,     6,    -1,   169,
      -1,   170,   108,   169,    -1,    76,     3,   101,   174,    -1,
      76,     3,   101,   173,    -1,    76,     3,   101,    60,    -1,
      76,    59,   170,    -1,    76,    10,   101,   170,    -1,    76,
      40,     9,   101,   115,   144,   116,    -1,    76,    40,     3,
     101,   173,    -1,     3,    -1,     8,    -1,    87,    -1,    35,
      -1,   142,    -1,    25,    -1,    72,    -1,   176,    -1,    18,
      -1,    80,    86,    -1,   178,    49,     3,   179,    91,   181,
      -1,    47,    -1,    70,    -1,    -1,   115,   180,   116,    -1,
     141,    -1,   180,   117,   141,    -1,   182,    -1,   181,   117,
     182,    -1,   115,   183,   116,    -1,   184,    -1,   183,   117,
     184,    -1,   142,    -1,   143,    -1,     8,    -1,   115,   144,
     116,    -1,   115,   116,    -1,    29,    38,   135,    95,    44,
     101,   142,    -1,    29,    38,   135,    95,    44,    45,   115,
     144,   116,    -1,    22,     3,   115,   187,   190,   116,    -1,
     188,    -1,   187,   117,   188,    -1,   184,    -1,   115,   189,
     116,    -1,     8,    -1,   189,   117,     8,    -1,    -1,   117,
     191,    -1,   192,    -1,   191,   117,   192,    -1,   184,   193,
     194,    -1,    -1,    14,    -1,     3,    -1,    53,    -1,   196,
       3,   167,    -1,    31,    -1,    30,    -1,    78,    84,   167,
      -1,    90,   135,    76,   199,   137,   155,    -1,   200,    -1,
     199,   117,   200,    -1,     3,   101,   142,    -1,     3,   101,
     143,    -1,     3,   101,   115,   144,   116,    -1,     3,   101,
     115,   116,    -1,    78,   209,    92,   202,    -1,    -1,   203,
      -1,    95,   204,    -1,   205,    -1,   204,    97,   205,    -1,
       3,   101,     8,    -1,    78,    24,    -1,    78,    23,    76,
      -1,    76,   209,    86,    50,    51,   210,    -1,    -1,    40,
      -1,    77,    -1,    68,    89,    -1,    68,    26,    -1,    69,
      68,    -1,    75,    -1,    28,    39,     3,    71,   212,    79,
       8,    -1,    48,    -1,    20,    -1,    36,    -1,    82,    -1,
      34,    39,     3,    -1,    16,    46,     3,    85,    73,     3,
      -1,    37,    73,     3,    -1,    37,    67,     3,    -1,    74,
     218,   153,    -1,    10,    -1,    10,   120,     3,    -1,    88,
      73,     3,    -1,    63,    46,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   132,   132,   133,   134,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   164,   165,   169,   170,
     174,   175,   183,   196,   204,   206,   211,   220,   236,   237,
     241,   242,   245,   247,   248,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   264,   265,   268,   270,   274,   278,
     279,   280,   284,   289,   296,   304,   312,   321,   326,   331,
     336,   341,   346,   351,   356,   361,   366,   371,   376,   381,
     386,   391,   396,   401,   406,   414,   418,   419,   424,   430,
     436,   442,   451,   452,   463,   464,   468,   474,   480,   482,
     486,   490,   496,   498,   502,   513,   515,   519,   523,   530,
     531,   535,   536,   537,   540,   542,   546,   551,   558,   560,
     564,   568,   569,   573,   578,   583,   589,   594,   602,   607,
     614,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   655,
     656,   657,   658,   659,   660,   661,   665,   666,   670,   671,
     675,   676,   682,   685,   687,   691,   692,   693,   694,   695,
     696,   697,   702,   707,   717,   718,   719,   720,   721,   725,
     726,   730,   735,   740,   745,   746,   750,   755,   763,   764,
     768,   769,   770,   784,   785,   786,   790,   791,   797,   805,
     806,   809,   811,   815,   816,   820,   821,   825,   829,   830,
     834,   835,   836,   837,   838,   844,   852,   866,   874,   878,
     885,   886,   893,   903,   909,   911,   915,   920,   924,   931,
     933,   937,   938,   944,   952,   953,   959,   965,   973,   974,
     978,   982,   986,   990,  1000,  1006,  1007,  1011,  1015,  1016,
    1020,  1024,  1031,  1038,  1044,  1045,  1046,  1050,  1051,  1052,
    1053,  1059,  1070,  1071,  1072,  1073,  1077,  1088,  1100,  1109,
    1120,  1128,  1129,  1138,  1149
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
  "sysvar_name", "truncate", "optimize_index", 0
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
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   128,   129,   129,   129,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   136,   136,   137,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   141,   141,   141,   141,
     141,   141,   142,   142,   143,   143,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   157,   157,   158,   158,   158,   158,   158,   159,   159,
     160,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   163,   163,   164,   164,
     165,   165,   166,   167,   167,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   169,   169,   169,   169,   169,   170,
     170,   171,   171,   171,   171,   171,   172,   172,   173,   173,
     174,   174,   174,   175,   175,   175,   176,   176,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   182,   183,   183,
     184,   184,   184,   184,   184,   185,   185,   186,   187,   187,
     188,   188,   189,   189,   190,   190,   191,   191,   192,   193,
     193,   194,   194,   195,   196,   196,   197,   198,   199,   199,
     200,   200,   200,   200,   201,   202,   202,   203,   204,   204,
     205,   206,   207,   208,   209,   209,   209,   210,   210,   210,
     210,   211,   212,   212,   212,   212,   213,   214,   215,   216,
     217,   218,   218,   219,   220
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     9,     0,     3,     0,     2,     4,    10,     1,     3,
       1,     2,     0,     1,     2,     1,     4,     4,     4,     4,
       4,     4,     3,     5,     1,     3,     0,     1,     2,     1,
       3,     3,     4,     3,     3,     5,     6,     3,     4,     5,
       3,     3,     3,     3,     3,     1,     5,     5,     5,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     4,     3,
       3,     1,     1,     2,     1,     2,     1,     3,     0,     3,
       1,     3,     0,     1,     5,     0,     1,     3,     5,     1,
       3,     1,     2,     2,     0,     1,     2,     4,     0,     1,
       2,     1,     3,     3,     3,     5,     6,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       4,     4,     3,     6,     6,     3,     1,     3,     1,     1,
       3,     5,     2,     0,     2,     1,     2,     2,     3,     1,
       1,     4,     4,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     4,     3,     4,     7,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     6,     1,
       1,     0,     3,     1,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     3,     2,     7,     9,     6,     1,     3,
       1,     3,     1,     3,     0,     2,     1,     3,     3,     0,
       1,     1,     1,     3,     1,     1,     3,     6,     1,     3,
       3,     3,     5,     4,     4,     0,     1,     2,     1,     3,
       3,     2,     3,     6,     0,     1,     1,     2,     2,     2,
       1,     7,     1,     1,     1,     1,     3,     6,     3,     3,
       3,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     0,   206,     0,   203,     0,     0,   245,   244,     0,
       0,   209,     0,   210,   204,     0,   264,   264,     0,     0,
       0,     0,     2,     3,    26,    28,    30,    29,     7,     8,
       9,   205,     5,     0,     6,    10,    11,     0,    12,    13,
      14,    15,    16,    22,    17,    18,    19,    20,    21,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     131,   132,   134,   135,   136,   281,     0,     0,     0,     0,
       0,   133,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,    38,    42,    45,   158,   114,     0,     0,
     265,     0,   266,     0,     0,     0,   261,   265,     0,   173,
     180,   179,   173,   173,   175,   172,     0,   207,     0,    54,
       0,     1,     4,     0,   173,     0,     0,     0,     0,   276,
     279,   278,   284,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   138,     0,
       0,     0,     0,     0,    43,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   280,   115,     0,     0,     0,
       0,   184,   187,   188,   186,   185,   189,   194,     0,     0,
       0,   173,   262,     0,     0,   177,   176,   246,   255,   283,
       0,     0,     0,     0,    27,   211,   243,     0,    92,    94,
     222,     0,     0,   220,   221,   230,   234,   228,     0,     0,
     169,   162,   168,     0,   166,   282,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,   165,     0,     0,   156,
       0,     0,   157,    32,    56,    39,    44,   148,   149,   155,
     154,   146,   145,   152,   153,   143,   144,   151,   150,   139,
     140,   141,   142,   147,   116,   198,   199,   201,   193,   200,
       0,   202,   192,   191,   195,     0,     0,     0,     0,   173,
     173,   178,   183,   174,     0,   254,   256,     0,     0,   248,
      55,     0,     0,     0,    93,    95,   232,   224,    96,     0,
       0,     0,     0,   273,   274,   272,   275,     0,     0,   159,
       0,    46,   161,     0,    51,    50,   160,    47,     0,    48,
       0,    49,     0,     0,   170,     0,     0,     0,    98,    57,
       0,   197,     0,   190,     0,   182,   181,     0,   257,   258,
       0,     0,   118,    86,    87,     0,     0,    91,     0,   213,
       0,     0,   277,   223,     0,   231,     0,   230,   229,   235,
     236,   227,     0,     0,     0,   167,    53,     0,     0,     0,
       0,     0,     0,     0,    58,    59,    75,     0,     0,   102,
     117,     0,     0,     0,   270,   263,     0,     0,     0,   250,
     251,   249,     0,   247,   119,     0,     0,     0,   212,     0,
       0,   208,   215,    97,   233,   240,     0,     0,   271,     0,
     225,   164,   163,   171,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   103,   196,   268,   267,   269,   260,   259,   253,     0,
       0,   120,   121,     0,    89,    90,   214,     0,     0,   218,
       0,   241,   242,   238,   239,   237,     0,     0,     0,    34,
       0,    61,    60,     0,     0,    67,     0,    83,    63,    74,
      84,    64,    85,    71,    80,    70,    79,    72,    81,    73,
      82,     0,   100,    99,     0,     0,   114,   106,   252,     0,
       0,    88,   217,     0,   216,   226,     0,     0,    31,    62,
       0,     0,     0,    68,     0,     0,     0,     0,   118,   123,
     124,   127,     0,   122,   219,   111,    33,   109,    35,    69,
      77,    78,    76,    65,     0,   101,     0,     0,   107,    37,
       0,     0,     0,   128,   112,   113,     0,     0,    66,   104,
       0,     0,     0,   125,     0,   110,    36,   108,   126,   130,
     129
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,   316,   449,   488,    26,
      82,    83,   146,    84,   234,   318,   319,   364,   365,   366,
     505,   288,   204,   289,   369,   473,   420,   421,   476,   477,
     506,   507,   165,   166,   383,   384,   431,   432,   522,   523,
      85,    86,   213,   214,   141,    27,   185,   105,   176,   177,
      28,    29,   262,   263,    30,    31,    32,    33,   282,   340,
     391,   392,   438,   205,    34,    35,   206,   207,   290,   292,
     349,   350,   396,   443,    36,    37,    38,    39,   278,   279,
      40,   275,   276,   328,   329,    41,    42,    43,    93,   375,
      44,   297,    45,    46,    47,    48,    49,    87,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -465
static const short yypact[] =
{
     877,    70,  -465,   120,  -465,   104,   108,  -465,  -465,   111,
      25,  -465,   123,  -465,  -465,   121,   675,   666,   145,   116,
     213,   237,  -465,   126,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,  -465,   186,  -465,  -465,  -465,   245,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,  -465,   252,   144,   269,   213,   272,   279,   281,   286,
     177,  -465,  -465,  -465,  -465,   174,   192,   199,   205,   208,
     219,  -465,   224,   227,   238,   254,   256,   321,  -465,   321,
     321,   325,   -24,  -465,   183,   674,  -465,   308,   276,   292,
     181,   490,  -465,   287,    28,   306,  -465,  -465,   392,   346,
    -465,  -465,   346,   346,  -465,  -465,   307,  -465,   397,  -465,
      -7,  -465,   -12,   398,   346,   317,    24,   332,   -54,  -465,
    -465,  -465,  -465,   197,   401,   321,   313,   -14,   290,   321,
     313,   321,   321,   321,   294,   297,   298,  -465,  -465,   458,
     318,   103,     2,   168,  -465,   411,  -465,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   412,  -465,  -465,   303,   490,   319,
     322,  -465,  -465,  -465,  -465,  -465,  -465,   314,   374,   345,
     351,   346,  -465,   353,   419,  -465,  -465,  -465,   340,  -465,
     435,   440,   168,   316,  -465,   329,  -465,   390,  -465,  -465,
    -465,    29,    20,  -465,  -465,  -465,   328,  -465,   171,   420,
    -465,  -465,   674,    82,  -465,  -465,   486,   110,   465,   368,
    -465,   512,   128,   350,   372,   540,  -465,   321,   321,  -465,
      10,   482,  -465,  -465,   -47,  -465,  -465,  -465,  -465,   688,
     702,   767,   781,   160,   160,   277,   277,   277,   277,   331,
     331,  -465,  -465,  -465,   369,  -465,  -465,  -465,  -465,  -465,
     487,  -465,  -465,  -465,   314,   159,   379,   490,   436,   346,
     346,  -465,  -465,  -465,   494,  -465,  -465,   399,    38,  -465,
    -465,   246,   408,   514,  -465,  -465,  -465,  -465,  -465,   130,
     141,    24,   402,  -465,  -465,  -465,  -465,   441,   -36,  -465,
     313,  -465,  -465,   406,  -465,  -465,  -465,  -465,   321,  -465,
     321,  -465,   404,   432,  -465,   422,   450,    93,   484,  -465,
     521,  -465,    10,  -465,   210,  -465,  -465,   426,   431,  -465,
      53,   435,   485,  -465,  -465,   433,   437,  -465,   438,  -465,
     185,   439,  -465,  -465,    10,  -465,   539,   156,  -465,   434,
    -465,  -465,   563,   457,    10,  -465,  -465,   566,   594,    10,
     168,   459,   461,    93,   479,  -465,  -465,   242,   557,   483,
    -465,   187,     1,   513,  -465,  -465,   572,   494,     3,  -465,
    -465,  -465,   579,  -465,  -465,   491,   488,   489,  -465,   246,
      34,   508,  -465,  -465,  -465,  -465,    41,    34,  -465,    10,
    -465,  -465,  -465,  -465,   -18,   541,   593,   -52,    93,    32,
      -3,   148,   152,    32,    32,    32,    32,   561,   246,   567,
     545,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,   215,
     525,   515,  -465,   517,  -465,  -465,  -465,     5,   220,  -465,
     439,  -465,  -465,  -465,   615,  -465,   233,   213,   609,   578,
     518,  -465,  -465,   537,   538,  -465,    10,  -465,  -465,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,     7,  -465,   536,   592,   634,   308,  -465,  -465,    14,
     579,  -465,  -465,    34,  -465,  -465,   246,   652,  -465,  -465,
      32,    32,   235,  -465,    10,   246,   637,   352,   485,   544,
    -465,  -465,   657,  -465,  -465,    30,   564,  -465,   569,  -465,
    -465,  -465,  -465,  -465,   243,  -465,   246,   546,   564,  -465,
     654,   582,   275,  -465,  -465,  -465,   246,   679,  -465,   564,
     571,   595,    10,  -465,   657,  -465,  -465,  -465,  -465,  -465,
    -465
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -465,  -465,  -465,  -465,   568,  -465,  -465,  -465,  -465,   393,
     348,   570,  -465,  -465,     6,  -465,   410,  -340,  -465,  -465,
    -274,  -116,  -309,  -311,  -465,  -465,  -465,  -465,  -465,  -465,
    -464,   188,   240,  -465,   221,  -465,  -465,   244,  -465,   184,
     -76,  -465,    66,   417,  -465,  -465,   -90,  -465,   453,   555,
    -465,  -465,   460,  -465,  -465,  -465,  -465,  -465,  -465,  -465,
    -465,   288,  -465,  -289,  -465,  -465,  -465,   442,  -465,  -465,
    -465,   330,  -465,  -465,  -465,  -465,  -465,  -465,  -465,   395,
    -465,  -465,  -465,  -465,   359,  -465,  -465,  -465,   712,  -465,
    -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465,  -465
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -240
static const short yytable[] =
{
     203,   137,   347,   138,   139,   109,   455,   339,   198,   353,
     198,   371,   186,   187,   142,   198,   493,   499,   218,   500,
     447,   380,   501,   407,   196,   198,   110,   423,   286,   198,
     199,   179,   200,   518,   284,   285,   180,   198,   199,   198,
     199,   209,   200,   367,   441,   524,   408,   212,   317,   216,
     212,   261,   529,   221,   212,   223,   224,   225,   198,   199,
     525,   118,   192,   191,   451,   354,   193,   429,   452,   190,
     191,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   446,   367,
     424,   271,    57,   143,   442,   219,   333,   334,    58,   143,
     454,   439,   459,   462,   464,   466,   468,   470,   444,   181,
     191,   260,   456,   260,   314,   436,    52,   233,   260,   428,
     335,   287,   494,    53,    60,    61,    62,    63,   260,   502,
      64,    65,   201,   317,   367,   336,   287,   337,    66,   202,
     201,    67,   201,    54,   472,   492,    55,   362,    68,   437,
      56,   312,   313,   198,   199,   331,   457,   198,   199,  -239,
     460,   201,   255,    69,    70,    71,    72,   256,   378,    59,
     395,    60,    61,    62,    63,   203,    73,    64,    74,   325,
     326,   510,   512,   514,   169,    66,   144,   338,    67,   108,
     170,   293,   217,   147,   504,    68,   222,   145,   299,   300,
      60,    61,    62,    63,    75,   210,    64,   294,   363,  -239,
      69,    70,    71,    72,   379,    76,   109,    67,   148,   295,
     231,   515,   232,    73,   212,    74,   302,   300,   393,    77,
      78,   107,   357,    79,   358,   113,    80,   111,   400,    81,
     112,    71,    72,   403,   306,   300,   343,   344,   114,   333,
     334,    75,   135,   296,   136,   115,   201,   345,   346,   116,
     201,   409,    76,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   117,   335,   203,   119,    77,    78,   372,   373,
      79,   203,   120,    80,   121,   374,    81,   410,   336,   122,
     337,    76,   123,   453,   124,   458,   461,   463,   465,   467,
     469,   388,   389,   422,   344,    77,   255,   125,   198,    79,
     147,   256,    80,   211,   126,    81,    60,    61,    62,    63,
     127,   210,    64,   128,    60,    61,    62,    63,   140,    94,
      64,   478,   344,    67,   129,   148,   482,   483,   257,   130,
     338,    67,   131,   411,   412,   413,   414,   415,   416,   485,
     344,   513,   344,   132,   417,   333,   334,    71,    72,   528,
     344,   164,    98,   258,   147,    71,    72,   203,   135,   133,
     136,   134,    99,   178,   509,   511,   135,   167,   136,   335,
     100,   101,   182,   147,   159,   160,   161,   162,   163,   148,
     259,   533,   534,   168,   336,   183,   337,   102,   184,   188,
     189,   195,   197,   208,   215,   147,   220,    76,   148,   104,
     226,   260,   227,   228,   236,    76,   539,   254,   517,   230,
     265,    77,   267,   266,   268,    79,   269,   273,    80,    77,
     148,    81,   270,    79,   272,   274,    80,   147,   277,    81,
     161,   162,   163,   280,   281,   291,   338,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   148,   283,   298,   147,   307,   308,   303,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   304,   315,   320,   324,   309,   310,
     148,   147,   284,   171,   322,   172,   173,   327,   174,   341,
     330,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   148,   342,   351,   147,
     352,   308,   356,   359,   360,   368,   370,   376,   377,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   148,   147,   382,   394,   385,   310,
     175,   397,   386,   387,   390,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     148,   398,   399,   147,   229,   405,   406,   408,   418,   419,
     426,   425,   430,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   148,   147,
     433,   450,   301,   448,   434,   435,   471,   475,   474,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   148,   440,   479,   147,   305,   395,
     486,   487,   480,   481,   489,   490,   491,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   148,   495,   496,   497,   311,   508,   516,   520,
     521,   530,   531,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    88,    94,
     194,   526,   401,   532,   536,    89,   527,   537,   332,    95,
      96,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    97,   147,   404,   361,
     402,   538,    98,   235,   535,    90,   498,   355,   540,   519,
     323,   147,    99,   264,   503,   321,   381,   445,   484,   106,
     100,   101,   148,   348,    91,   147,   427,     0,     0,     0,
       0,     0,     0,    92,     0,     0,   148,   102,     0,     0,
     103,     0,    92,     0,     0,     0,     0,     0,     0,   104,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     147,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     0,
       0,     0,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,     1,     0,     2,     0,     0,     0,     3,
       0,     0,     4,     0,     0,     5,     6,     7,     8,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,    13,     0,    14,
       0,    15,     0,    16,     0,    17,     0,    18,     0,     0,
       0,     0,     0,     0,     0,    19,     0,    20
};

static const short yycheck[] =
{
     116,    77,   291,    79,    80,     3,     9,   281,     5,    45,
       5,   322,   102,   103,    38,     5,     9,     3,    32,     5,
      38,   330,     8,   363,   114,     5,    20,    26,     8,     5,
       6,     3,     8,   497,     5,     6,     8,     5,     6,     5,
       6,    95,     8,   317,     3,    15,    98,   123,    95,   125,
     126,   167,   516,   129,   130,   131,   132,   133,     5,     6,
      30,    55,    74,   117,   116,   101,    78,   378,   408,    76,
     117,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   399,   363,
      89,   181,    67,   117,    53,   109,     3,     4,    73,   117,
     409,   390,   411,   412,   413,   414,   415,   416,   397,    81,
     117,   108,   115,   108,   230,   389,    46,   115,   108,   116,
      27,   116,   115,     3,     3,     4,     5,     6,   108,   115,
       9,    10,   108,    95,   408,    42,   116,    44,    17,   115,
     108,    20,   108,    39,   418,   456,    38,    54,    27,   115,
      39,   227,   228,     5,     6,   117,     8,     5,     6,     3,
       8,   108,     3,    42,    43,    44,    45,     8,   115,    46,
      14,     3,     4,     5,     6,   291,    55,     9,    57,   269,
     270,   490,   491,   494,     3,    17,     3,    94,    20,    73,
       9,    20,   126,    33,   483,    27,   130,    14,   116,   117,
       3,     4,     5,     6,    83,     8,     9,    36,   115,    53,
      42,    43,    44,    45,   330,    94,     3,    20,    58,    48,
     117,   495,   119,    55,   300,    57,   116,   117,   344,   108,
     109,    86,   308,   112,   310,    49,   115,     0,   354,   118,
     114,    44,    45,   359,   116,   117,   116,   117,     3,     3,
       4,    83,    55,    82,    57,     3,   108,   116,   117,   115,
     108,    19,    94,   103,   104,   105,   106,   107,   108,   109,
     110,   111,     3,    27,   390,     3,   108,   109,    68,    69,
     112,   397,     3,   115,     3,    75,   118,    45,    42,     3,
      44,    94,   115,   409,   120,   411,   412,   413,   414,   415,
     416,   116,   117,   116,   117,   108,     3,   115,     5,   112,
      33,     8,   115,   116,   115,   118,     3,     4,     5,     6,
     115,     8,     9,   115,     3,     4,     5,     6,     3,    13,
       9,   116,   117,    20,   115,    58,   116,   117,    35,   115,
      94,    20,   115,   101,   102,   103,   104,   105,   106,   116,
     117,   116,   117,   115,   112,     3,     4,    44,    45,   116,
     117,    53,    46,    60,    33,    44,    45,   483,    55,   115,
      57,   115,    56,    86,   490,   491,    55,   101,    57,    27,
      64,    65,    76,    33,   107,   108,   109,   110,   111,    58,
      87,   116,   117,   101,    42,     3,    44,    81,    52,    92,
       3,     3,    85,    71,     3,    33,   116,    94,    58,    93,
     116,   108,   115,   115,     3,    94,   532,     5,    66,   101,
     101,   108,   108,   101,    50,   112,    81,     8,   115,   108,
      58,   118,    81,   112,    81,    95,   115,    33,     3,   118,
     109,   110,   111,     3,   115,   117,    94,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    58,    73,    44,    33,   116,   117,     3,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   116,     3,   117,    51,   116,   117,
      58,    33,     5,     3,   115,     5,     6,     3,     8,    91,
     101,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    58,     3,   116,    33,
      79,   117,   116,   101,    74,    41,     5,   101,    97,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    58,    33,    61,     8,   115,   117,
      60,   117,   115,   115,   115,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      58,     8,   115,    33,   116,   116,   115,    98,    21,    96,
       8,    68,     3,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    58,    33,
     109,     8,   116,    62,   116,   116,    45,    62,    41,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    58,   117,   101,    33,   116,    14,
      21,    53,   117,   116,   116,    98,    98,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    58,   117,    62,    21,   116,     5,    21,   115,
       3,   115,     8,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     3,    13,
     112,   117,   116,   101,     5,    10,   117,   116,   278,    23,
      24,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    40,    33,   360,   316,
     116,   116,    46,   143,   526,    40,   476,   300,   534,   498,
     267,    33,    56,   168,   480,   265,   331,   397,   440,    17,
      64,    65,    58,   291,    59,    33,   377,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    58,    81,    -1,    -1,
      84,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      33,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    16,    -1,    18,    -1,    -1,    -1,    22,
      -1,    -1,    25,    -1,    -1,    28,    29,    30,    31,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    90
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
     219,   220,    46,     3,    39,    38,    39,    67,    73,    46,
       3,     4,     5,     6,     9,    10,    17,    20,    27,    42,
      43,    44,    45,    55,    57,    83,    94,   108,   109,   112,
     115,   118,   131,   132,   134,   161,   162,   218,     3,    10,
      40,    59,    77,   209,    13,    23,    24,    40,    46,    56,
      64,    65,    81,    84,    93,   168,   209,    86,    73,     3,
     135,     0,   114,    49,     3,     3,   115,     3,   135,     3,
       3,     3,     3,   115,   120,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,    55,    57,   161,   161,   161,
       3,   165,    38,   117,     3,    14,   133,    33,    58,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,    53,   153,   154,   101,   101,     3,
       9,     3,     5,     6,     8,    60,   169,   170,    86,     3,
       8,    81,    76,     3,    52,   167,   167,   167,    92,     3,
      76,   117,    74,    78,   125,     3,   167,    85,     5,     6,
       8,   108,   115,   142,   143,   184,   187,   188,    71,    95,
       8,   116,   161,   163,   164,     3,   161,   163,    32,   109,
     116,   161,   163,   161,   161,   161,   116,   115,   115,   116,
     101,   117,   119,   115,   135,   132,     3,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,     5,     3,     8,    35,    60,    87,
     108,   142,   173,   174,   170,   101,   101,   108,    50,    81,
      81,   167,    81,     8,    95,   202,   203,     3,   199,   200,
       3,   115,   179,    73,     5,     6,     8,   116,   142,   144,
     189,   117,   190,    20,    36,    48,    82,   212,    44,   116,
     117,   116,   116,     3,   116,   116,   116,   116,   117,   116,
     117,   116,   161,   161,   142,     3,   127,    95,   136,   137,
     117,   173,   115,   169,    51,   167,   167,     3,   204,   205,
     101,   117,   137,     3,     4,    27,    42,    44,    94,   141,
     180,    91,     3,   116,   117,   116,   117,   184,   188,   191,
     192,   116,    79,    45,   101,   164,   116,   161,   161,   101,
      74,   130,    54,   115,   138,   139,   140,   141,    41,   145,
       5,   144,    68,    69,    75,   210,   101,    97,   115,   142,
     143,   200,    61,   155,   156,   115,   115,   115,   116,   117,
     115,   181,   182,   142,     8,    14,   193,   117,     8,   115,
     142,   116,   116,   142,   131,   116,   115,   138,    98,    19,
      45,   101,   102,   103,   104,   105,   106,   112,    21,    96,
     147,   148,   116,    26,    89,    68,     8,   205,   116,   144,
       3,   157,   158,   109,   116,   116,   141,   115,   183,   184,
     117,     3,    53,   194,   184,   192,   144,    38,    62,   128,
       8,   116,   138,   142,   143,     9,   115,     8,   142,   143,
       8,   142,   143,   142,   143,   142,   143,   142,   143,   142,
     143,    45,   141,   146,    41,    62,   149,   150,   116,   101,
     117,   116,   116,   117,   182,   116,    21,    53,   129,   116,
      98,    98,   144,     9,   115,   117,    62,    21,   153,     3,
       5,     8,   115,   158,   184,   141,   151,   152,     5,   142,
     143,   142,   143,   116,   144,   141,    21,    66,   151,   155,
     115,     3,   159,   160,    15,    30,   117,   117,   116,   151,
     115,     8,   101,   116,   117,   152,     5,   116,   116,   142,
     160
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

  case 26:

    { pParser->PushQuery(); ;}
    break;

  case 27:

    { pParser->PushQuery(); ;}
    break;

  case 31:

    {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by subselect
		;}
    break;

  case 32:

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

  case 33:

    {
			pParser->m_pQuery->m_sOuterOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart,
				yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 35:

    {
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 36:

    {
			pParser->m_pQuery->m_iOuterOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].m_iValue;
			pParser->m_pQuery->m_bHasOuter = true;
		;}
    break;

  case 37:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->m_pQuery->m_sIndexes.SetBinary ( pParser->m_pBuf+yyvsp[-6].m_iStart,
				yyvsp[-6].m_iEnd-yyvsp[-6].m_iStart );
		;}
    break;

  case 40:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 43:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 44:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 45:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 46:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 47:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 48:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 49:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 50:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_CAT, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 51:

    { if ( !pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 52:

    { if ( !pParser->AddItem ( "groupby()", &yyvsp[-2], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 53:

    { if ( !pParser->AddDistinct ( &yyvsp[-1], &yyvsp[-4], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 55:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 62:

    {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		;}
    break;

  case 63:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 64:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 65:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 66:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 67:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 68:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-3].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 69:

    {
			if ( !pParser->AddIntRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 70:

    {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 71:

    {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, false ) )
				YYERROR;
		;}
    break;

  case 72:

    {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 73:

    {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 74:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 75:

    {
			yyerror ( pParser, "NEQ filter on floats is not (yet?) supported" );
			YYERROR;
		;}
    break;

  case 76:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 77:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 78:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_iValue, true ) )
				YYERROR;
		;}
    break;

  case 79:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX, false ) )
				YYERROR;
		;}
    break;

  case 80:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue, false ) )
				YYERROR;
		;}
    break;

  case 81:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX, true ) )
				YYERROR;
		;}
    break;

  case 82:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 83:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 84:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 87:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 88:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 89:

    {
			yyval.m_sValue = "@groupby";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 90:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 91:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 92:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 93:

    {
			yyval.m_iInstype = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 94:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 95:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 96:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 97:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 100:

    {
			pParser->AddGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 101:

    {
			pParser->AddGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 104:

    {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 107:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 108:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 110:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 112:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 113:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 116:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 117:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
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
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 125:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 126:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-2], yyvsp[-1].m_sValue ) )
				YYERROR;
		;}
    break;

  case 127:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 128:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 129:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 130:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 132:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 133:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 137:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 138:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
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

  case 157:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 159:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 160:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 161:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 162:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 163:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 164:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 165:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 170:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 171:

    { yyval = yyvsp[-4]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 174:

    { pParser->m_pStmt->m_sStringParam = yyvsp[0].m_sValue; ;}
    break;

  case 175:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 177:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 178:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; ;}
    break;

  case 179:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; ;}
    break;

  case 180:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; ;}
    break;

  case 181:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 182:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 183:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 191:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 192:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 193:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 194:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 195:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 196:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 197:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 200:

    { yyval.m_iValue = 1; ;}
    break;

  case 201:

    { yyval.m_iValue = 0; ;}
    break;

  case 202:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 203:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 204:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 205:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 208:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 209:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 210:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 213:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 214:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 217:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 218:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 219:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 220:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 221:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 222:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 223:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 224:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 225:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-4].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-4].m_iEnd;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 226:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-6].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-6].m_iEnd;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 227:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 228:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 229:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 231:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 232:

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

  case 233:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 236:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 238:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 242:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 243:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 246:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 247:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-4] ) )
				YYERROR;
		;}
    break;

  case 250:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 251:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 252:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 253:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 254:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 261:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		;}
    break;

  case 262:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		;}
    break;

  case 263:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 271:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 272:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 273:

    { yyval.m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 274:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 275:

    { yyval.m_iValue = SPH_ATTR_STRINGPTR; ;}
    break;

  case 276:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 277:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sStringParam = yyvsp[0].m_sValue;
		;}
    break;

  case 278:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 279:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RAMCHUNK;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 280:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->m_pStmt->m_tQuery.m_sQuery = yyvsp[-1].m_sValue;
		;}
    break;

  case 282:

    {
			yyval.m_sValue.SetSprintf ( "%s.%s", yyvsp[-2].m_sValue.cstr(), yyvsp[0].m_sValue.cstr() );
		;}
    break;

  case 283:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 284:

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

