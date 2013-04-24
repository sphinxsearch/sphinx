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
     TOK_RAMCHUNK = 321,
     TOK_READ = 322,
     TOK_REPEATABLE = 323,
     TOK_REPLACE = 324,
     TOK_RETURNS = 325,
     TOK_ROLLBACK = 326,
     TOK_RTINDEX = 327,
     TOK_SELECT = 328,
     TOK_SERIALIZABLE = 329,
     TOK_SET = 330,
     TOK_SESSION = 331,
     TOK_SHOW = 332,
     TOK_SONAME = 333,
     TOK_START = 334,
     TOK_STATUS = 335,
     TOK_STRING = 336,
     TOK_SUM = 337,
     TOK_TABLES = 338,
     TOK_TO = 339,
     TOK_TRANSACTION = 340,
     TOK_TRUE = 341,
     TOK_TRUNCATE = 342,
     TOK_UNCOMMITTED = 343,
     TOK_UPDATE = 344,
     TOK_VALUES = 345,
     TOK_VARIABLES = 346,
     TOK_WARNINGS = 347,
     TOK_WEIGHT = 348,
     TOK_WHERE = 349,
     TOK_WITHIN = 350,
     TOK_OR = 351,
     TOK_AND = 352,
     TOK_NE = 353,
     TOK_GTE = 354,
     TOK_LTE = 355,
     TOK_NOT = 356,
     TOK_NEG = 357
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
#define TOK_RAMCHUNK 321
#define TOK_READ 322
#define TOK_REPEATABLE 323
#define TOK_REPLACE 324
#define TOK_RETURNS 325
#define TOK_ROLLBACK 326
#define TOK_RTINDEX 327
#define TOK_SELECT 328
#define TOK_SERIALIZABLE 329
#define TOK_SET 330
#define TOK_SESSION 331
#define TOK_SHOW 332
#define TOK_SONAME 333
#define TOK_START 334
#define TOK_STATUS 335
#define TOK_STRING 336
#define TOK_SUM 337
#define TOK_TABLES 338
#define TOK_TO 339
#define TOK_TRANSACTION 340
#define TOK_TRUE 341
#define TOK_TRUNCATE 342
#define TOK_UNCOMMITTED 343
#define TOK_UPDATE 344
#define TOK_VALUES 345
#define TOK_VARIABLES 346
#define TOK_WARNINGS 347
#define TOK_WEIGHT 348
#define TOK_WHERE 349
#define TOK_WITHIN 350
#define TOK_OR 351
#define TOK_AND 352
#define TOK_NE 353
#define TOK_GTE 354
#define TOK_LTE 355
#define TOK_NOT 356
#define TOK_NEG 357




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
#define YYFINAL  110
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   973

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  120
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  100
/* YYNRULES -- Number of rules. */
#define YYNRULES  282
/* YYNRULES -- Number of states. */
#define YYNSTATES  536

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   357

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   110,    99,     2,
     114,   115,   108,   106,   116,   107,   119,   109,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   113,
     102,   100,   103,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   117,    98,   118,     2,     2,     2,     2,
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
      95,    96,    97,   101,   104,   105,   111,   112
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
     530,   535,   539,   546,   553,   557,   559,   563,   565,   567,
     571,   577,   580,   581,   584,   586,   589,   592,   596,   598,
     600,   605,   610,   614,   616,   618,   620,   622,   624,   626,
     630,   635,   640,   645,   649,   654,   662,   668,   670,   672,
     674,   676,   678,   680,   682,   684,   686,   689,   696,   698,
     700,   701,   705,   707,   711,   713,   717,   721,   723,   727,
     729,   731,   733,   737,   740,   748,   758,   765,   767,   771,
     773,   777,   779,   783,   784,   787,   789,   793,   797,   798,
     800,   802,   804,   808,   810,   812,   816,   823,   825,   829,
     833,   837,   843,   848,   853,   854,   856,   859,   861,   865,
     869,   872,   876,   883,   884,   886,   888,   891,   894,   897,
     899,   907,   909,   911,   913,   917,   924,   928,   932,   936,
     938,   942,   946
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     121,     0,    -1,   122,    -1,   123,    -1,   123,   113,    -1,
     176,    -1,   184,    -1,   170,    -1,   171,    -1,   174,    -1,
     185,    -1,   194,    -1,   196,    -1,   197,    -1,   200,    -1,
     205,    -1,   206,    -1,   210,    -1,   212,    -1,   213,    -1,
     214,    -1,   215,    -1,   207,    -1,   216,    -1,   218,    -1,
     219,    -1,   124,    -1,   123,   113,   124,    -1,   125,    -1,
     165,    -1,   129,    -1,    73,   130,    37,   114,   126,   129,
     115,   127,   128,    -1,    -1,    61,    20,   150,    -1,    -1,
      52,     5,    -1,    52,     5,   116,     5,    -1,    73,   130,
      37,   134,   135,   144,   146,   148,   152,   154,    -1,   131,
      -1,   130,   116,   131,    -1,   108,    -1,   133,   132,    -1,
      -1,     3,    -1,    14,     3,    -1,   160,    -1,    17,   114,
     160,   115,    -1,    54,   114,   160,   115,    -1,    56,   114,
     160,   115,    -1,    82,   114,   160,   115,    -1,    42,   114,
     160,   115,    -1,    26,   114,   108,   115,    -1,    41,   114,
     115,    -1,    26,   114,    31,     3,   115,    -1,     3,    -1,
     134,   116,     3,    -1,    -1,   136,    -1,    94,   137,    -1,
     138,    -1,   137,    97,   137,    -1,   114,   137,   115,    -1,
      53,   114,     8,   115,    -1,   140,   100,   141,    -1,   140,
     101,   141,    -1,   140,    44,   114,   143,   115,    -1,   140,
     111,    44,   114,   143,   115,    -1,   140,    44,     9,    -1,
     140,   111,    44,     9,    -1,   140,    19,   141,    97,   141,
      -1,   140,   103,   141,    -1,   140,   102,   141,    -1,   140,
     104,   141,    -1,   140,   105,   141,    -1,   140,   100,   142,
      -1,   139,    -1,   140,    19,   142,    97,   142,    -1,   140,
      19,   141,    97,   142,    -1,   140,    19,   142,    97,   141,
      -1,   140,   103,   142,    -1,   140,   102,   142,    -1,   140,
     104,   142,    -1,   140,   105,   142,    -1,   140,   100,     8,
      -1,   140,   101,     8,    -1,   140,   101,   142,    -1,     3,
      -1,     4,    -1,    26,   114,   108,   115,    -1,    41,   114,
     115,    -1,    93,   114,   115,    -1,    43,    -1,     5,    -1,
     107,     5,    -1,     6,    -1,   107,     6,    -1,   141,    -1,
     143,   116,   141,    -1,    -1,    40,    20,   145,    -1,   140,
      -1,   145,   116,   140,    -1,    -1,   147,    -1,    95,    40,
      61,    20,   150,    -1,    -1,   149,    -1,    61,    20,   150,
      -1,    61,    20,    65,   114,   115,    -1,   151,    -1,   150,
     116,   151,    -1,   140,    -1,   140,    15,    -1,   140,    29,
      -1,    -1,   153,    -1,    52,     5,    -1,    52,     5,   116,
       5,    -1,    -1,   155,    -1,    60,   156,    -1,   157,    -1,
     156,   116,   157,    -1,     3,   100,     3,    -1,     3,   100,
       5,    -1,     3,   100,   114,   158,   115,    -1,     3,   100,
       3,   114,     8,   115,    -1,     3,   100,     8,    -1,   159,
      -1,   158,   116,   159,    -1,     3,   100,   141,    -1,     3,
      -1,     4,    -1,    43,    -1,     5,    -1,     6,    -1,     9,
      -1,   107,   160,    -1,   111,   160,    -1,   160,   106,   160,
      -1,   160,   107,   160,    -1,   160,   108,   160,    -1,   160,
     109,   160,    -1,   160,   102,   160,    -1,   160,   103,   160,
      -1,   160,    99,   160,    -1,   160,    98,   160,    -1,   160,
     110,   160,    -1,   160,    32,   160,    -1,   160,    57,   160,
      -1,   160,   105,   160,    -1,   160,   104,   160,    -1,   160,
     100,   160,    -1,   160,   101,   160,    -1,   160,    97,   160,
      -1,   160,    96,   160,    -1,   114,   160,   115,    -1,   117,
     164,   118,    -1,   161,    -1,     3,   114,   162,   115,    -1,
      44,   114,   162,   115,    -1,     3,   114,   115,    -1,    56,
     114,   160,   116,   160,   115,    -1,    54,   114,   160,   116,
     160,   115,    -1,    93,   114,   115,    -1,   163,    -1,   162,
     116,   163,    -1,   160,    -1,     8,    -1,     3,   100,   141,
      -1,   164,   116,     3,   100,   141,    -1,    77,   167,    -1,
      -1,    51,     8,    -1,    92,    -1,    80,   166,    -1,    55,
     166,    -1,    13,    80,   166,    -1,    64,    -1,    63,    -1,
      13,     8,    80,   166,    -1,    13,     3,    80,   166,    -1,
      45,     3,    80,    -1,     3,    -1,    59,    -1,     8,    -1,
       5,    -1,     6,    -1,   168,    -1,   169,   107,   168,    -1,
      75,     3,   100,   173,    -1,    75,     3,   100,   172,    -1,
      75,     3,   100,    59,    -1,    75,    58,   169,    -1,    75,
      10,   100,   169,    -1,    75,    39,     9,   100,   114,   143,
     115,    -1,    75,    39,     3,   100,   172,    -1,     3,    -1,
       8,    -1,    86,    -1,    34,    -1,   141,    -1,    24,    -1,
      71,    -1,   175,    -1,    18,    -1,    79,    85,    -1,   177,
      48,     3,   178,    90,   180,    -1,    46,    -1,    69,    -1,
      -1,   114,   179,   115,    -1,   140,    -1,   179,   116,   140,
      -1,   181,    -1,   180,   116,   181,    -1,   114,   182,   115,
      -1,   183,    -1,   182,   116,   183,    -1,   141,    -1,   142,
      -1,     8,    -1,   114,   143,   115,    -1,   114,   115,    -1,
      28,    37,   134,    94,    43,   100,   141,    -1,    28,    37,
     134,    94,    43,    44,   114,   143,   115,    -1,    21,     3,
     114,   186,   189,   115,    -1,   187,    -1,   186,   116,   187,
      -1,   183,    -1,   114,   188,   115,    -1,     8,    -1,   188,
     116,     8,    -1,    -1,   116,   190,    -1,   191,    -1,   190,
     116,   191,    -1,   183,   192,   193,    -1,    -1,    14,    -1,
       3,    -1,    52,    -1,   195,     3,   166,    -1,    30,    -1,
      29,    -1,    77,    83,   166,    -1,    89,   134,    75,   198,
     136,   154,    -1,   199,    -1,   198,   116,   199,    -1,     3,
     100,   141,    -1,     3,   100,   142,    -1,     3,   100,   114,
     143,   115,    -1,     3,   100,   114,   115,    -1,    77,   208,
      91,   201,    -1,    -1,   202,    -1,    94,   203,    -1,   204,
      -1,   203,    96,   204,    -1,     3,   100,     8,    -1,    77,
      23,    -1,    77,    22,    75,    -1,    75,   208,    85,    49,
      50,   209,    -1,    -1,    39,    -1,    76,    -1,    67,    88,
      -1,    67,    25,    -1,    68,    67,    -1,    74,    -1,    27,
      38,     3,    70,   211,    78,     8,    -1,    47,    -1,    35,
      -1,    81,    -1,    33,    38,     3,    -1,    16,    45,     3,
      84,    72,     3,    -1,    36,    72,     3,    -1,    36,    66,
       3,    -1,    73,   217,   152,    -1,    10,    -1,    10,   119,
       3,    -1,    87,    72,     3,    -1,    62,    45,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   131,   131,   132,   133,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   163,   164,   168,   169,
     173,   174,   182,   195,   203,   205,   210,   219,   235,   236,
     240,   241,   244,   246,   247,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   263,   264,   267,   269,   273,   277,
     278,   279,   283,   288,   295,   303,   311,   320,   325,   330,
     335,   340,   345,   350,   355,   360,   365,   370,   375,   380,
     385,   390,   395,   400,   405,   413,   417,   418,   423,   429,
     435,   441,   450,   451,   462,   463,   467,   473,   479,   481,
     485,   489,   495,   497,   501,   512,   514,   518,   522,   529,
     530,   534,   535,   536,   539,   541,   545,   550,   557,   559,
     563,   567,   568,   572,   577,   582,   588,   593,   601,   606,
     613,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,   649,   650,   654,
     655,   656,   657,   658,   659,   663,   664,   668,   669,   673,
     674,   680,   683,   685,   689,   690,   691,   692,   693,   694,
     695,   700,   705,   715,   716,   717,   718,   719,   723,   724,
     728,   733,   738,   743,   744,   748,   753,   761,   762,   766,
     767,   768,   782,   783,   784,   788,   789,   795,   803,   804,
     807,   809,   813,   814,   818,   819,   823,   827,   828,   832,
     833,   834,   835,   836,   842,   850,   864,   872,   876,   883,
     884,   891,   901,   907,   909,   913,   918,   922,   929,   931,
     935,   936,   942,   950,   951,   957,   963,   971,   972,   976,
     980,   984,   988,   998,  1004,  1005,  1009,  1013,  1014,  1018,
    1022,  1029,  1036,  1042,  1043,  1044,  1048,  1049,  1050,  1051,
    1057,  1068,  1069,  1070,  1074,  1085,  1097,  1106,  1117,  1125,
    1126,  1135,  1146
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
  "TOK_OPTIMIZE", "TOK_PLAN", "TOK_PROFILE", "TOK_RAND", "TOK_RAMCHUNK", 
  "TOK_READ", "TOK_REPEATABLE", "TOK_REPLACE", "TOK_RETURNS", 
  "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT", "TOK_SERIALIZABLE", 
  "TOK_SET", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME", "TOK_START", 
  "TOK_STATUS", "TOK_STRING", "TOK_SUM", "TOK_TABLES", "TOK_TO", 
  "TOK_TRANSACTION", "TOK_TRUE", "TOK_TRUNCATE", "TOK_UNCOMMITTED", 
  "TOK_UPDATE", "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", 
  "TOK_WEIGHT", "TOK_WHERE", "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", 
  "'&'", "'='", "TOK_NE", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "TOK_NOT", "TOK_NEG", "';'", "'('", "')'", 
  "','", "'{'", "'}'", "'.'", "$accept", "request", "statement", 
  "multi_stmt_list", "multi_stmt", "select", "subselect_start", 
  "opt_outer_order", "opt_outer_limit", "select_from", 
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
     345,   346,   347,   348,   349,   350,   351,   352,   124,    38,
      61,   353,    60,    62,   354,   355,    43,    45,    42,    47,
      37,   356,   357,    59,    40,    41,    44,   123,   125,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   120,   121,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   127,   128,   128,   128,   129,   130,   130,
     131,   131,   132,   132,   132,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   139,   140,   140,   140,   140,
     140,   140,   141,   141,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   156,   156,   157,   157,   157,   157,   157,   158,   158,
     159,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   161,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   166,   166,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   168,   168,   168,   168,   168,   169,   169,
     170,   170,   170,   170,   170,   171,   171,   172,   172,   173,
     173,   173,   174,   174,   174,   175,   175,   176,   177,   177,
     178,   178,   179,   179,   180,   180,   181,   182,   182,   183,
     183,   183,   183,   183,   184,   184,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   192,   192,
     193,   193,   194,   195,   195,   196,   197,   198,   198,   199,
     199,   199,   199,   200,   201,   201,   202,   203,   203,   204,
     205,   206,   207,   208,   208,   208,   209,   209,   209,   209,
     210,   211,   211,   211,   212,   213,   214,   215,   216,   217,
     217,   218,   219
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
       4,     3,     6,     6,     3,     1,     3,     1,     1,     3,
       5,     2,     0,     2,     1,     2,     2,     3,     1,     1,
       4,     4,     3,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     4,     3,     4,     7,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     6,     1,     1,
       0,     3,     1,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     3,     2,     7,     9,     6,     1,     3,     1,
       3,     1,     3,     0,     2,     1,     3,     3,     0,     1,
       1,     1,     3,     1,     1,     3,     6,     1,     3,     3,
       3,     5,     4,     4,     0,     1,     2,     1,     3,     3,
       2,     3,     6,     0,     1,     1,     2,     2,     2,     1,
       7,     1,     1,     1,     3,     6,     3,     3,     3,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     0,   205,     0,   202,     0,     0,   244,   243,     0,
       0,   208,     0,   209,   203,     0,   263,   263,     0,     0,
       0,     0,     2,     3,    26,    28,    30,    29,     7,     8,
       9,   204,     5,     0,     6,    10,    11,     0,    12,    13,
      14,    15,    16,    22,    17,    18,    19,    20,    21,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     131,   132,   134,   135,   136,   279,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,    38,    42,    45,   158,   114,     0,     0,   264,
       0,   265,     0,     0,     0,   260,   264,     0,   172,   179,
     178,   172,   172,   174,   171,     0,   206,     0,    54,     0,
       1,     4,     0,   172,     0,     0,     0,     0,   274,   277,
     276,   282,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,   138,     0,     0,     0,
       0,     0,    43,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   278,   115,     0,     0,     0,     0,   183,
     186,   187,   185,   184,   188,   193,     0,     0,     0,   172,
     261,     0,     0,   176,   175,   245,   254,   281,     0,     0,
       0,     0,    27,   210,   242,     0,    92,    94,   221,     0,
       0,   219,   220,   229,   233,   227,     0,     0,   168,   161,
     167,     0,   165,   280,     0,     0,     0,    52,     0,     0,
       0,     0,     0,   164,     0,     0,   156,     0,     0,   157,
      32,    56,    39,    44,   148,   149,   155,   154,   146,   145,
     152,   153,   143,   144,   151,   150,   139,   140,   141,   142,
     147,   116,   197,   198,   200,   192,   199,     0,   201,   191,
     190,   194,     0,     0,     0,     0,   172,   172,   177,   182,
     173,     0,   253,   255,     0,     0,   247,    55,     0,     0,
       0,    93,    95,   231,   223,    96,     0,     0,     0,     0,
     272,   271,   273,     0,     0,   159,     0,    46,     0,    51,
      50,   160,    47,     0,    48,     0,    49,     0,     0,   169,
       0,     0,     0,    98,    57,     0,   196,     0,   189,     0,
     181,   180,     0,   256,   257,     0,     0,   118,    86,    87,
       0,     0,    91,     0,   212,     0,     0,   275,   222,     0,
     230,     0,   229,   228,   234,   235,   226,     0,     0,     0,
     166,    53,     0,     0,     0,     0,     0,     0,     0,    58,
      59,    75,     0,     0,   102,   117,     0,     0,     0,   269,
     262,     0,     0,     0,   249,   250,   248,     0,   246,   119,
       0,     0,     0,   211,     0,     0,   207,   214,    97,   232,
     239,     0,     0,   270,     0,   224,   163,   162,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   103,   195,   267,   266,
     268,   259,   258,   252,     0,     0,   120,   121,     0,    89,
      90,   213,     0,     0,   217,     0,   240,   241,   237,   238,
     236,     0,     0,     0,    34,     0,    61,    60,     0,     0,
      67,     0,    83,    63,    74,    84,    64,    85,    71,    80,
      70,    79,    72,    81,    73,    82,     0,   100,    99,     0,
       0,   114,   106,   251,     0,     0,    88,   216,     0,   215,
     225,     0,     0,    31,    62,     0,     0,     0,    68,     0,
       0,     0,     0,   118,   123,   124,   127,     0,   122,   218,
     111,    33,   109,    35,    69,    77,    78,    76,    65,     0,
     101,     0,     0,   107,    37,     0,     0,     0,   128,   112,
     113,     0,     0,    66,   104,     0,     0,     0,   125,     0,
     110,    36,   108,   126,   130,   129
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,   311,   444,   483,    26,
      81,    82,   144,    83,   231,   313,   314,   359,   360,   361,
     500,   285,   202,   286,   364,   468,   415,   416,   471,   472,
     501,   502,   163,   164,   378,   379,   426,   427,   517,   518,
      84,    85,   211,   212,   139,    27,   183,   104,   174,   175,
      28,    29,   259,   260,    30,    31,    32,    33,   279,   335,
     386,   387,   433,   203,    34,    35,   204,   205,   287,   289,
     344,   345,   391,   438,    36,    37,    38,    39,   275,   276,
      40,   272,   273,   323,   324,    41,    42,    43,    92,   370,
      44,   293,    45,    46,    47,    48,    49,    86,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -476
