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
#define YYLAST   948

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  99
/* YYNRULES -- Number of rules. */
#define YYNRULES  278
/* YYNRULES -- Number of states. */
#define YYNSTATES  532

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
     223,   227,   231,   235,   239,   241,   247,   251,   255,   259,
     263,   267,   271,   275,   277,   279,   284,   288,   292,   294,
     296,   299,   301,   304,   306,   310,   311,   315,   317,   321,
     322,   324,   330,   331,   333,   337,   343,   345,   349,   351,
     354,   357,   358,   360,   363,   368,   369,   371,   374,   376,
     380,   384,   388,   394,   401,   405,   407,   411,   415,   417,
     419,   421,   423,   425,   427,   430,   433,   437,   441,   445,
     449,   453,   457,   461,   465,   469,   473,   477,   481,   485,
     489,   493,   497,   501,   505,   509,   511,   516,   521,   525,
     532,   539,   543,   545,   549,   551,   553,   557,   563,   566,
     567,   570,   572,   575,   578,   582,   584,   586,   591,   596,
     600,   602,   604,   606,   608,   610,   612,   616,   621,   626,
     631,   635,   640,   648,   654,   656,   658,   660,   662,   664,
     666,   668,   670,   672,   675,   682,   684,   686,   687,   691,
     693,   697,   699,   703,   707,   709,   713,   715,   717,   719,
     723,   726,   734,   744,   751,   753,   757,   759,   763,   765,
     769,   770,   773,   775,   779,   783,   784,   786,   788,   790,
     794,   796,   798,   802,   809,   811,   815,   819,   823,   829,
     834,   839,   840,   842,   845,   847,   851,   855,   858,   862,
     869,   870,   872,   874,   877,   880,   883,   885,   893,   895,
     897,   899,   903,   910,   914,   918,   920,   924,   928
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
      -1,   139,    19,   141,    96,   141,    -1,   139,   102,   141,
      -1,   139,   101,   141,    -1,   139,   103,   141,    -1,   139,
     104,   141,    -1,   139,    99,     8,    -1,   139,   100,     8,
      -1,   139,   100,   141,    -1,     3,    -1,     4,    -1,    26,
     113,   107,   114,    -1,    41,   113,   114,    -1,    92,   113,
     114,    -1,    43,    -1,     5,    -1,   106,     5,    -1,     6,
      -1,   106,     6,    -1,   140,    -1,   142,   115,   140,    -1,
      -1,    40,    20,   144,    -1,   139,    -1,   144,   115,   139,
      -1,    -1,   146,    -1,    94,    40,    61,    20,   149,    -1,
      -1,   148,    -1,    61,    20,   149,    -1,    61,    20,    65,
     113,   114,    -1,   150,    -1,   149,   115,   150,    -1,   139,
      -1,   139,    15,    -1,   139,    29,    -1,    -1,   152,    -1,
      52,     5,    -1,    52,     5,   115,     5,    -1,    -1,   154,
      -1,    60,   155,    -1,   156,    -1,   155,   115,   156,    -1,
       3,    99,     3,    -1,     3,    99,     5,    -1,     3,    99,
     113,   157,   114,    -1,     3,    99,     3,   113,     8,   114,
      -1,     3,    99,     8,    -1,   158,    -1,   157,   115,   158,
      -1,     3,    99,   140,    -1,     3,    -1,     4,    -1,    43,
      -1,     5,    -1,     6,    -1,     9,    -1,   106,   159,    -1,
     110,   159,    -1,   159,   105,   159,    -1,   159,   106,   159,
      -1,   159,   107,   159,    -1,   159,   108,   159,    -1,   159,
     101,   159,    -1,   159,   102,   159,    -1,   159,    98,   159,
      -1,   159,    97,   159,    -1,   159,   109,   159,    -1,   159,
      32,   159,    -1,   159,    57,   159,    -1,   159,   104,   159,
      -1,   159,   103,   159,    -1,   159,    99,   159,    -1,   159,
     100,   159,    -1,   159,    96,   159,    -1,   159,    95,   159,
      -1,   113,   159,   114,    -1,   116,   163,   117,    -1,   160,
      -1,     3,   113,   161,   114,    -1,    44,   113,   161,   114,
      -1,     3,   113,   114,    -1,    56,   113,   159,   115,   159,
     114,    -1,    54,   113,   159,   115,   159,   114,    -1,    92,
     113,   114,    -1,   162,    -1,   161,   115,   162,    -1,   159,
      -1,     8,    -1,     3,    99,   140,    -1,   163,   115,     3,
      99,   140,    -1,    76,   166,    -1,    -1,    51,     8,    -1,
      91,    -1,    79,   165,    -1,    55,   165,    -1,    13,    79,
     165,    -1,    64,    -1,    63,    -1,    13,     8,    79,   165,
      -1,    13,     3,    79,   165,    -1,    45,     3,    79,    -1,
       3,    -1,    59,    -1,     8,    -1,     5,    -1,     6,    -1,
     167,    -1,   168,   106,   167,    -1,    74,     3,    99,   172,
      -1,    74,     3,    99,   171,    -1,    74,     3,    99,    59,
      -1,    74,    58,   168,    -1,    74,    10,    99,   168,    -1,
      74,    39,     9,    99,   113,   142,   114,    -1,    74,    39,
       3,    99,   171,    -1,     3,    -1,     8,    -1,    85,    -1,
      34,    -1,   140,    -1,    24,    -1,    70,    -1,   174,    -1,
      18,    -1,    78,    84,    -1,   176,    48,     3,   177,    89,
     179,    -1,    46,    -1,    68,    -1,    -1,   113,   178,   114,
      -1,   139,    -1,   178,   115,   139,    -1,   180,    -1,   179,
     115,   180,    -1,   113,   181,   114,    -1,   182,    -1,   181,
     115,   182,    -1,   140,    -1,   141,    -1,     8,    -1,   113,
     142,   114,    -1,   113,   114,    -1,    28,    37,   133,    93,
      43,    99,   140,    -1,    28,    37,   133,    93,    43,    44,
     113,   142,   114,    -1,    21,     3,   113,   185,   188,   114,
      -1,   186,    -1,   185,   115,   186,    -1,   182,    -1,   113,
     187,   114,    -1,     8,    -1,   187,   115,     8,    -1,    -1,
     115,   189,    -1,   190,    -1,   189,   115,   190,    -1,   182,
     191,   192,    -1,    -1,    14,    -1,     3,    -1,    52,    -1,
     194,     3,   165,    -1,    30,    -1,    29,    -1,    76,    82,
     165,    -1,    88,   133,    74,   197,   135,   153,    -1,   198,
      -1,   197,   115,   198,    -1,     3,    99,   140,    -1,     3,
      99,   141,    -1,     3,    99,   113,   142,   114,    -1,     3,
      99,   113,   114,    -1,    76,   207,    90,   200,    -1,    -1,
     201,    -1,    93,   202,    -1,   203,    -1,   202,    95,   203,
      -1,     3,    99,     8,    -1,    76,    23,    -1,    76,    22,
      74,    -1,    74,   207,    84,    49,    50,   208,    -1,    -1,
      39,    -1,    75,    -1,    66,    87,    -1,    66,    25,    -1,
      67,    66,    -1,    73,    -1,    27,    38,     3,    69,   210,
      77,     8,    -1,    47,    -1,    35,    -1,    80,    -1,    33,
      38,     3,    -1,    16,    45,     3,    83,    71,     3,    -1,
      36,    71,     3,    -1,    72,   215,   151,    -1,    10,    -1,
      10,   118,     3,    -1,    86,    71,     3,    -1,    62,    45,
       3,    -1
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
     388,   393,   401,   405,   406,   411,   417,   423,   429,   438,
     439,   450,   451,   455,   461,   467,   469,   473,   477,   483,
     485,   489,   500,   502,   506,   510,   517,   518,   522,   523,
     524,   527,   529,   533,   538,   545,   547,   551,   555,   556,
     560,   565,   570,   576,   581,   589,   594,   601,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   642,   643,   644,   645,
     646,   647,   651,   652,   656,   657,   661,   662,   668,   671,
     673,   677,   678,   679,   680,   681,   682,   683,   688,   693,
     703,   704,   705,   706,   707,   711,   712,   716,   721,   726,
     731,   732,   736,   741,   749,   750,   754,   755,   756,   770,
     771,   772,   776,   777,   783,   791,   792,   795,   797,   801,
     802,   806,   807,   811,   815,   816,   820,   821,   822,   823,
     824,   830,   838,   852,   860,   864,   871,   872,   879,   889,
     895,   897,   901,   906,   910,   917,   919,   923,   924,   930,
     938,   939,   945,   951,   959,   960,   964,   968,   972,   976,
     986,   992,   993,   997,  1001,  1002,  1006,  1010,  1017,  1024,
    1030,  1031,  1032,  1036,  1037,  1038,  1039,  1045,  1056,  1057,
    1058,  1062,  1073,  1085,  1096,  1104,  1105,  1114,  1125
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
     137,   137,   138,   139,   139,   139,   139,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   143,   144,   144,   145,
     145,   146,   147,   147,   148,   148,   149,   149,   150,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   155,   155,
     156,   156,   156,   156,   156,   157,   157,   158,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   160,   160,   160,   160,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   165,
     165,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     167,   167,   167,   167,   167,   168,   168,   169,   169,   169,
     169,   169,   170,   170,   171,   171,   172,   172,   172,   173,
     173,   173,   174,   174,   175,   176,   176,   177,   177,   178,
     178,   179,   179,   180,   181,   181,   182,   182,   182,   182,
     182,   183,   183,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   189,   189,   190,   191,   191,   192,   192,   193,
     194,   194,   195,   196,   197,   197,   198,   198,   198,   198,
     199,   200,   200,   201,   202,   202,   203,   204,   205,   206,
     207,   207,   207,   208,   208,   208,   208,   209,   210,   210,
     210,   211,   212,   213,   214,   215,   215,   216,   217
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
       3,     3,     3,     3,     1,     5,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     4,     3,     3,     1,     1,
       2,     1,     2,     1,     3,     0,     3,     1,     3,     0,
       1,     5,     0,     1,     3,     5,     1,     3,     1,     2,
       2,     0,     1,     2,     4,     0,     1,     2,     1,     3,
       3,     3,     5,     6,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     4,     4,     3,     6,
       6,     3,     1,     3,     1,     1,     3,     5,     2,     0,
       2,     1,     2,     2,     3,     1,     1,     4,     4,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     4,     4,
       3,     4,     7,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     6,     1,     1,     0,     3,     1,
       3,     1,     3,     3,     1,     3,     1,     1,     1,     3,
       2,     7,     9,     6,     1,     3,     1,     3,     1,     3,
       0,     2,     1,     3,     3,     0,     1,     1,     1,     3,
       1,     1,     3,     6,     1,     3,     3,     3,     5,     4,
       4,     0,     1,     2,     1,     3,     3,     2,     3,     6,
       0,     1,     1,     2,     2,     2,     1,     7,     1,     1,
       1,     3,     6,     3,     3,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,     0,   202,     0,   199,     0,     0,   241,   240,     0,
       0,   205,     0,   206,   200,     0,   260,   260,     0,     0,
       0,     0,     2,     3,    25,    27,    29,    28,     7,     8,
       9,   201,     5,     0,     6,    10,    11,     0,    12,    13,
      14,    15,    16,    21,    17,    18,    19,    20,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     131,   132,   133,   275,     0,     0,     0,     0,   130,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
      37,    41,    44,   155,   111,     0,     0,   261,     0,   262,
       0,     0,     0,   257,   261,     0,   169,   176,   175,   169,
     169,   171,   168,     0,   203,     0,    53,     0,     1,     4,
       0,   169,     0,     0,     0,     0,   271,   273,   278,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,    42,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   112,     0,     0,     0,     0,   180,   183,   184,   182,
     181,   185,   190,     0,     0,     0,   169,   258,     0,     0,
     173,   172,   242,   251,   277,     0,     0,     0,     0,    26,
     207,   239,     0,    89,    91,   218,     0,     0,   216,   217,
     226,   230,   224,     0,     0,   165,   158,   164,     0,   162,
     276,     0,     0,     0,    51,     0,     0,     0,     0,     0,
     161,     0,     0,   153,     0,     0,   154,    31,    55,    38,
      43,   145,   146,   152,   151,   143,   142,   149,   150,   140,
     141,   148,   147,   136,   137,   138,   139,   144,   113,   194,
     195,   197,   189,   196,     0,   198,   188,   187,   191,     0,
       0,     0,     0,   169,   169,   174,   179,   170,     0,   250,
     252,     0,     0,   244,    54,     0,     0,     0,    90,    92,
     228,   220,    93,     0,     0,     0,     0,   269,   268,   270,
       0,     0,   156,     0,    45,     0,    50,    49,   157,    46,
       0,    47,     0,    48,     0,     0,   166,     0,     0,     0,
      95,    56,     0,   193,     0,   186,     0,   178,   177,     0,
     253,   254,     0,     0,   115,    83,    84,     0,     0,    88,
       0,   209,     0,     0,   272,   219,     0,   227,     0,   226,
     225,   231,   232,   223,     0,     0,     0,   163,    52,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    74,     0,
       0,    99,   114,     0,     0,     0,   266,   259,     0,     0,
       0,   246,   247,   245,     0,   243,   116,     0,     0,     0,
     208,     0,     0,   204,   211,    94,   229,   236,     0,     0,
     267,     0,   221,   160,   159,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,   100,   192,   264,   263,   265,   256,   255,
     249,     0,     0,   117,   118,     0,    86,    87,   210,     0,
       0,   214,     0,   237,   238,   234,   235,   233,     0,     0,
       0,    33,     0,    60,    59,     0,     0,    66,     0,    80,
      62,    73,    81,    63,    82,    70,    77,    69,    76,    71,
      78,    72,    79,     0,    97,    96,     0,     0,   111,   103,
     248,     0,     0,    85,   213,     0,   212,   222,     0,     0,
      30,    61,     0,     0,     0,    67,     0,     0,     0,     0,
     115,   120,   121,   124,     0,   119,   215,   108,    32,   106,
      34,    68,     0,    75,    64,     0,    98,     0,     0,   104,
      36,     0,     0,     0,   125,   109,   110,     0,     0,    65,
     101,     0,     0,     0,   122,     0,   107,    35,   105,   123,
     127,   126
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    21,    22,    23,    24,    25,   308,   441,   480,    26,
      79,    80,   141,    81,   228,   310,   311,   356,   357,   358,
     497,   282,   199,   283,   361,   465,   412,   413,   468,   469,
     498,   499,   160,   161,   375,   376,   423,   424,   513,   514,
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
     860,   -38,  -374,    57,  -374,    51,   109,  -374,  -374,   136,
     160,  -374,   142,  -374,  -374,   147,   265,   642,   131,   170,
     214,   244,  -374,   149,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,   233,  -374,  -374,  -374,   259,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,   267,   159,   281,   214,   302,   304,   305,   206,  -374,
    -374,  -374,  -374,   209,   216,   218,   223,   241,  -374,   243,
     246,   247,   252,   254,   307,  -374,   307,   307,   318,    -7,
    -374,    25,   650,  -374,   319,   271,   273,   203,   208,  -374,
     290,   116,   301,  -374,  -374,   375,   328,  -374,  -374,   328,
     328,  -374,  -374,   291,  -374,   379,  -374,   -47,  -374,    86,
     380,   328,   310,    16,   316,   -68,  -374,  -374,  -374,    53,
     385,   307,    61,   280,   307,   274,   307,   307,   307,   282,
     284,   287,  -374,  -374,   439,   296,   133,     2,   193,  -374,
     398,  -374,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   397,
    -374,  -374,   237,   208,   312,   315,  -374,  -374,  -374,  -374,
    -374,  -374,   297,   363,   336,   340,   328,  -374,   342,   414,
    -374,  -374,  -374,   331,  -374,   422,   423,   193,   313,  -374,
     329,  -374,   374,  -374,  -374,  -374,   199,    12,  -374,  -374,
    -374,   337,  -374,   146,   408,  -374,  -374,   650,   137,  -374,
    -374,   465,   450,   356,  -374,   492,   141,   332,   359,   518,
    -374,   307,   307,  -374,     4,   469,  -374,  -374,    93,  -374,
    -374,  -374,  -374,   666,   679,   703,   757,   766,   766,   300,
     300,   300,   300,   341,   341,  -374,  -374,  -374,   360,  -374,
    -374,  -374,  -374,  -374,   471,  -374,  -374,  -374,   297,   222,
     364,   208,   428,   328,   328,  -374,  -374,  -374,   476,  -374,
    -374,   381,   128,  -374,  -374,   294,   409,   496,  -374,  -374,
    -374,  -374,  -374,   144,   151,    16,   388,  -374,  -374,  -374,
     426,   -36,  -374,   274,  -374,   390,  -374,  -374,  -374,  -374,
     307,  -374,   307,  -374,   386,   412,  -374,   401,   433,    87,
     466,  -374,   520,  -374,     4,  -374,   104,  -374,  -374,   424,
     431,  -374,    30,   422,   468,  -374,  -374,   416,   417,  -374,
     418,  -374,   172,   419,  -374,  -374,     4,  -374,   525,   180,
    -374,   436,  -374,  -374,   544,   441,     4,  -374,  -374,   545,
     571,     4,   193,   442,   444,    87,   459,  -374,  -374,   245,
     538,   482,  -374,   187,    68,   493,  -374,  -374,   570,   476,
      11,  -374,  -374,  -374,   577,  -374,  -374,   474,   470,   472,
    -374,   294,    26,   467,  -374,  -374,  -374,  -374,    42,    26,
    -374,     4,  -374,  -374,  -374,  -374,     6,   522,   596,    64,
      87,    32,    20,    36,    59,    32,    32,    32,    32,   541,
     294,   565,   546,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,   200,   509,   494,  -374,   497,  -374,  -374,  -374,    21,
     210,  -374,   419,  -374,  -374,  -374,   598,  -374,   219,   214,
     590,   578,   515,  -374,  -374,   535,   537,  -374,     4,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,    24,  -374,   519,   574,   616,   319,  -374,
    -374,    10,   577,  -374,  -374,    26,  -374,  -374,   294,   632,
    -374,  -374,     4,     8,   224,  -374,     4,   294,   618,   181,
     468,   526,  -374,  -374,   653,  -374,  -374,   132,   542,  -374,
     543,  -374,   654,  -374,  -374,   227,  -374,   294,   548,   542,
    -374,   655,   563,   238,  -374,  -374,  -374,   294,   678,  -374,
     542,   572,   575,     4,  -374,   653,  -374,  -374,  -374,  -374,
    -374,  -374
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -374,  -374,  -374,  -374,   579,  -374,  -374,  -374,  -374,   376,
     338,   553,  -374,  -374,   100,  -374,   420,  -305,  -374,  -374,
    -269,  -113,  -303,  -304,  -374,  -374,  -374,  -374,  -374,  -374,
    -373,   176,   226,  -374,   205,  -374,  -374,   228,  -374,   171,
     -73,  -374,   576,   406,  -374,  -374,   -88,  -374,   443,   539,
    -374,  -374,   449,  -374,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,   277,  -374,  -283,  -374,  -374,  -374,   425,  -374,  -374,
    -374,   314,  -374,  -374,  -374,  -374,  -374,  -374,  -374,   389,
    -374,  -374,  -374,  -374,   344,  -374,  -374,  -374,   697,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -236
