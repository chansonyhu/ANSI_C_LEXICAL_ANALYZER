/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "scanner.y"

#include <string.h>
#include <stdio.h>
#include "y.tab.h"
#ifndef YYSTYPE
#define YYSTYPE int
#endif
void yyerror(char*);

/* Line 371 of yacc.c  */
#line 78 "scanner.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     special = 258,
     inline = 259,
     do = 260,
     for = 261,
     while = 262,
     break = 263,
     continue = 264,
     goto = 265,
     return = 266,
     if = 267,
     else = 268,
     switch = 269,
     enum = 270,
     case = 271,
     default = 272,
     static = 273,
     sizeof = 274,
     type_qualifier = 275,
     storage_class_specifier = 276,
     type_specifier = 277,
     struct_or_union = 278,
     identifier = 279,
     const_int = 280,
     const_char = 281,
     const_float = 282,
     string_literal = 283,
     ellipsis = 284,
     op_assign = 285,
     op_and = 286,
     op_or = 287,
     op_eq = 288,
     op_ne = 289,
     op_le = 290,
     op_ge = 291,
     op_lshift = 292,
     op_rshift = 293,
     op_ptr = 294,
     op_pp = 295,
     op_dd = 296
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 182 "scanner.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1489

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNRULES -- Number of states.  */
#define YYNSTATES  434

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,    57,    50,     2,
      43,    42,    51,    52,    49,    53,    46,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,    64,
      58,    65,    59,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,    61,    48,    54,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      24,    29,    33,    37,    40,    43,    50,    58,    60,    64,
      66,    69,    72,    75,    78,    83,    85,    87,    89,    91,
      93,    95,    97,   102,   104,   108,   112,   116,   118,   122,
     126,   128,   132,   136,   138,   142,   146,   150,   154,   156,
     160,   164,   166,   170,   172,   176,   178,   182,   184,   188,
     190,   194,   196,   202,   204,   208,   210,   214,   216,   219,
     223,   225,   228,   230,   233,   235,   238,   240,   243,   245,
     249,   251,   255,   257,   259,   261,   263,   265,   267,   272,
     278,   281,   283,   286,   290,   292,   295,   297,   300,   302,
     306,   308,   311,   315,   320,   326,   332,   339,   342,   344,
     348,   350,   354,   356,   358,   360,   362,   365,   367,   371,
     375,   380,   385,   391,   397,   404,   411,   416,   422,   427,
     431,   436,   438,   441,   444,   448,   450,   453,   455,   459,
     461,   465,   468,   470,   473,   475,   479,   481,   484,   486,
     488,   491,   495,   498,   502,   506,   510,   515,   520,   525,
     531,   536,   542,   548,   555,   561,   568,   572,   577,   580,
     584,   588,   593,   595,   597,   601,   606,   608,   611,   615,
     620,   623,   625,   628,   632,   635,   637,   639,   641,   643,
     645,   647,   651,   656,   660,   663,   667,   669,   672,   674,
     676,   678,   681,   687,   695,   701,   707,   715,   720,   728,
     736,   744,   753,   762,   771,   781,   788,   796,   804,   813,
     817,   820,   823,   826,   830,   832,   835,   837,   839,   843,
     848,   850
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     131,     0,    -1,   116,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    43,    85,    42,    -1,    67,    -1,    68,
      44,    85,    45,    -1,    68,    43,    69,    42,    -1,    68,
      46,    24,    -1,    68,    39,    24,    -1,    68,    40,    -1,
      68,    41,    -1,    43,   113,    42,    47,   118,    48,    -1,
      43,   113,    42,    47,   118,    49,    48,    -1,    84,    -1,
      69,    49,    84,    -1,    68,    -1,    40,    70,    -1,    41,
      70,    -1,    71,    72,    -1,    19,    70,    -1,    19,    43,
     113,    42,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    70,    -1,    43,   113,    42,
      72,    -1,    72,    -1,    73,    51,    72,    -1,    73,    56,
      72,    -1,    73,    57,    72,    -1,    73,    -1,    74,    52,
      73,    -1,    74,    53,    73,    -1,    74,    -1,    75,    37,
      74,    -1,    75,    38,    74,    -1,    75,    -1,    76,    58,
      75,    -1,    76,    59,    75,    -1,    76,    35,    75,    -1,
      76,    36,    75,    -1,    76,    -1,    77,    33,    76,    -1,
      77,    34,    76,    -1,    77,    -1,    78,    50,    77,    -1,
      78,    -1,    79,    60,    78,    -1,    79,    -1,    80,    61,
      79,    -1,    80,    -1,    81,    31,    80,    -1,    81,    -1,
      82,    32,    81,    -1,    82,    -1,    82,    62,    85,    63,
      83,    -1,    83,    -1,    70,    30,    84,    -1,    84,    -1,
      85,    49,    84,    -1,    83,    -1,    88,    64,    -1,    88,
      89,    64,    -1,    91,    -1,    91,    88,    -1,    92,    -1,
      92,    88,    -1,    20,    -1,    20,    88,    -1,   104,    -1,
     104,    88,    -1,    90,    -1,    89,    49,    90,    -1,   105,
      -1,   105,    65,   117,    -1,    18,    -1,    21,    -1,    22,
      -1,    93,    -1,    99,    -1,    24,    -1,    23,    47,    94,
      48,    -1,    23,    24,    47,    94,    48,    -1,    23,    24,
      -1,    95,    -1,    94,    95,    -1,    96,    97,    64,    -1,
      92,    -1,    92,    96,    -1,   103,    -1,   103,    96,    -1,
      98,    -1,    97,    49,    98,    -1,   105,    -1,    63,    86,
      -1,   105,    63,    86,    -1,    15,    47,   100,    48,    -1,
      15,    24,    47,   100,    48,    -1,    15,    47,   100,    49,
      48,    -1,    15,    24,    47,   100,    49,    48,    -1,    15,
      24,    -1,   101,    -1,   100,    49,   101,    -1,   102,    -1,
     102,    65,    86,    -1,    24,    -1,    20,    -1,     4,    -1,
     106,    -1,   107,   106,    -1,    24,    -1,    43,   105,    42,
      -1,   106,    44,    45,    -1,   106,    44,   108,    45,    -1,
     106,    44,    84,    45,    -1,   106,    44,   108,    84,    45,
      -1,   106,    44,    18,    84,    45,    -1,   106,    44,    18,
     108,    84,    45,    -1,   106,    44,   108,    18,    84,    45,
      -1,   106,    44,    51,    45,    -1,   106,    44,   108,    51,
      45,    -1,   106,    43,   109,    42,    -1,   106,    43,    42,
      -1,   106,    43,   112,    42,    -1,    51,    -1,    51,   108,
      -1,    51,   107,    -1,    51,   108,   107,    -1,   103,    -1,
     108,   103,    -1,   110,    -1,   110,    49,    29,    -1,   111,
      -1,   110,    49,   111,    -1,    88,   105,    -1,    88,    -1,
      88,   114,    -1,   116,    -1,   112,    49,    24,    -1,    96,
      -1,    96,   114,    -1,   107,    -1,   115,    -1,   107,   115,
      -1,    43,   114,    42,    -1,    44,    45,    -1,   115,    44,
      45,    -1,    44,   108,    45,    -1,    44,    84,    45,    -1,
     115,    44,   108,    45,    -1,   115,    44,    84,    45,    -1,
      44,   108,    84,    45,    -1,   115,    44,   108,    84,    45,
      -1,    44,    18,    84,    45,    -1,   115,    44,    18,    84,
      45,    -1,    44,    18,   108,    84,    45,    -1,   115,    44,
      18,   108,    84,    45,    -1,    44,   108,    18,    84,    45,
      -1,   115,    44,   108,    18,    84,    45,    -1,    44,    51,
      45,    -1,   115,    44,    51,    45,    -1,    43,    42,    -1,
     115,    43,    42,    -1,    43,   109,    42,    -1,   115,    43,
     109,    42,    -1,    24,    -1,    84,    -1,    47,   118,    48,
      -1,    47,   118,    49,    48,    -1,   117,    -1,   119,   117,
      -1,   118,    49,   117,    -1,   118,    49,   119,   117,    -1,
     120,    65,    -1,   121,    -1,   120,   121,    -1,    44,    86,
      45,    -1,    46,    24,    -1,   123,    -1,   124,    -1,   127,
      -1,   128,    -1,   129,    -1,   130,    -1,    24,    63,   122,
      -1,    16,    86,    63,   122,    -1,    17,    63,   122,    -1,
      47,    48,    -1,    47,   125,    48,    -1,   126,    -1,   125,
     126,    -1,    87,    -1,   122,    -1,    64,    -1,    85,    64,
      -1,    12,    43,    85,    42,   122,    -1,    12,    43,    85,
      42,   122,    13,   122,    -1,    14,    43,    85,    42,   122,
      -1,     7,    43,    85,    42,   122,    -1,     5,   122,     7,
      43,    85,    42,    64,    -1,     6,    43,    42,   122,    -1,
       6,    43,    85,    64,    64,    42,   122,    -1,     6,    43,
      64,    85,    64,    42,   122,    -1,     6,    43,    64,    64,
      85,    42,   122,    -1,     6,    43,    85,    64,    85,    64,
      42,   122,    -1,     6,    43,    85,    64,    64,    85,    42,
     122,    -1,     6,    43,    64,    85,    64,    85,    42,   122,
      -1,     6,    43,    85,    64,    85,    64,    85,    42,   122,
      -1,     6,    43,    87,    64,    42,   122,    -1,     6,    43,
      87,    85,    64,    42,   122,    -1,     6,    43,    87,    64,
      85,    42,   122,    -1,     6,    43,    87,    85,    64,    85,
      42,   122,    -1,    10,    24,    64,    -1,     9,    64,    -1,
       8,    64,    -1,    11,    64,    -1,    11,    85,    64,    -1,
     132,    -1,   131,   132,    -1,   133,    -1,    87,    -1,    88,
     105,   124,    -1,    88,   105,   134,   124,    -1,    87,    -1,
     134,    87,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    23,    23,    23,    23,    23,    23,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    41,    41,    41,    41,
      41,    42,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    78,    79,    80,
      81,    82,    82,    83,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    88,    88,    89,    90,    90,
      91,    91,    92,    93,    94,    95,    95,    96,    96,    97,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   121,   122,   122,   122,   123,   123,   123,   123,
     124,   125,   125,   126,   126,   127,   127,   127,   127,   127,
     127,   128,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   136,   136,   137,
     137,   137,   137,   137,   138,   138,   139,   139,   140,   140,
     141,   141
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "special", "inline", "do", "for",
  "while", "break", "continue", "goto", "return", "if", "else", "switch",
  "enum", "case", "default", "static", "sizeof", "type_qualifier",
  "storage_class_specifier", "type_specifier", "struct_or_union",
  "identifier", "const_int", "const_char", "const_float", "string_literal",
  "ellipsis", "op_assign", "op_and", "op_or", "op_eq", "op_ne", "op_le",
  "op_ge", "op_lshift", "op_rshift", "op_ptr", "op_pp", "op_dd", "')'",
  "'('", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'",
  "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'",
  "':'", "';'", "'='", "$accept", "primary_expr", "postfix_expr",
  "argument_expr_list", "unary_expr", "op_unary", "cast_expr",
  "multiplicative_expr", "additive_expr", "shift_expr", "relational_expr",
  "equality_expr", "AND_expr", "ex_OR_expr", "in_OR_expr",
  "logical_AND_expr", "logical_OR_expr", "conditional_expr",
  "assignment_expr", "expr", "constant_expr", "declaration",
  "declaration_spec", "init_declarator_list", "init_declarator",
  "storage_class_spec", "type_spec", "struct_or_union_spec",
  "struct_declaration_list", "struct_declaration", "spec_qual_list",
  "struct_declarator_list", "struct_declarator", "enum_spec", "enum_list",
  "enumerator", "enum_constant", "type_qual", "func_spec", "declarator",
  "direct_declarator", "pointer", "type_qual_list", "para_type_list",
  "para_list", "para_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "typedef_name",
  "initializer", "init_list", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expr_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "func_definition", "declaration_list", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    41,    40,    91,    93,    46,   123,   125,    44,
      38,    42,    43,    45,   126,    33,    47,    37,    60,    62,
      94,   124,    63,    58,    59,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    72,    72,    73,    73,    73,    73,    74,    74,    74,
      75,    75,    75,    76,    76,    76,    76,    76,    77,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    83,    84,    84,    85,    85,    86,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    92,    92,    93,    93,
      93,    94,    94,    95,    96,    96,    96,    96,    97,    97,
      98,    98,    98,    99,    99,    99,    99,    99,   100,   100,
     101,   101,   102,   103,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   117,   117,   117,   118,   118,   118,   118,
     119,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     122,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   134
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     4,     5,
       2,     1,     2,     3,     1,     2,     1,     2,     1,     3,
       1,     2,     3,     4,     5,     5,     6,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     3,     3,
       4,     4,     5,     5,     6,     6,     4,     5,     4,     3,
       4,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     2,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     3,     4,     4,     4,     5,
       4,     5,     5,     6,     5,     6,     3,     4,     2,     3,
       3,     4,     1,     1,     3,     4,     1,     2,     3,     4,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     1,     2,     1,     1,
       1,     2,     5,     7,     5,     5,     7,     4,     7,     7,
       7,     8,     8,     8,     9,     6,     7,     7,     8,     3,
       2,     2,     2,     3,     1,     2,     1,     1,     3,     4,
       1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   114,     0,    82,    74,    83,    84,     0,    87,   227,
       0,    70,    72,    85,    86,    76,     0,   224,   226,   107,
       0,    75,    90,     0,   117,     0,   131,    68,     0,    78,
      80,   115,     0,    71,    73,    77,     1,   225,     0,   112,
       0,   108,   110,     0,   113,    94,     0,    91,     0,    96,
       0,   135,   133,   132,     0,    69,     0,     0,   230,     0,
     228,     0,     0,     0,   116,     0,   103,     0,     0,     0,
      95,    88,    92,     0,     0,    98,   100,    97,   118,   136,
     134,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,     3,     4,     5,     6,
       0,     0,     0,   194,    25,    26,    27,    28,    29,    30,
     200,     8,    19,    31,     0,    33,    37,    40,    43,    48,
      51,    53,    55,    57,    59,    61,    63,    65,     0,   198,
       2,   199,   185,   186,     0,   196,   187,   188,   189,   190,
     172,     0,   173,    81,   231,   229,   172,   129,   142,     0,
     137,   139,     0,   144,     0,   119,    26,     0,     0,   104,
       0,   105,   109,    31,    67,   111,    89,   101,     0,    93,
       0,   172,     0,     0,     0,   221,   220,     0,   222,     0,
       0,     0,     0,     0,     0,    23,     0,     0,    20,    21,
       0,   146,     0,     0,    13,    14,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   195,   197,     0,     0,   176,     0,     0,     0,
     181,     0,     0,   141,   148,   143,   149,   128,     0,   130,
       0,     0,     0,   126,   121,     0,   120,    26,     0,   106,
      99,   102,     0,     0,     0,     0,     0,     0,   219,   223,
       0,     0,     0,   193,     0,   191,     0,     7,     0,   148,
     147,     0,    12,     0,    17,     0,    11,    64,    34,    35,
      36,    38,    39,    41,    42,    46,    47,    44,    45,    49,
      50,    52,    54,    56,    58,    60,     0,    66,     0,   184,
     174,     0,   177,   180,   182,    87,   168,     0,     0,     0,
     152,    26,     0,     0,   150,     0,     0,   138,   140,   145,
     123,     0,     0,   127,   122,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,   192,    24,     0,     0,    32,
      10,     0,     9,     0,   183,   175,   178,     0,   170,   151,
       0,     0,   166,   155,     0,   154,     0,   169,     0,     0,
     153,    26,     0,     0,   124,   125,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   202,   204,     0,    18,    62,
     179,   160,     0,     0,   158,   171,     0,     0,   167,   157,
       0,   156,     0,     0,     0,     0,     0,     0,     0,     0,
     215,     0,     0,     0,     0,    15,     0,   162,   164,   161,
       0,     0,   159,   206,   210,   209,     0,   208,     0,     0,
       0,   217,   216,     0,   203,    16,   163,   165,   213,   212,
     211,     0,   218,   214
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   111,   112,   273,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     165,     9,    59,    28,    29,    11,    12,    13,    46,    47,
      48,    74,    75,    14,    40,    41,    42,    49,    15,    50,
      31,    32,    53,   307,   150,   151,   152,   192,   308,   236,
     130,   226,   227,   228,   229,   230,   131,   132,   133,   134,
     135,   136,   137,   138,   139,    16,    17,    18,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -289