static const short yypact[] =
{
     884,   -23,  -476,    57,  -476,   174,   177,  -476,  -476,   184,
     -15,  -476,   182,  -476,  -476,   118,   270,   674,   151,   169,
     235,   244,  -476,   158,  -476,  -476,  -476,  -476,  -476,  -476,
    -476,  -476,  -476,   240,  -476,  -476,  -476,   280,  -476,  -476,
    -476,  -476,  -476,  -476,  -476,  -476,  -476,  -476,  -476,  -476,
    -476,  -476,   287,   186,   298,   235,   303,   311,   317,   334,
     231,  -476,  -476,  -476,  -476,   230,   238,   242,   245,   250,
    -476,   254,   255,   259,   261,   262,   335,  -476,   335,   335,
     355,   -19,  -476,   217,   682,  -476,   325,   293,   294,   172,
     181,  -476,   310,    34,   321,  -476,  -476,   394,   347,  -476,
    -476,   347,   347,  -476,  -476,   308,  -476,   397,  -476,    81,
    -476,    75,   398,   347,   319,    27,   332,   -73,  -476,  -476,
    -476,  -476,   299,   401,   335,     9,   290,   335,   318,   335,
     335,   335,   292,   295,   305,  -476,  -476,   466,   320,   -93,
       2,   243,  -476,   405,  -476,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   416,  -476,  -476,    99,   181,   322,   323,  -476,
    -476,  -476,  -476,  -476,  -476,   324,   368,   344,   346,   347,
    -476,   350,   419,  -476,  -476,  -476,   339,  -476,   431,   433,
     243,   153,  -476,   326,  -476,   365,  -476,  -476,  -476,   103,
      22,  -476,  -476,  -476,   329,  -476,   122,   395,  -476,  -476,
     682,   135,  -476,  -476,   494,   436,   333,  -476,   520,   143,
     358,   386,   548,  -476,   335,   335,  -476,    29,   438,  -476,
    -476,    74,  -476,  -476,  -476,  -476,   696,   710,   775,   789,
     278,   278,   147,   147,   147,   147,    86,    86,  -476,  -476,
    -476,   331,  -476,  -476,  -476,  -476,  -476,   445,  -476,  -476,
    -476,   324,   210,   337,   181,   403,   347,   347,  -476,  -476,
    -476,   467,  -476,  -476,   371,   107,  -476,  -476,   272,   385,
     473,  -476,  -476,  -476,  -476,  -476,   163,   166,    27,   362,
    -476,  -476,  -476,   400,    15,  -476,   318,  -476,   364,  -476,
    -476,  -476,  -476,   335,  -476,   335,  -476,   412,   440,  -476,
     380,   408,     5,   459,  -476,   495,  -476,    29,  -476,   200,
    -476,  -476,   404,   407,  -476,    33,   431,   446,  -476,  -476,
     391,   393,  -476,   410,  -476,   196,   411,  -476,  -476,    29,
    -476,   519,   185,  -476,   413,  -476,  -476,   522,   417,    29,
    -476,  -476,   574,   602,    29,   243,   418,   420,     5,   435,
    -476,  -476,   161,   515,   458,  -476,   201,    38,   487,  -476,
    -476,   547,   467,    23,  -476,  -476,  -476,   554,  -476,  -476,
     450,   444,   463,  -476,   272,    95,   468,  -476,  -476,  -476,
    -476,    17,    95,  -476,    29,  -476,  -476,  -476,  -476,   -11,
     499,   553,    67,     5,    39,    -3,    56,    60,    39,    39,
      39,    39,   535,   272,   542,   524,  -476,  -476,  -476,  -476,
    -476,  -476,  -476,  -476,   203,   483,   470,  -476,   472,  -476,
    -476,  -476,    24,   214,  -476,   411,  -476,  -476,  -476,   575,
    -476,   216,   235,   568,   555,   493,  -476,  -476,   513,   514,
    -476,    29,  -476,  -476,  -476,  -476,  -476,  -476,  -476,  -476,
    -476,  -476,  -476,  -476,  -476,  -476,     6,  -476,   496,   552,
     594,   325,  -476,  -476,    11,   554,  -476,  -476,    95,  -476,
    -476,   272,   610,  -476,  -476,    39,    39,   218,  -476,    29,
     272,   612,   150,   446,   523,  -476,  -476,   630,  -476,  -476,
     136,   525,  -476,   526,  -476,  -476,  -476,  -476,  -476,   232,
    -476,   272,   529,   525,  -476,   628,   538,   251,  -476,  -476,
    -476,   272,   634,  -476,   525,   545,   546,    29,  -476,   630,
    -476,  -476,  -476,  -476,  -476,  -476
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -476,  -476,  -476,  -476,   551,  -476,  -476,  -476,  -476,   353,
     285,   527,  -476,  -476,   187,  -476,   390,  -248,  -476,  -476,
    -271,  -115,  -315,  -306,  -476,  -476,  -476,  -476,  -476,  -476,
    -475,   145,   198,  -476,   192,  -476,  -476,   211,  -476,   138,
     -75,  -476,   560,   396,  -476,  -476,   -89,  -476,   426,   528,
    -476,  -476,   429,  -476,  -476,  -476,  -476,  -476,  -476,  -476,
    -476,   258,  -476,  -286,  -476,  -476,  -476,   427,  -476,  -476,
    -476,   328,  -476,  -476,  -476,  -476,  -476,  -476,  -476,   369,
    -476,  -476,  -476,  -476,   349,  -476,  -476,  -476,   699,  -476,
    -476,  -476,  -476,  -476,  -476,  -476,  -476,  -476,  -476,  -476
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -239
static const short yytable[] =
{
     201,   135,   342,   136,   137,   108,   450,   334,   328,   329,
     375,   366,   184,   185,   494,   488,   495,   513,   140,   496,
     436,   207,    52,   228,   194,   229,   442,   196,   196,   196,
     283,   330,   196,   197,   196,   198,   524,   177,   196,   197,
     215,   362,   178,   189,   196,   197,   331,   210,   332,   214,
     258,    57,   218,   210,   220,   221,   222,    58,   357,   348,
      53,   196,   197,   418,   452,   196,   197,   424,   455,   437,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   362,   441,   449,
     268,   454,   457,   459,   461,   463,   465,   141,   333,   434,
     196,   197,   252,   198,   196,   141,   439,   253,   281,   282,
     402,   451,   309,   431,   179,   349,   230,   216,   145,   358,
     489,    60,    61,    62,    63,   497,   419,    64,    65,   257,
     257,   257,   362,   254,   199,    66,   257,   284,   423,   284,
     199,   200,   467,   146,    67,   487,   199,   373,   190,   307,
     308,   519,   191,   328,   329,   447,   188,   290,   255,    68,
      69,    70,    71,   199,   403,   520,    93,   199,   312,   291,
     505,   507,    72,   201,    73,   167,   330,   320,   321,   145,
     404,   168,   446,   509,   169,   256,   170,   171,  -238,   172,
     189,   331,   499,   332,   159,   160,   161,   189,    97,   390,
      74,   312,   199,   292,   146,   405,   257,   109,    98,   432,
     374,    75,    54,   252,    55,   512,    99,   100,   253,   510,
     142,   210,    56,   326,   388,    76,    77,    59,   352,    78,
     353,   143,    79,   101,   395,    80,   106,  -238,   108,   398,
     173,   107,   117,   333,   110,   103,    60,    61,    62,    63,
     295,   296,    64,   157,   158,   159,   160,   161,   301,   296,
      66,   406,   407,   408,   409,   410,   411,   367,   368,    67,
     201,   111,   412,    87,   369,   328,   329,   201,   338,   339,
      88,   340,   341,   113,    68,    69,    70,    71,   112,   448,
     114,   453,   456,   458,   460,   462,   464,    72,   330,    73,
     115,   116,    60,    61,    62,    63,   118,   208,    64,    89,
     145,   383,   384,   331,   119,   332,   417,   339,   473,   339,
     120,    60,    61,    62,    63,    74,   208,    64,    90,   477,
     478,   480,   339,   508,   339,   146,    75,   121,    60,    61,
      62,    63,    70,    71,    64,   122,    91,   523,   339,   123,
      76,    77,   124,   133,    78,   134,   125,    79,   138,   126,
      80,    70,    71,   201,   127,   333,   528,   529,   128,   129,
     504,   506,   133,   130,   134,   131,   132,   162,    70,    71,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   133,
     145,   134,    75,   165,   166,   176,   180,   181,   182,   186,
     187,   193,   206,   195,   213,   217,    76,   223,   233,   224,
      78,    75,   534,    79,   209,   146,    80,   265,   145,   225,
     227,   251,   262,   263,   266,    76,   267,   270,    75,    78,
     269,   264,    79,   271,   274,    80,   277,   280,   294,   298,
     278,   310,    76,   146,   145,   288,    78,   315,   299,    79,
     281,   317,    80,   319,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   146,
     322,   325,   145,   302,   303,   336,   337,   346,   347,   351,
     354,   355,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   146,   145,   363,
     365,   304,   305,   372,   371,   380,   377,   381,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   146,   382,   385,   145,   389,   303,   392,
     393,   394,   403,   400,   401,   413,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   146,   145,   414,   420,   421,   305,   425,   428,   429,
     443,   445,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   146,   430,   466,
     145,   226,   469,   474,   435,   470,   475,   476,   481,   390,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   146,   145,   482,   484,   297,
     485,   486,   490,   491,   492,   503,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   146,   511,   516,   145,   300,   526,   515,   527,   531,
     399,   521,   522,   525,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   146,
     532,   533,   192,   306,   356,   327,   530,   535,   232,   493,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   514,   498,    93,   219,   396,
     318,   316,   350,   479,   261,   376,    94,    95,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,    96,   145,   343,   105,   397,     0,    97,
     440,   422,     0,     0,     0,     0,     0,     0,   145,    98,
       0,     0,     0,     0,     0,     0,     0,    99,   100,   146,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
      91,     0,     0,   146,   101,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,   103,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   145,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   145,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,     0,     0,     0,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
       1,     0,     2,     0,     0,     3,     0,     0,     4,     0,
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
     115,    76,   288,    78,    79,     3,     9,   278,     3,     4,
     325,   317,   101,   102,     3,     9,     5,   492,    37,     8,
       3,    94,    45,   116,   113,   118,    37,     5,     5,     5,
       8,    26,     5,     6,     5,     8,   511,     3,     5,     6,
      31,   312,     8,   116,     5,     6,    41,   122,    43,   124,
     165,    66,   127,   128,   129,   130,   131,    72,    53,    44,
       3,     5,     6,    25,     8,     5,     6,   373,     8,    52,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   358,   394,   404,
     179,   406,   407,   408,   409,   410,   411,   116,    93,   385,
       5,     6,     3,     8,     5,   116,   392,     8,     5,     6,
     358,   114,   227,   384,    80,   100,   114,   108,    32,   114,
     114,     3,     4,     5,     6,   114,    88,     9,    10,   107,
     107,   107,   403,    34,   107,    17,   107,   115,   115,   115,
     107,   114,   413,    57,    26,   451,   107,   114,    73,   224,
     225,    15,    77,     3,     4,   403,    75,    35,    59,    41,
      42,    43,    44,   107,    97,    29,    13,   107,    94,    47,
     485,   486,    54,   288,    56,     3,    26,   266,   267,    32,
      19,     9,   115,   489,     3,    86,     5,     6,     3,     8,
     116,    41,   478,    43,   108,   109,   110,   116,    45,    14,
      82,    94,   107,    81,    57,    44,   107,    20,    55,   114,
     325,    93,    38,     3,    37,    65,    63,    64,     8,   490,
       3,   296,    38,   116,   339,   107,   108,    45,   303,   111,
     305,    14,   114,    80,   349,   117,    85,    52,     3,   354,
      59,    72,    55,    93,     0,    92,     3,     4,     5,     6,
     115,   116,     9,   106,   107,   108,   109,   110,   115,   116,
      17,   100,   101,   102,   103,   104,   105,    67,    68,    26,
     385,   113,   111,     3,    74,     3,     4,   392,   115,   116,
      10,   115,   116,     3,    41,    42,    43,    44,    48,   404,
       3,   406,   407,   408,   409,   410,   411,    54,    26,    56,
     114,     3,     3,     4,     5,     6,     3,     8,     9,    39,
      32,   115,   116,    41,     3,    43,   115,   116,   115,   116,
       3,     3,     4,     5,     6,    82,     8,     9,    58,   115,
     116,   115,   116,   115,   116,    57,    93,     3,     3,     4,
       5,     6,    43,    44,     9,   114,    76,   115,   116,   119,
     107,   108,   114,    54,   111,    56,   114,   114,     3,   114,
     117,    43,    44,   478,   114,    93,   115,   116,   114,   114,
     485,   486,    54,   114,    56,   114,   114,    52,    43,    44,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    54,
      32,    56,    93,   100,   100,    85,    75,     3,    51,    91,
       3,     3,    70,    84,     3,   115,   107,   115,     3,   114,
     111,    93,   527,   114,   115,    57,   117,    49,    32,   114,
     100,     5,   100,   100,    80,   107,    80,     8,    93,   111,
      80,   107,   114,    94,     3,   117,     3,    72,    43,     3,
     114,     3,   107,    57,    32,   116,   111,   116,   115,   114,
       5,   114,   117,    50,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    57,
       3,   100,    32,   115,   116,    90,     3,   115,    78,   115,
     100,    73,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    57,    32,    40,
       5,   115,   116,    96,   100,   114,    60,   114,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    57,   114,   114,    32,     8,   116,   116,
       8,   114,    97,   115,   114,    20,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    57,    32,    95,    67,     8,   116,     3,   108,   115,
      61,     8,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    57,   115,    44,
      32,   115,    40,   100,   116,    61,   116,   115,    20,    14,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    57,    32,    52,   115,   115,
      97,    97,   116,    61,    20,     5,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    57,    20,     3,    32,   115,     8,   114,   100,     5,
     355,   116,   116,   114,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    57,
     115,   115,   111,   115,   311,   275,   521,   529,   141,   471,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   493,   475,    13,   128,   115,
     264,   262,   296,   435,   166,   326,    22,    23,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    39,    32,   288,    17,   115,    -1,    45,
     392,   372,    -1,    -1,    -1,    -1,    -1,    -1,    32,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    57,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    57,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    32,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    -1,    -1,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      16,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    71,    -1,    73,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    16,    18,    21,    24,    27,    28,    29,    30,    33,
      36,    46,    62,    69,    71,    73,    75,    77,    79,    87,
      89,   121,   122,   123,   124,   125,   129,   165,   170,   171,
     174,   175,   176,   177,   184,   185,   194,   195,   196,   197,
     200,   205,   206,   207,   210,   212,   213,   214,   215,   216,
     218,   219,    45,     3,    38,    37,    38,    66,    72,    45,
       3,     4,     5,     6,     9,    10,    17,    26,    41,    42,
      43,    44,    54,    56,    82,    93,   107,   108,   111,   114,
     117,   130,   131,   133,   160,   161,   217,     3,    10,    39,
      58,    76,   208,    13,    22,    23,    39,    45,    55,    63,
      64,    80,    83,    92,   167,   208,    85,    72,     3,   134,
       0,   113,    48,     3,     3,   114,     3,   134,     3,     3,
       3,     3,   114,   119,   114,   114,   114,   114,   114,   114,
     114,   114,   114,    54,    56,   160,   160,   160,     3,   164,
      37,   116,     3,    14,   132,    32,    57,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    52,   152,   153,   100,   100,     3,     9,     3,
       5,     6,     8,    59,   168,   169,    85,     3,     8,    80,
      75,     3,    51,   166,   166,   166,    91,     3,    75,   116,
      73,    77,   124,     3,   166,    84,     5,     6,     8,   107,
     114,   141,   142,   183,   186,   187,    70,    94,     8,   115,
     160,   162,   163,     3,   160,    31,   108,   115,   160,   162,
     160,   160,   160,   115,   114,   114,   115,   100,   116,   118,
     114,   134,   131,     3,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,     5,     3,     8,    34,    59,    86,   107,   141,   172,
     173,   169,   100,   100,   107,    49,    80,    80,   166,    80,
       8,    94,   201,   202,     3,   198,   199,     3,   114,   178,
      72,     5,     6,     8,   115,   141,   143,   188,   116,   189,
      35,    47,    81,   211,    43,   115,   116,   115,     3,   115,
     115,   115,   115,   116,   115,   116,   115,   160,   160,   141,
       3,   126,    94,   135,   136,   116,   172,   114,   168,    50,
     166,   166,     3,   203,   204,   100,   116,   136,     3,     4,
      26,    41,    43,    93,   140,   179,    90,     3,   115,   116,
     115,   116,   183,   187,   190,   191,   115,    78,    44,   100,
     163,   115,   160,   160,   100,    73,   129,    53,   114,   137,
     138,   139,   140,    40,   144,     5,   143,    67,    68,    74,
     209,   100,    96,   114,   141,   142,   199,    60,   154,   155,
     114,   114,   114,   115,   116,   114,   180,   181,   141,     8,
      14,   192,   116,     8,   114,   141,   115,   115,   141,   130,
     115,   114,   137,    97,    19,    44,   100,   101,   102,   103,
     104,   105,   111,    20,    95,   146,   147,   115,    25,    88,
      67,     8,   204,   115,   143,     3,   156,   157,   108,   115,
     115,   140,   114,   182,   183,   116,     3,    52,   193,   183,
     191,   143,    37,    61,   127,     8,   115,   137,   141,   142,
       9,   114,     8,   141,   142,     8,   141,   142,   141,   142,
     141,   142,   141,   142,   141,   142,    44,   140,   145,    40,
      61,   148,   149,   115,   100,   116,   115,   115,   116,   181,
     115,    20,    52,   128,   115,    97,    97,   143,     9,   114,
     116,    61,    20,   152,     3,     5,     8,   114,   157,   183,
     140,   150,   151,     5,   141,   142,   141,   142,   115,   143,
     140,    20,    65,   150,   154,   114,     3,   158,   159,    15,
      29,   116,   116,   115,   150,   114,     8,   100,   115,   116,
     151,     5,   115,   115,   141,   159
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

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 162:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 163:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 164:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 169:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 170:

    { yyval = yyvsp[-4]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 173:

    { pParser->m_pStmt->m_sStringParam = yyvsp[0].m_sValue; ;}
    break;

  case 174:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 175:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 177:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; ;}
    break;

  case 178:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; ;}
    break;

  case 179:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; ;}
    break;

  case 180:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 181:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 182:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 190:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 191:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 192:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 193:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 194:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 195:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 196:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 199:

    { yyval.m_iValue = 1; ;}
    break;

  case 200:

    { yyval.m_iValue = 0; ;}
    break;

  case 201:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 202:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 203:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 204:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 207:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 208:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 209:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 212:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 213:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 216:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 217:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 218:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 219:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 220:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 221:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 222:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 223:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 224:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-4].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-4].m_iEnd;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 225:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-6].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-6].m_iEnd;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 226:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 227:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 228:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 230:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 231:

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

  case 232:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 235:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 237:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 241:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 242:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 245:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 246:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-4] ) )
				YYERROR;
		;}
    break;

  case 249:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 250:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 251:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 252:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 253:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 260:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		;}
    break;

  case 261:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		;}
    break;

  case 262:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 270:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 271:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 272:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 273:

    { yyval.m_iValue = SPH_ATTR_STRINGPTR; ;}
    break;

  case 274:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 275:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sStringParam = yyvsp[0].m_sValue;
		;}
    break;

  case 276:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 277:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RAMCHUNK;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 278:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->m_pStmt->m_tQuery.m_sQuery = yyvsp[-1].m_sValue;
		;}
    break;

  case 280:

    {
			yyval.m_sValue.SetSprintf ( "%s.%s", yyvsp[-2].m_sValue.cstr(), yyvsp[0].m_sValue.cstr() );
		;}
    break;

  case 281:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 282:

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