static const short yytable[] =
{
     198,   132,   339,   133,   134,   106,   331,    51,   345,   193,
     363,   181,   182,   491,   194,   492,   193,   193,   493,   372,
     280,   193,   194,   191,   195,   204,   193,   185,   139,   447,
     137,   193,   194,   485,   195,   193,   194,   193,   194,   140,
     359,   193,   194,   439,   449,   433,   207,   186,   211,   255,
     399,   215,   207,   217,   218,   219,    58,    59,    60,    61,
      52,   205,    62,   346,   193,   194,   421,   452,   186,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   359,   438,   265,    53,
     325,   326,   212,   415,   434,   444,    68,    69,   446,   431,
     451,   454,   456,   458,   460,   462,   436,   130,   138,   131,
     254,   306,   428,   327,   502,   227,   509,   254,   254,   174,
     107,   138,   196,   494,   175,   420,   281,   254,   328,   197,
     329,   359,   196,   448,   520,   281,   196,   486,   196,   429,
     354,   464,   196,   370,   484,    73,    54,   515,   304,   305,
      58,    59,    60,    61,   115,   416,    62,    63,   187,    74,
     400,   516,   188,    76,    64,   196,    77,   206,   213,    78,
     364,   365,   198,    65,    55,   317,   318,   366,   443,   330,
     503,   287,   505,  -235,   325,   326,   309,    57,    66,    67,
      68,    69,   496,   288,   387,   176,    58,    59,    60,    61,
     355,    70,    62,    71,   278,   279,   164,   327,   186,   371,
      64,   166,   165,   167,   168,   104,   169,   106,   506,    65,
     207,   309,   328,   385,   329,   249,   289,   349,    72,   350,
     250,    56,  -235,   392,    66,    67,    68,    69,   395,    73,
     249,   105,   193,   323,   108,   250,   508,    70,   225,    71,
     226,   292,   293,    74,    75,   298,   293,    76,   335,   336,
      77,   109,   111,    78,   401,   337,   338,   170,    85,   198,
     112,   251,   113,   330,    72,    86,   198,    58,    59,    60,
      61,   110,   205,    62,   114,    73,   380,   381,   445,   402,
     450,   453,   455,   457,   459,   461,   252,   325,   326,    74,
      75,   414,   336,    76,    87,   116,    77,   117,   118,    78,
      58,    59,    60,    61,   470,   336,    62,    68,    69,   119,
     327,   135,   253,    88,   474,   475,    91,   120,   130,   121,
     131,   122,   142,   477,   336,   328,   123,   329,   504,   336,
      89,   519,   336,   254,   403,   404,   405,   406,   407,   408,
      68,    69,   524,   525,   124,   409,   125,   143,    95,   126,
     127,   130,   198,   131,   142,   128,    73,   129,    96,   501,
     162,   159,   163,   142,   173,   177,    97,    98,   178,   179,
      74,   183,   184,   190,    76,   203,   330,    77,   210,   143,
      78,   142,    99,   192,   214,   224,   220,   221,   143,    73,
     222,   230,   248,   261,   101,   154,   155,   156,   157,   158,
     530,   259,   262,    74,   260,   263,   143,    76,   142,   264,
      77,   266,   267,    78,   268,   271,   274,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   275,   143,   142,   277,   299,   300,   156,   157,
     158,   291,   285,   295,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   143,
     296,   142,   307,   301,   302,   312,   278,   314,   316,   319,
     322,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   143,   142,   333,   334,
     351,   300,   343,   344,   348,   352,   360,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   143,   368,   142,   362,   369,   302,   374,   377,
     378,   379,   382,   386,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   143,
     142,   389,   390,   223,   391,   400,   397,   398,   410,   417,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   143,   411,   142,   418,   294,
     422,   425,   432,   440,   426,   463,   427,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   143,   142,   442,   466,   297,   467,   471,   472,
     478,   473,   387,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   143,   481,
     479,   482,   303,   483,   487,   488,   489,   500,   507,   511,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,    91,   512,   517,   518,   393,
     279,   521,   523,   522,    92,    93,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,    94,   142,   527,   353,   394,   528,    95,   189,   529,
     396,   229,   324,   526,   490,   510,   531,    96,   142,   347,
     495,   216,   258,   437,   315,    97,    98,   143,   313,   476,
     340,   142,   373,   419,   103,     0,     0,    89,     0,     0,
       0,    99,     0,   143,   100,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,   142,   143,     0,     0,     0,
       0,     0,     0,     0,     0,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     143,     0,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   142,
       0,     0,     0,     0,     0,     0,     0,     0,   142,     0,
       0,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     0,   143,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     1,     0,     2,     0,
       0,     3,     0,     0,     4,     0,     0,     5,     6,     7,
       8,     0,     0,     9,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     0,     0,    13,     0,
      14,     0,    15,     0,    16,     0,    17,     0,    18,     0,
       0,     0,     0,     0,     0,     0,    19,     0,    20
};