static const yytype_int16 yypact[] =
{
     780,  -289,    37,  -289,   780,  -289,  -289,    54,  -289,  -289,
      31,   780,   780,  -289,  -289,   780,   404,  -289,  -289,   -23,
      12,  -289,   -17,   195,  -289,    76,    21,  -289,   -20,  -289,
     205,   204,   111,  -289,  -289,  -289,  -289,  -289,    12,  -289,
     187,  -289,    18,   195,  -289,   195,    66,  -289,    16,   195,
      52,  -289,  -289,    21,    76,  -289,   359,  1185,  -289,    31,
    -289,    28,   564,   847,   204,   201,  -289,    -9,  1379,   114,
    -289,  -289,  -289,  1379,    82,  -289,   -21,  -289,  -289,  -289,
    -289,  -289,    50,   603,    81,    83,    92,    99,   145,   664,
     134,   169,  1379,   161,  1399,   179,  -289,  -289,  -289,  -289,
    1419,  1419,   809,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,   232,   208,  1379,  -289,   298,   295,   351,    86,
     357,   217,   199,   219,   246,    41,  -289,  -289,    93,  -289,
    -289,  -289,  -289,  -289,   450,  -289,  -289,  -289,  -289,  -289,
    -289,  1148,  -289,  -289,  -289,  -289,   554,  -289,    53,   247,
     245,  -289,    57,  -289,  1222,  -289,   252,   255,   885,  -289,
      39,  -289,  -289,  -289,  -289,  -289,  -289,  -289,    16,  -289,
    1379,   250,   320,   502,  1379,  -289,  -289,   280,  -289,   103,
    1379,  1379,   267,   603,   809,  -289,   603,   809,  -289,  -289,
     138,   170,   260,   322,  -289,  -289,  1379,  1379,   328,  1379,
    -289,  1379,  1379,  1379,  1379,  1379,  1379,  1379,  1379,  1379,
    1379,  1379,  1379,  1379,  1379,  1379,  1379,  1379,  1379,  1379,
    1379,  -289,  -289,  -289,  1379,   336,  -289,   344,  1185,    95,
    -289,   617,   923,  -289,   127,  -289,   352,  -289,  1460,  -289,
     338,   327,  1222,  -289,  -289,  1379,  -289,   349,   356,  -289,
    -289,  -289,   354,   603,   705,   110,   725,   190,  -289,  -289,
     191,   192,   603,  -289,   361,  -289,   363,  -289,   658,   372,
    -289,  1242,  -289,   209,  -289,   265,  -289,  -289,  -289,  -289,
    -289,   298,   298,   295,   295,   351,   351,   351,   351,    86,
      86,   357,   217,   199,   219,   246,   119,  -289,   408,  -289,
    -289,  1074,  -289,  -289,  -289,  -289,  -289,   407,   421,  1222,
    -289,   434,   435,   961,   352,   719,   999,  -289,  -289,  -289,
    -289,   436,   437,  -289,  -289,  1379,  -289,  1379,   117,   766,
    1279,   144,   603,   603,   603,  -289,   438,   438,  1148,  -289,
    -289,  1379,  -289,  1379,  -289,  -289,  -289,  1185,  -289,  -289,
     439,  1222,  -289,  -289,  1379,  -289,   441,  -289,   445,  1222,
    -289,   443,   444,  1037,  -289,  -289,   237,   239,  1299,  1319,
     147,   603,   257,  1339,  -289,   470,  -289,   369,  -289,  -289,
    -289,  -289,   447,   449,  -289,  -289,   451,  1222,  -289,  -289,
    1379,  -289,   462,   431,   603,   603,   266,   603,   269,  1359,
    -289,   603,   603,   290,   603,  -289,  1111,  -289,  -289,  -289,
     463,   464,  -289,  -289,  -289,  -289,   603,  -289,   603,   603,
     294,  -289,  -289,   603,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,   603,  -289,  -289
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -289,  -289,  -289,  -289,   228,  -289,  -110,   216,   241,   148,
     238,   296,   297,   299,   301,   293,  -289,   -59,   -56,   -64,
     -45,    15,     6,  -289,   459,  -289,    11,  -289,   473,    84,
     -37,  -289,   364,  -289,   481,   -48,  -289,   -26,  -289,    10,
     -29,     0,   -47,   -51,  -289,   300,  -289,    20,  -125,  -199,
     469,   -55,   196,  -288,  -289,   304,   -78,  -289,     1,  -289,
     401,  -289,  -289,  -289,  -289,  -289,   520,  -289,  -289
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -88
static const yytype_int16 yytable[] =
{
      51,   142,   143,    64,   200,   172,    10,   157,    70,   164,
      21,   149,    77,   347,   164,    39,   158,    33,    34,   162,
      30,    35,    10,   235,    38,   179,    52,    79,   167,    54,
      43,    60,     1,   164,    45,   314,    39,    51,   190,   161,
      24,    44,   170,     2,    55,    58,     3,   182,     4,     5,
       6,     7,     8,    80,    45,    24,    45,    45,    76,    25,
      45,    19,   145,    39,    82,   191,   270,    26,   148,    82,
     314,   129,    26,   218,    25,    56,   144,    24,    22,    73,
      45,     2,    26,    68,    20,   142,    44,   249,     6,     7,
       8,   278,   279,   280,    78,    27,   231,   232,   241,   239,
      24,    23,   248,   219,    26,   263,   240,   242,   265,   255,
     257,   164,   162,    45,    71,    57,   260,   261,   347,    25,
     190,   208,   209,   190,   173,   251,   174,    26,    51,     2,
      72,   168,    79,   275,    44,    24,     6,     7,     8,   224,
     274,   225,   220,   277,   210,   211,   169,   191,   234,   129,
     191,    24,   220,    72,    25,   296,   175,   221,   233,   220,
     303,   339,   166,   176,   297,   164,   220,   259,   220,   177,
     231,   232,   142,   302,   329,   326,   312,   180,    76,   298,
     267,   368,   343,   -87,   335,   313,   321,   220,   256,   322,
     328,   269,   331,   220,   -87,    45,   220,   -87,    45,   -87,
     -87,   -87,   -87,   -87,   264,    64,    51,   266,   373,     1,
       2,   399,   181,   268,   232,    44,    79,     6,     7,     8,
       2,    26,   -87,     3,   183,     4,     5,     6,     7,     8,
     -87,   234,   332,   333,   334,    66,    67,   148,   199,   220,
     220,   220,   186,   -87,   148,   142,   346,    62,    63,   159,
     160,   340,    56,   350,   374,   375,   376,   356,   341,   215,
     362,   366,   351,   367,   358,   370,   372,   214,   269,   363,
      57,   193,   194,   195,   148,   196,   197,   217,   198,   393,
     216,   394,   142,    51,   379,   378,   220,    79,   220,   237,
      51,   142,   380,   400,   238,   382,   163,   243,   383,   401,
     244,   163,   271,   386,   396,   398,   220,   392,   416,   403,
     342,   418,   387,   186,   220,   220,   414,   415,   220,   417,
     163,   148,   185,   421,   422,    79,   424,   252,   188,   189,
     262,   410,   423,    51,   411,   420,   431,    79,   428,   220,
     429,   430,   163,   220,   258,   432,   272,   204,   205,   201,
     142,   346,   276,   433,   202,   203,   285,   286,   287,   288,
     299,    79,   319,     1,    83,    84,    85,    86,    87,    88,
      89,    90,   320,    91,     2,    92,    93,     3,    94,     4,
       5,     6,     7,    95,    96,    97,    98,    99,   206,   207,
     212,   213,   300,   301,   323,   315,   316,   325,   163,   100,
     101,   324,   102,   336,    36,   337,    56,   103,     1,   104,
     105,   106,   107,   108,   109,   268,   232,   405,   406,     2,
     281,   282,     3,   110,     4,     5,     6,     7,     8,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   283,   284,   348,
     289,   290,   163,   344,     1,    83,    84,    85,    86,    87,
      88,    89,    90,   349,    91,     2,    92,    93,     3,    94,
       4,     5,     6,     7,    95,    96,    97,    98,    99,   352,
     353,   364,   365,   404,   381,   338,   384,   385,   388,   389,
     100,   101,   407,   102,   408,   413,   409,    56,   222,   163,
     104,   105,   106,   107,   108,   109,     1,   412,   426,   427,
     291,   295,   292,    81,   110,   293,    69,     2,   294,    65,
       3,    94,     4,     5,     6,     7,   146,    96,    97,    98,
      99,   153,   250,   304,   377,   223,    37,     0,   318,     0,
       0,     0,   100,   101,   253,   102,     0,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,   109,   -87,     0,
       0,     0,     0,     0,     0,     0,   254,     0,     1,   -87,
       0,   163,   -87,     0,   -87,   -87,   -87,   -87,   -87,     2,
       0,     0,     3,     0,     4,     5,     6,     7,   146,     0,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,     0,
       0,     0,     0,   -87,     0,   -87,   147,     0,    83,    84,
      85,    86,    87,    88,    89,    90,     0,    91,   -87,    92,
      93,     1,    94,     0,     0,     0,     0,   171,    96,    97,
      98,    99,     2,     0,     0,     3,     0,     4,     5,     6,
       7,   305,     0,   100,   101,     0,   102,     0,     0,     0,
      56,     0,     0,   104,   105,   106,   107,   108,   109,   306,
     231,   232,     1,     0,     0,     0,     0,   110,    26,     0,
       0,     0,     0,     2,     0,     0,     3,     0,     4,     5,
       6,     7,     8,    94,     0,     0,     0,     0,   140,    96,
      97,    98,    99,     0,     0,     0,     0,     0,     0,     0,
     306,   268,   232,     0,   100,   101,     0,   102,     0,    26,
       0,     0,     0,     0,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     1,    94,     0,     0,     0,   178,   140,
      96,    97,    98,    99,     2,     0,     0,     3,     0,     4,
       5,     6,     7,     8,    94,   100,   101,     0,   102,   140,
      96,    97,    98,    99,     0,   104,   105,   106,   107,   108,
     109,   357,     0,     0,     0,   100,   101,     0,   102,   327,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,     0,     0,     0,     1,    94,     0,     0,     0,   330,
     140,    96,    97,    98,    99,     2,     0,     0,     3,     0,
       4,     5,     6,     7,     8,     0,   100,   101,     0,   102,
       0,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,     0,     0,     2,     0,     0,     0,    94,    44,
     369,     6,     7,   146,    96,    97,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,   102,     0,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,   154,    94,    44,     0,     0,
       0,   140,    96,    97,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
     102,     0,   155,     0,     0,     0,     0,   104,   156,   106,
     107,   108,   109,   245,    94,    44,     0,     0,     0,   140,
      96,    97,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,   102,     0,
     246,     0,     0,     0,     0,   104,   247,   106,   107,   108,
     109,   309,    94,    44,     0,     0,     0,   140,    96,    97,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,     0,   102,     0,   310,     0,
       0,     0,     0,   104,   311,   106,   107,   108,   109,   354,
      94,    44,     0,     0,     0,   140,    96,    97,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,   102,     0,   355,     0,     0,     0,
       0,   104,   105,   106,   107,   108,   109,   359,    94,    44,
       0,     0,     0,   140,    96,    97,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,     0,   102,     0,   360,     0,     0,     0,     0,   104,
     361,   106,   107,   108,   109,   390,    94,    44,     0,     0,
       0,   140,    96,    97,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,     0,
     102,     0,   391,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,    94,     0,     0,     0,     0,   140,    96,
      97,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,     0,   102,   224,     0,
     225,   141,   345,     0,   104,   105,   106,   107,   108,   109,
      94,     0,     0,     0,     0,   140,    96,    97,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,     0,   102,   224,     0,   225,   141,   425,
       0,   104,   105,   106,   107,   108,   109,    94,     0,     0,
       0,     0,   140,    96,    97,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
       0,   102,   224,     0,   225,   141,     0,     0,   104,   105,
     106,   107,   108,   109,    94,     0,     0,     0,     0,   140,
      96,    97,    98,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   101,     0,   102,     0,
       0,     0,   141,     0,     0,   104,   105,   106,   107,   108,
     109,    94,    44,     0,     0,     0,   140,    96,    97,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,   100,   101,     0,   102,   140,    96,    97,    98,
      99,     0,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,   100,   101,     0,   102,     0,     0,     0,   338,
       0,     0,   104,   105,   106,   107,   108,   109,    94,     0,
       0,     0,     0,   140,    96,    97,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,   100,
     101,   371,   102,   140,    96,    97,    98,    99,     0,   104,
     105,   106,   107,   108,   109,     0,     0,     0,    94,   100,
     101,   395,   102,   140,    96,    97,    98,    99,     0,   104,
     105,   106,   107,   108,   109,     0,     0,     0,    94,   100,
     101,   397,   102,   140,    96,    97,    98,    99,     0,   104,
     105,   106,   107,   108,   109,     0,     0,     0,    94,   100,
     101,   402,   102,   140,    96,    97,    98,    99,     0,   104,
     105,   106,   107,   108,   109,     0,     0,     0,    94,   100,
     101,   419,   102,   140,    96,    97,    98,    99,     0,   104,
     105,   106,   107,   108,   109,     0,     0,     0,    94,   100,
     101,     0,   102,   140,    96,    97,    98,    99,     0,   104,
     105,   106,   107,   108,   109,     0,     0,     0,    94,   100,
     101,     0,   184,   140,    96,    97,    98,    99,     0,   104,
     105,   106,   107,   108,   109,     0,     0,     0,     0,   100,
     101,     0,   187,     0,     1,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,     2,     0,     0,     3,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,   317
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-289)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      26,    57,    57,    32,   114,    83,     0,    63,    45,    68,
       4,    62,    49,   301,    73,    24,    63,    11,    12,    67,
      10,    15,    16,   148,    47,    89,    26,    53,    73,    49,
      47,    30,     4,    92,    23,   234,    24,    63,   102,    48,
      24,    20,    63,    15,    64,    30,    18,    92,    20,    21,
      22,    23,    24,    53,    43,    24,    45,    46,    48,    43,
      49,    24,    61,    24,    54,   102,   191,    51,    62,    59,
     269,    56,    51,    32,    43,    47,    61,    24,    24,    63,
      69,    15,    51,    65,    47,   141,    20,    48,    22,    23,
      24,   201,   202,   203,    42,    64,    43,    44,   154,    42,
      24,    47,   158,    62,    51,   183,    49,   154,   186,   173,
     174,   170,   160,   102,    48,    65,   180,   181,   406,    43,
     184,    35,    36,   187,    43,   170,    43,    51,   154,    15,
      46,    49,   158,   197,    20,    24,    22,    23,    24,    44,
     196,    46,    49,   199,    58,    59,    64,   184,   148,   134,
     187,    24,    49,    69,    43,   219,    64,    64,   148,    49,
      65,   271,    48,    64,   220,   224,    49,    64,    49,    24,
      43,    44,   228,   228,    64,   253,   232,    43,   168,   224,
      42,    64,    63,     4,   262,   232,   242,    49,   173,   245,
     254,   191,   256,    49,    15,   184,    49,    18,   187,    20,
      21,    22,    23,    24,   184,   234,   232,   187,    64,     4,
      15,    64,    43,    43,    44,    20,   242,    22,    23,    24,
      15,    51,    43,    18,    63,    20,    21,    22,    23,    24,
      51,   231,    42,    42,    42,    48,    49,   231,    30,    49,
      49,    49,    63,    64,   238,   301,   301,    43,    44,    48,
      49,    42,    47,   309,   332,   333,   334,   313,    49,    60,
     316,   325,   309,   327,   315,   329,   330,    50,   268,   316,
      65,    39,    40,    41,   268,    43,    44,    31,    46,    42,
      61,    42,   338,   309,   343,   341,    49,   313,    49,    42,
     316,   347,   347,   371,    49,   351,    68,    45,   354,    42,
      45,    73,    42,   359,   368,   369,    49,   363,    42,   373,
      45,    42,   359,    63,    49,    49,   394,   395,    49,   397,
      92,   315,    94,   401,   402,   351,   404,     7,   100,   101,
      63,   387,    42,   359,   390,   399,    42,   363,   416,    49,
     418,   419,   114,    49,    64,   423,    24,    52,    53,    51,
     406,   406,    24,   431,    56,    57,   208,   209,   210,   211,
      24,   387,    24,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    45,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    37,    38,
      33,    34,    48,    49,    45,    43,    44,    43,   170,    40,
      41,    45,    43,    42,     0,    42,    47,    48,     4,    50,
      51,    52,    53,    54,    55,    43,    44,    48,    49,    15,
     204,   205,    18,    64,    20,    21,    22,    23,    24,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   206,   207,    42,
     212,   213,   224,    45,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    42,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    45,
      45,    45,    45,    13,    45,    47,    45,    42,    45,    45,
      40,    41,    45,    43,    45,    64,    45,    47,    48,   271,
      50,    51,    52,    53,    54,    55,     4,    45,    45,    45,
     214,   218,   215,    54,    64,   216,    43,    15,   217,    38,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    62,   168,   229,   338,   134,    16,    -1,   238,    -1,
      -1,    -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,     4,    15,
      -1,   343,    18,    -1,    20,    21,    22,    23,    24,    15,
      -1,    -1,    18,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    42,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    64,    16,
      17,     4,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    15,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    -1,    40,    41,    -1,    43,    -1,    -1,    -1,
      47,    -1,    -1,    50,    51,    52,    53,    54,    55,    42,
      43,    44,     4,    -1,    -1,    -1,    -1,    64,    51,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    18,    -1,    20,    21,
      22,    23,    24,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    -1,    40,    41,    -1,    43,    -1,    51,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,     4,    19,    -1,    -1,    -1,    64,    24,
      25,    26,    27,    28,    15,    -1,    -1,    18,    -1,    20,
      21,    22,    23,    24,    19,    40,    41,    -1,    43,    24,
      25,    26,    27,    28,    -1,    50,    51,    52,    53,    54,
      55,    42,    -1,    -1,    -1,    40,    41,    -1,    43,    64,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,    -1,    -1,     4,    19,    -1,    -1,    -1,    64,
      24,    25,    26,    27,    28,    15,    -1,    -1,    18,    -1,
      20,    21,    22,    23,    24,    -1,    40,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    15,    -1,    -1,    -1,    19,    20,
      64,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    18,    19,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    18,    19,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    -1,
      45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    18,    19,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    -1,    45,    -1,    -1,    -1,
      -1,    50,    51,    52,    53,    54,    55,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    18,    19,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    -1,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    -1,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    19,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    50,    51,
      52,    53,    54,    55,    19,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    50,    51,    52,    53,    54,
      55,    19,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    40,    41,    -1,    43,    24,    25,    26,    27,
      28,    -1,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    50,    51,    52,    53,    54,    55,    19,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    40,
      41,    42,    43,    24,    25,    26,    27,    28,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    19,    40,
      41,    42,    43,    24,    25,    26,    27,    28,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    19,    40,
      41,    42,    43,    24,    25,    26,    27,    28,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    19,    40,
      41,    42,    43,    24,    25,    26,    27,    28,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    19,    40,
      41,    42,    43,    24,    25,    26,    27,    28,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    19,    40,
      41,    -1,    43,    24,    25,    26,    27,    28,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    19,    40,
      41,    -1,    43,    24,    25,    26,    27,    28,    -1,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    -1,     4,    -1,    -1,    -1,    -1,    50,
      51,    52,    53,    54,    55,    15,    -1,    -1,    18,    -1,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    15,    18,    20,    21,    22,    23,    24,    87,
      88,    91,    92,    93,    99,   104,   131,   132,   133,    24,
      47,    88,    24,    47,    24,    43,    51,    64,    89,    90,
     105,   106,   107,    88,    88,    88,     0,   132,    47,    24,
     100,   101,   102,    47,    20,    92,    94,    95,    96,   103,
     105,   103,   107,   108,    49,    64,    47,    65,    87,    88,
     124,   134,    43,    44,   106,   100,    48,    49,    65,    94,
      96,    48,    95,    63,    97,    98,   105,    96,    42,   103,
     107,    90,   105,     5,     6,     7,     8,     9,    10,    11,
      12,    14,    16,    17,    19,    24,    25,    26,    27,    28,
      40,    41,    43,    48,    50,    51,    52,    53,    54,    55,
      64,    67,    68,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    87,
     116,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      24,    47,    84,   117,    87,   124,    24,    42,    88,   109,
     110,   111,   112,   116,    18,    45,    51,    84,   108,    48,
      49,    48,   101,    70,    83,    86,    48,    86,    49,    64,
      63,    24,   122,    43,    43,    64,    64,    24,    64,    85,
      43,    43,    86,    63,    43,    70,    63,    43,    70,    70,
      85,    96,   113,    39,    40,    41,    43,    44,    46,    30,
      72,    51,    56,    57,    52,    53,    37,    38,    35,    36,
      58,    59,    33,    34,    50,    60,    61,    31,    32,    62,
      49,    64,    48,   126,    44,    46,   117,   118,   119,   120,
     121,    43,    44,   105,   107,   114,   115,    42,    49,    42,
      49,    84,   108,    45,    45,    18,    45,    51,    84,    48,
      98,    86,     7,    42,    64,    85,    87,    85,    64,    64,
      85,    85,    63,   122,   113,   122,   113,    42,    43,   107,
     114,    42,    24,    69,    84,    85,    24,    84,    72,    72,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    76,
      76,    77,    78,    79,    80,    81,    85,    84,    86,    24,
      48,    49,   117,    65,   121,    24,    42,   109,   114,    18,
      45,    51,    84,   108,   115,    43,    44,    29,   111,    24,
      45,    84,    84,    45,    45,    43,   122,    64,    85,    64,
      64,    85,    42,    42,    42,   122,    42,    42,    47,    72,
      42,    49,    45,    63,    45,    48,   117,   119,    42,    42,
      84,   108,    45,    45,    18,    45,    84,    42,   109,    18,
      45,    51,    84,   108,    45,    45,    85,    85,    64,    64,
      85,    42,    85,    64,   122,   122,   122,   118,    84,    83,
     117,    45,    84,    84,    45,    42,    84,   108,    45,    45,
      18,    45,    84,    42,    42,    42,    85,    42,    85,    64,
     122,    42,    42,    85,    13,    48,    49,    45,    45,    45,
      84,    84,    45,    64,   122,   122,    42,   122,    42,    42,
      85,   122,   122,    42,   122,    48,    45,    45,   122,   122,
     122,    42,   122,   122
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
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
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
      
/* Line 1792 of yacc.c  */
#line 2007 "scanner.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 143 "scanner.y"


#pragma comment(lib,"yl.lib")
extern FILE * yyin;
void yyerror(char* s) {
	printf("%s\n",s);
}
int main(void)
{
	yyin=stdin;
	return yyparse();
}