static const short yycheck[] =
{
     113,    74,   285,    76,    77,     3,   275,    45,    44,     5,
     314,    99,   100,     3,     6,     5,     5,     5,     8,   322,
       8,     5,     6,   111,     8,    93,     5,    74,     3,     9,
      37,     5,     6,     9,     8,     5,     6,     5,     6,    14,
     309,     5,     6,    37,     8,     3,   119,   115,   121,   162,
     355,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       3,     8,     9,    99,     5,     6,   370,     8,   115,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   355,   391,   176,    38,
       3,     4,    31,    25,    52,   400,    43,    44,   401,   382,
     403,   404,   405,   406,   407,   408,   389,    54,   115,    56,
     106,   224,   381,    26,   106,   113,   489,   106,   106,     3,
      20,   115,   106,   113,     8,   114,   114,   106,    41,   113,
      43,   400,   106,   113,   507,   114,   106,   113,   106,   113,
      53,   410,   106,   113,   448,    92,    37,    15,   221,   222,
       3,     4,     5,     6,    54,    87,     9,    10,    72,   106,
      96,    29,    76,   110,    17,   106,   113,   114,   107,   116,
      66,    67,   285,    26,    38,   263,   264,    73,   114,    92,
     483,    35,   486,     3,     3,     4,    93,    45,    41,    42,
      43,    44,   475,    47,    14,    79,     3,     4,     5,     6,
     113,    54,     9,    56,     5,     6,     3,    26,   115,   322,
      17,     3,     9,     5,     6,    84,     8,     3,   487,    26,
     293,    93,    41,   336,    43,     3,    80,   300,    81,   302,
       8,    71,    52,   346,    41,    42,    43,    44,   351,    92,
       3,    71,     5,   115,     0,     8,    65,    54,   115,    56,
     117,   114,   115,   106,   107,   114,   115,   110,   114,   115,
     113,   112,     3,   116,    19,   114,   115,    59,     3,   382,
       3,    34,   113,    92,    81,    10,   389,     3,     4,     5,
       6,    48,     8,     9,     3,    92,   114,   115,   401,    44,
     403,   404,   405,   406,   407,   408,    59,     3,     4,   106,
     107,   114,   115,   110,    39,     3,   113,     3,     3,   116,
       3,     4,     5,     6,   114,   115,     9,    43,    44,   113,
      26,     3,    85,    58,   114,   115,    13,   118,    54,   113,
      56,   113,    32,   114,   115,    41,   113,    43,   114,   115,
      75,   114,   115,   106,    99,   100,   101,   102,   103,   104,
      43,    44,   114,   115,   113,   110,   113,    57,    45,   113,
     113,    54,   475,    56,    32,   113,    92,   113,    55,   482,
      99,    52,    99,    32,    84,    74,    63,    64,     3,    51,
     106,    90,     3,     3,   110,    69,    92,   113,     3,    57,
     116,    32,    79,    83,   114,    99,   114,   113,    57,    92,
     113,     3,     5,   106,    91,   105,   106,   107,   108,   109,
     523,    99,    49,   106,    99,    79,    57,   110,    32,    79,
     113,    79,     8,   116,    93,     3,     3,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   113,    57,    32,    71,   114,   115,   107,   108,
     109,    43,   115,     3,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    57,
     114,    32,     3,   114,   115,   115,     5,   113,    50,     3,
      99,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    57,    32,    89,     3,
      99,   115,   114,    77,   114,    72,    40,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    57,    99,    32,     5,    95,   115,    60,   113,
     113,   113,   113,     8,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    57,
      32,   115,     8,   114,   113,    96,   114,   113,    20,    66,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    57,    94,    32,     8,   114,
       3,   107,   115,    61,   114,    44,   114,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    57,    32,     8,    40,   114,    61,    99,   115,
      20,   114,    14,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    57,   114,
      52,    96,   114,    96,   115,    61,    20,     5,    20,   113,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    13,     3,   115,   115,   114,
       6,   113,    99,     8,    22,    23,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    39,    32,     5,   308,   114,   114,    45,   109,   114,
     352,   138,   272,   517,   468,   490,   525,    55,    32,   293,
     472,   125,   163,   389,   261,    63,    64,    57,   259,   432,
     285,    32,   323,   369,    17,    -1,    -1,    75,    -1,    -1,
      -1,    79,    -1,    57,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    32,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      57,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    16,    -1,    18,    -1,
      -1,    21,    -1,    -1,    24,    -1,    -1,    27,    28,    29,
      30,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    -1,    72,    -1,    74,    -1,    76,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    88
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
       5,   140,   106,   141,   114,   142,   139,    20,    65,   149,
     153,   113,     3,   157,   158,    15,    29,   115,   115,   114,
     149,   113,     8,    99,   114,   115,   150,     5,   114,   114,
     140,   158
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
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX, false ) )
				YYERROR;
		;}
    break;

  case 77:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue, false ) )
				YYERROR;
		;}
    break;

  case 78:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX, true ) )
				YYERROR;
		;}
    break;

  case 79:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue, true ) )
				YYERROR;
		;}
    break;

  case 80:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 81:

    {
			if ( !pParser->AddStringFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 84:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 85:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 86:

    {
			yyval.m_sValue = "@groupby";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 87:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 88:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 89:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 90:

    {
			yyval.m_iInstype = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 91:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 92:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 93:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 94:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 97:

    {
			pParser->AddGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 98:

    {
			pParser->AddGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 101:

    {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 104:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 105:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 107:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 109:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 110:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 113:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 114:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 120:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 121:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 122:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 123:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-2], yyvsp[-1].m_sValue ) )
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
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 126:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 127:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 129:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 130:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 134:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 135:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 136:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 137:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
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

  case 156:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 157:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 158:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 159:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 160:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 161:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 166:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 167:

    { yyval = yyvsp[-4]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 170:

    { pParser->m_pStmt->m_sStringParam = yyvsp[0].m_sValue; ;}
    break;

  case 171:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 172:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 173:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 174:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; ;}
    break;

  case 175:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; ;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; ;}
    break;

  case 177:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 178:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-2].m_sValue;
		;}
    break;

  case 179:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 187:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 188:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 189:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 190:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 191:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 192:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 193:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 196:

    { yyval.m_iValue = 1; ;}
    break;

  case 197:

    { yyval.m_iValue = 0; ;}
    break;

  case 198:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 199:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 200:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 201:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 204:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 205:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 206:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 209:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 210:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 213:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 214:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 215:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 216:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 217:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 218:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 219:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 220:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 221:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-4].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-4].m_iEnd;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 222:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			pParser->m_pStmt->m_iListStart = yyvsp[-6].m_iStart;
			pParser->m_pStmt->m_iListEnd = yyvsp[-6].m_iEnd;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 223:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 224:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 225:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 227:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 228:

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

  case 229:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 232:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 234:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 238:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 239:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESCRIBE;
			pParser->m_pStmt->m_sIndex = yyvsp[-1].m_sValue;
		;}
    break;

  case 242:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 243:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-4] ) )
				YYERROR;
		;}
    break;

  case 246:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 247:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 248:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 249:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 250:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 257:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		;}
    break;

  case 258:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		;}
    break;

  case 259:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 267:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 268:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 269:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 270:

    { yyval.m_iValue = SPH_ATTR_STRINGPTR; ;}
    break;

  case 271:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 272:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sStringParam = yyvsp[0].m_sValue;
		;}
    break;

  case 273:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 274:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_SYSVAR;
			pParser->m_pStmt->m_tQuery.m_sQuery = yyvsp[-1].m_sValue;
		;}
    break;

  case 276:

    {
			yyval.m_sValue.SetSprintf ( "%s.%s", yyvsp[-2].m_sValue.cstr(), yyvsp[0].m_sValue.cstr() );
		;}
    break;

  case 277:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 278:

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

