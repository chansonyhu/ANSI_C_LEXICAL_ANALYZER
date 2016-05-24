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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1464

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
      42,    43,    51,    52,    49,    53,    46,    56,     2,     2,
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
     131,     0,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    42,    85,    43,    -1,    67,    -1,    68,
      44,    85,    45,    -1,    68,    42,    69,    43,    -1,    68,
      46,    24,    -1,    68,    39,    24,    -1,    68,    40,    -1,
      68,    41,    -1,    42,   113,    43,    47,   118,    48,    -1,
      42,   113,    43,    47,   118,    49,    48,    -1,    84,    -1,
      69,    49,    84,    -1,    68,    -1,    40,    70,    -1,    41,
      70,    -1,    71,    72,    -1,    19,    70,    -1,    19,    42,
     113,    43,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    54,    -1,    55,    -1,    70,    -1,    42,   113,    43,
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
      -1,    93,    -1,    99,    -1,   116,    -1,    23,    47,    94,
      48,    -1,    23,    24,    47,    94,    48,    -1,    23,    24,
      -1,    95,    -1,    94,    95,    -1,    96,    97,    64,    -1,
      92,    -1,    92,    96,    -1,   103,    -1,   103,    96,    -1,
      98,    -1,    97,    49,    98,    -1,   105,    -1,    63,    86,
      -1,   105,    63,    86,    -1,    15,    47,   100,    48,    -1,
      15,    24,    47,   100,    48,    -1,    15,    47,   100,    49,
      48,    -1,    15,    24,    47,   100,    49,    48,    -1,    15,
      24,    -1,   101,    -1,   100,    49,   101,    -1,   102,    -1,
     102,    65,    86,    -1,    24,    -1,    20,    -1,     4,    -1,
     106,    -1,   107,   106,    -1,    24,    -1,    42,   105,    43,
      -1,   106,    44,    45,    -1,   106,    44,   108,    45,    -1,
     106,    44,    84,    45,    -1,   106,    44,   108,    84,    45,
      -1,   106,    44,    18,    84,    45,    -1,   106,    44,    18,
     108,    84,    45,    -1,   106,    44,   108,    18,    84,    45,
      -1,   106,    44,    51,    45,    -1,   106,    44,   108,    51,
      45,    -1,   106,    42,   109,    43,    -1,   106,    42,    43,
      -1,   106,    42,   112,    43,    -1,    51,    -1,    51,   108,
      -1,    51,   107,    -1,    51,   108,   107,    -1,   103,    -1,
     108,   103,    -1,   110,    -1,   110,    49,    29,    -1,   111,
      -1,   110,    49,   111,    -1,    88,   105,    -1,    88,    -1,
      88,   114,    -1,    24,    -1,   112,    49,    24,    -1,    96,
      -1,    96,   114,    -1,   107,    -1,   115,    -1,   107,   115,
      -1,    42,   114,    43,    -1,    44,    45,    -1,   115,    44,
      45,    -1,    44,   108,    45,    -1,    44,    84,    45,    -1,
     115,    44,   108,    45,    -1,   115,    44,    84,    45,    -1,
      44,   108,    84,    45,    -1,   115,    44,   108,    84,    45,
      -1,    44,    18,    84,    45,    -1,   115,    44,    18,    84,
      45,    -1,    44,    18,   108,    84,    45,    -1,   115,    44,
      18,   108,    84,    45,    -1,    44,   108,    18,    84,    45,
      -1,   115,    44,   108,    18,    84,    45,    -1,    44,    51,
      45,    -1,   115,    44,    51,    45,    -1,    42,    43,    -1,
     115,    42,    43,    -1,    42,   109,    43,    -1,   115,    42,
     109,    43,    -1,    24,    -1,    84,    -1,    47,   118,    48,
      -1,    47,   118,    49,    48,    -1,   117,    -1,   119,   117,
      -1,   118,    49,   117,    -1,   118,    49,   119,   117,    -1,
     120,    65,    -1,   121,    -1,   120,   121,    -1,    44,    86,
      45,    -1,    46,    24,    -1,   123,    -1,   124,    -1,   127,
      -1,   128,    -1,   129,    -1,   130,    -1,    24,    63,   122,
      -1,    16,    86,    63,   122,    -1,    17,    63,   122,    -1,
      47,    48,    -1,    47,   125,    48,    -1,   126,    -1,   125,
     126,    -1,    87,    -1,   122,    -1,    64,    -1,    85,    64,
      -1,    12,    42,    85,    43,   122,    -1,    12,    42,    85,
      43,   122,    13,   122,    -1,    14,    42,    85,    43,   122,
      -1,     7,    42,    85,    43,   122,    -1,     5,   122,     7,
      42,    85,    43,    64,    -1,     6,    42,    43,   122,    -1,
       6,    42,    85,    64,    64,    43,   122,    -1,     6,    42,
      64,    85,    64,    43,   122,    -1,     6,    42,    64,    64,
      85,    43,   122,    -1,     6,    42,    85,    64,    85,    64,
      43,   122,    -1,     6,    42,    85,    64,    64,    85,    43,
     122,    -1,     6,    42,    64,    85,    64,    85,    43,   122,
      -1,     6,    42,    85,    64,    85,    64,    85,    43,   122,
      -1,     6,    42,    87,    64,    43,   122,    -1,     6,    42,
      87,    85,    64,    43,   122,    -1,     6,    42,    87,    64,
      85,    43,   122,    -1,     6,    42,    87,    85,    64,    85,
      43,   122,    -1,    10,    24,    64,    -1,     9,    64,    -1,
       8,    64,    -1,    11,    64,    -1,    11,    85,    64,    -1,
     132,    -1,   131,   132,    -1,   133,    -1,    87,    -1,    88,
     105,   124,    -1,    88,   105,   134,   124,    -1,    87,    -1,
     134,    87,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    22,    22,    22,    22,    22,    22,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    40,    40,    40,    40,
      40,    41,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    73,    73,    74,    74,
      75,    75,    76,    76,    77,    77,    77,    77,    78,    79,
      80,    81,    81,    82,    83,    83,    83,    83,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    89,    89,
      90,    90,    91,    92,    93,    94,    94,    95,    95,    96,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   120,   121,   121,   121,   122,   122,   122,   122,
     123,   124,   124,   125,   125,   126,   126,   126,   126,   126,
     126,   127,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   131,   132,   132,   132,   133,   133,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   135,   136,
     136,   136,   136,   136,   137,   137,   138,   138,   139,   139,
     140,   140
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
  "op_ge", "op_lshift", "op_rshift", "op_ptr", "op_pp", "op_dd", "'('",
  "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'",
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
     295,   296,    40,    41,    91,    93,    46,   123,   125,    44,
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
       0,   114,     0,    82,    74,    83,    84,     0,   172,   227,
       0,    70,    72,    85,    86,    76,    87,     0,   224,   226,
     107,     0,    75,    90,     0,   117,     0,   131,    68,     0,
      78,    80,   115,     0,    71,    73,    77,     1,   225,     0,
     112,     0,   108,   110,     0,   113,    94,     0,    91,     0,
      96,     0,   135,   133,   132,     0,    69,     0,     0,   230,
       0,   228,     0,     0,     0,   116,     0,   103,     0,     0,
       0,    95,    88,    92,     0,     0,    98,   100,    97,   118,
     136,   134,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     0,     0,     0,   194,    25,    26,    27,    28,    29,
      30,   200,     8,    19,    31,     0,    33,    37,    40,    43,
      48,    51,    53,    55,    57,    59,    61,    63,    65,     0,
     198,   199,   185,   186,     0,   196,   187,   188,   189,   190,
       2,     0,   173,    81,   231,   229,   172,   129,   142,     0,
     137,   139,     0,     0,   119,    26,     0,     0,   104,     0,
     105,   109,    31,    67,   111,    89,   101,     0,    93,     0,
       2,     0,     0,     0,   221,   220,     0,   222,     0,     0,
       0,     0,     0,     0,    23,     0,     0,    20,    21,     2,
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
     174,     0,   177,   180,   182,   172,   168,     0,     0,     0,
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
      -1,   112,   113,   273,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     164,     9,    60,    29,    30,    11,    12,    13,    47,    48,
      49,    75,    76,    14,    41,    42,    43,    50,    15,    51,
      32,    33,    54,   307,   150,   151,   152,   192,   308,   236,
      16,   226,   227,   228,   229,   230,   131,   132,   133,   134,
     135,   136,   137,   138,   139,    17,    18,    19,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -290
static const yytype_int16 yypact[] =
{
    1428,  -290,    32,  -290,  1428,  -290,  -290,    63,  -290,  -290,
       6,  1428,  1428,  -290,  -290,  1428,  -290,  1418,  -290,  -290,
      -4,    15,  -290,   126,   178,  -290,    -6,    11,  -290,   -14,
    -290,    54,   115,   116,  -290,  -290,  -290,  -290,  -290,    15,
    -290,    45,  -290,    59,   178,  -290,   178,   188,  -290,    29,
     178,   144,  -290,  -290,    11,    -6,  -290,   364,  1144,  -290,
       6,  -290,   129,   409,   806,   115,   158,  -290,    16,  1337,
     290,  -290,  -290,  -290,  1337,    41,  -290,   132,  -290,  -290,
    -290,  -290,  -290,   166,   577,   204,   219,   202,   224,   269,
     644,   265,   267,  1337,   248,  1356,   205,  -290,  -290,  -290,
    -290,  1375,  1375,   766,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,   317,   299,  1337,  -290,   162,   275,   258,
      77,   308,   270,   271,   274,   312,    -8,  -290,  -290,    82,
    -290,  -290,  -290,  -290,   474,  -290,  -290,  -290,  -290,  -290,
    -290,  1107,  -290,  -290,  -290,  -290,   117,  -290,    44,   303,
     302,  -290,   137,  1181,  -290,   310,   321,   844,  -290,    49,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,    29,  -290,  1337,
     285,   355,   526,  1337,  -290,  -290,   313,  -290,    92,  1337,
    1337,   332,   577,   766,  -290,   577,   766,  -290,  -290,  1440,
     173,    47,   358,   374,  -290,  -290,  1337,  1337,   378,  1337,
    -290,  1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,
    1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,
    1337,  -290,  -290,  -290,  1337,   379,  -290,   316,  1144,    37,
    -290,   622,   882,  -290,   101,  -290,   236,  -290,   419,  -290,
     385,   365,  1181,  -290,  -290,  1337,  -290,   375,   377,  -290,
    -290,  -290,   383,   577,   663,   106,   704,   181,  -290,  -290,
     189,   190,   577,  -290,   392,  -290,   393,  -290,   632,   243,
    -290,  1200,  -290,   191,  -290,   133,  -290,  -290,  -290,  -290,
    -290,   162,   162,   275,   275,   258,   258,   258,   258,    77,
      77,   308,   270,   271,   274,   312,    71,  -290,   381,  -290,
    -290,  1033,  -290,  -290,  -290,   206,  -290,   395,   401,  1181,
    -290,   400,   402,   920,   236,   780,   958,  -290,  -290,  -290,
    -290,   404,   405,  -290,  -290,  1337,  -290,  1337,   113,   723,
    1237,   120,   577,   577,   577,  -290,   399,   399,  1107,  -290,
    -290,  1337,  -290,  1337,  -290,  -290,  -290,  1144,  -290,  -290,
     406,  1181,  -290,  -290,  1337,  -290,   426,  -290,   429,  1181,
    -290,   428,   430,   996,  -290,  -290,   194,   198,  1257,  1277,
     130,   577,   208,  1297,  -290,   461,  -290,   345,  -290,  -290,
    -290,  -290,   432,   442,  -290,  -290,   458,  1181,  -290,  -290,
    1337,  -290,   459,   441,   577,   577,   226,   577,   227,  1317,
    -290,   577,   577,   228,   577,  -290,  1070,  -290,  -290,  -290,
     462,   463,  -290,  -290,  -290,  -290,   577,  -290,   577,   577,
     230,  -290,  -290,   577,  -290,  -290,  -290,  -290,  -290,  -290,
    -290,   577,  -290,  -290
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -290,  -290,  -290,  -290,   252,  -290,   -74,   192,   193,    90,
     195,   292,   294,   295,   293,   300,  -290,   -60,   -57,   -65,
     -32,   -11,     4,  -290,   457,  -290,   -18,  -290,   469,    52,
      13,  -290,   350,  -290,   480,   -55,  -290,   -27,  -290,     0,
     -30,   -10,   -42,   -52,  -290,   282,  -290,    31,  -125,  -187,
    -290,   -56,   196,  -289,  -290,   304,   -79,  -290,     3,  -290,
     397,  -290,  -290,  -290,  -290,  -290,   515,  -290,  -290
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -173
static const yytype_int16 yytable[] =
{
      52,   142,   143,    65,    10,   171,    46,   156,    22,   163,
      31,   149,   347,   161,   163,    34,    35,    53,    25,    36,
      59,    10,   157,   235,   218,   178,    46,    80,    46,    46,
      25,    45,    46,   163,    61,    55,    26,    52,   190,    40,
      40,   200,   166,    39,    81,    27,   130,   314,    26,    77,
      56,   144,    46,    25,   219,    83,    20,    27,     1,    71,
      83,   181,    27,    78,   160,   145,   270,   148,    25,     2,
      28,    26,     3,    40,     4,     5,     6,     7,     8,    21,
      27,   224,   314,   225,   142,    46,   231,    23,   232,   268,
     167,   232,    74,    67,    68,    27,   241,   249,    27,    73,
     248,    57,   303,   263,   161,   168,   265,   255,   257,   163,
      24,   242,   208,   209,   260,   261,   191,   347,   190,    58,
     220,   190,    73,   130,    69,    25,    52,   278,   279,   280,
      80,   220,   275,     1,   343,   210,   211,   251,   234,   274,
      25,   220,   277,   231,     2,   232,   221,     3,   233,     4,
       5,     6,     7,     8,   296,   220,   259,    63,    26,    64,
    -144,   256,   220,   297,   163,    46,  -144,    77,    46,   220,
     329,   142,   302,    44,   326,   312,    57,   368,   342,   220,
     239,   269,   220,   335,   373,   321,   240,    79,   322,   328,
     313,   331,   298,     2,   399,   169,   191,   339,    45,   191,
       6,     7,     8,     2,    65,    52,   158,   159,    45,  -172,
       6,     7,     8,   201,   264,    80,   267,   266,   202,   203,
    -172,   234,   220,  -172,   332,  -172,  -172,  -172,  -172,  -172,
     220,    58,   333,   334,   340,   148,    72,   393,   220,   220,
     341,   394,   148,   220,   142,   346,   172,   220,  -117,  -117,
    -117,   401,   350,   374,   375,   376,   356,   220,   269,   362,
     366,   173,   367,   358,   370,   372,   174,   351,   185,   416,
     418,   423,   148,   431,   363,   220,   220,   220,   315,   220,
     316,   142,    52,   379,   378,   268,    80,   232,   175,    52,
     142,   380,   400,   176,   382,   206,   207,   383,   285,   286,
     287,   288,   386,   396,   398,     2,   392,   179,   403,   180,
      45,   182,     6,     7,     8,   414,   415,   387,   417,   148,
     214,   162,   421,   422,    80,   424,   162,   204,   205,   199,
     410,   215,    52,   411,   420,   216,    80,   428,   165,   429,
     430,   212,   213,   217,   432,   162,   237,   184,   185,   142,
     346,   238,   433,   187,   188,   243,   193,   194,   195,   196,
      80,   197,   252,   198,   300,   301,   244,   162,     1,    84,
      85,    86,    87,    88,    89,    90,    91,   258,    92,     2,
      93,    94,     3,    95,     4,     5,     6,     7,    96,    97,
      98,    99,   100,   405,   406,   262,   281,   282,   272,   283,
     284,   271,   276,   299,   101,   102,   103,   289,   290,   319,
     320,    57,   104,     1,   105,   106,   107,   108,   109,   110,
     323,   162,   324,     1,     2,   325,   344,     3,   111,     4,
       5,     6,     7,   146,     2,   336,   337,     3,   348,     4,
       5,     6,     7,     8,   349,   352,   338,   353,   317,   364,
     365,   381,   147,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   384,   385,   388,   404,   389,   162,   407,     1,    84,
      85,    86,    87,    88,    89,    90,    91,   408,    92,     2,
      93,    94,     3,    95,     4,     5,     6,     7,    96,    97,
      98,    99,   100,   409,   412,   413,   291,   426,   427,   292,
     294,   293,    82,    70,   101,   102,   103,   250,   295,    66,
     318,    57,   222,   162,   105,   106,   107,   108,   109,   110,
       1,   223,    38,   304,   377,     0,     0,     0,   111,     0,
       0,     2,     0,     0,     3,    95,     4,     5,     6,     7,
     189,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   253,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,    84,    85,    86,    87,    88,    89,    90,    91,
     254,    92,     0,    93,    94,   162,    95,     0,     0,     0,
       0,   170,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
       0,     0,     0,     0,    57,     0,     1,   105,   106,   107,
     108,   109,   110,     0,     0,     0,     1,     2,     0,     0,
       3,   111,     4,     5,     6,     7,   305,     2,     0,     0,
       3,     0,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     0,     0,    95,   231,   306,   232,     0,   140,    97,
      98,    99,   100,    27,   268,   306,   232,     0,     0,     0,
       0,     0,    95,    27,   101,   102,   103,   140,    97,    98,
      99,   100,     0,     0,   105,   106,   107,   108,   109,   110,
       0,     0,     0,   101,   102,   103,     0,     0,   177,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,     0,
       0,     0,     0,    95,     0,     0,     0,   327,   140,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,   101,   102,   103,   140,    97,    98,
      99,   100,     0,     0,   105,   106,   107,   108,   109,   110,
       0,     0,     0,   101,   102,   103,     0,     0,   330,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,     0,
       0,     2,     0,     0,     1,    95,    45,   369,     6,     7,
     189,    97,    98,    99,   100,     2,     0,     0,     3,     0,
       4,     5,     6,     7,     8,     0,   101,   102,   103,     0,
       0,     0,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,     0,   357,   153,    95,    45,     0,     0,     0,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,     0,
       0,   154,     0,     0,     0,     0,   105,   155,   107,   108,
     109,   110,   245,    95,    45,     0,     0,     0,   140,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,     0,     0,   246,
       0,     0,     0,     0,   105,   247,   107,   108,   109,   110,
     309,    95,    45,     0,     0,     0,   140,    97,    98,    99,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,   103,     0,     0,   310,     0,     0,
       0,     0,   105,   311,   107,   108,   109,   110,   354,    95,
      45,     0,     0,     0,   140,    97,    98,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,     0,     0,   355,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,   359,    95,    45,     0,
       0,     0,   140,    97,    98,    99,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
     103,     0,     0,   360,     0,     0,     0,     0,   105,   361,
     107,   108,   109,   110,   390,    95,    45,     0,     0,     0,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,     0,
       0,   391,     0,     0,     0,     0,   105,   106,   107,   108,
     109,   110,    95,     0,     0,     0,     0,   140,    97,    98,
      99,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,   103,     0,   224,     0,   225,
     141,   345,     0,   105,   106,   107,   108,   109,   110,    95,
       0,     0,     0,     0,   140,    97,    98,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,   103,     0,   224,     0,   225,   141,   425,     0,
     105,   106,   107,   108,   109,   110,    95,     0,     0,     0,
       0,   140,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   102,   103,
       0,   224,     0,   225,   141,     0,     0,   105,   106,   107,
     108,   109,   110,    95,     0,     0,     0,     0,   140,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,   103,     0,     0,     0,
       0,   141,     0,     0,   105,   106,   107,   108,   109,   110,
      95,    45,     0,     0,     0,   140,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    95,
       0,   101,   102,   103,   140,    97,    98,    99,   100,     0,
       0,   105,   106,   107,   108,   109,   110,     0,     0,     0,
     101,   102,   103,     0,     0,     0,     0,   338,     0,     0,
     105,   106,   107,   108,   109,   110,    95,     0,     0,     0,
       0,   140,    97,    98,    99,   100,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,   101,   102,   103,
     371,   140,    97,    98,    99,   100,     0,   105,   106,   107,
     108,   109,   110,     0,     0,     0,    95,   101,   102,   103,
     395,   140,    97,    98,    99,   100,     0,   105,   106,   107,
     108,   109,   110,     0,     0,     0,    95,   101,   102,   103,
     397,   140,    97,    98,    99,   100,     0,   105,   106,   107,
     108,   109,   110,     0,     0,     0,    95,   101,   102,   103,
     402,   140,    97,    98,    99,   100,     0,   105,   106,   107,
     108,   109,   110,     0,     0,     0,    95,   101,   102,   103,
     419,   140,    97,    98,    99,   100,     0,   105,   106,   107,
     108,   109,   110,     0,     0,    95,     0,   101,   102,   103,
     140,    97,    98,    99,   100,     0,     0,   105,   106,   107,
     108,   109,   110,     0,    95,     0,   101,   102,   183,   140,
      97,    98,    99,   100,     0,     0,   105,   106,   107,   108,
     109,   110,     0,     0,     0,   101,   102,   186,    37,     0,
       0,     0,     1,     0,     0,   105,   106,   107,   108,   109,
     110,     0,     1,     2,     0,     0,     3,     0,     4,     5,
       6,     7,     8,     2,  -172,     0,     3,     0,     4,     5,
       6,     7,     8,     0,     0,  -172,     0,     0,  -172,     0,
    -172,  -172,  -172,  -172,  -172
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-290)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      27,    58,    58,    33,     0,    84,    24,    64,     4,    69,
      10,    63,   301,    68,    74,    11,    12,    27,    24,    15,
      31,    17,    64,   148,    32,    90,    44,    54,    46,    47,
      24,    20,    50,    93,    31,    49,    42,    64,   103,    24,
      24,   115,    74,    47,    54,    51,    57,   234,    42,    49,
      64,    62,    70,    24,    62,    55,    24,    51,     4,    46,
      60,    93,    51,    50,    48,    62,   191,    63,    24,    15,
      64,    42,    18,    24,    20,    21,    22,    23,    24,    47,
      51,    44,   269,    46,   141,   103,    42,    24,    44,    42,
      49,    44,    63,    48,    49,    51,   153,    48,    51,    47,
     157,    47,    65,   182,   159,    64,   185,   172,   173,   169,
      47,   153,    35,    36,   179,   180,   103,   406,   183,    65,
      49,   186,    70,   134,    65,    24,   153,   201,   202,   203,
     157,    49,   197,     4,    63,    58,    59,   169,   148,   196,
      24,    49,   199,    42,    15,    44,    64,    18,   148,    20,
      21,    22,    23,    24,   219,    49,    64,    42,    42,    44,
      43,   172,    49,   220,   224,   183,    49,   167,   186,    49,
      64,   228,   228,    47,   253,   232,    47,    64,    45,    49,
      43,   191,    49,   262,    64,   242,    49,    43,   245,   254,
     232,   256,   224,    15,    64,    63,   183,   271,    20,   186,
      22,    23,    24,    15,   234,   232,    48,    49,    20,     4,
      22,    23,    24,    51,   183,   242,    43,   186,    56,    57,
      15,   231,    49,    18,    43,    20,    21,    22,    23,    24,
      49,    65,    43,    43,    43,   231,    48,    43,    49,    49,
      49,    43,   238,    49,   301,   301,    42,    49,    42,    43,
      44,    43,   309,   332,   333,   334,   313,    49,   268,   316,
     325,    42,   327,   315,   329,   330,    64,   309,    63,    43,
      43,    43,   268,    43,   316,    49,    49,    49,    42,    49,
      44,   338,   309,   343,   341,    42,   313,    44,    64,   316,
     347,   347,   371,    24,   351,    37,    38,   354,   208,   209,
     210,   211,   359,   368,   369,    15,   363,    42,   373,    42,
      20,    63,    22,    23,    24,   394,   395,   359,   397,   315,
      50,    69,   401,   402,   351,   404,    74,    52,    53,    30,
     387,    60,   359,   390,   399,    61,   363,   416,    48,   418,
     419,    33,    34,    31,   423,    93,    43,    95,    63,   406,
     406,    49,   431,   101,   102,    45,    39,    40,    41,    42,
     387,    44,     7,    46,    48,    49,    45,   115,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    64,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    48,    49,    63,   204,   205,    24,   206,
     207,    43,    24,    24,    40,    41,    42,   212,   213,    24,
      45,    47,    48,     4,    50,    51,    52,    53,    54,    55,
      45,   169,    45,     4,    15,    42,    45,    18,    64,    20,
      21,    22,    23,    24,    15,    43,    43,    18,    43,    20,
      21,    22,    23,    24,    43,    45,    47,    45,    29,    45,
      45,    45,    43,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,    45,    43,    45,    13,    45,   224,    45,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    45,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    45,    45,    64,   214,    45,    45,   215,
     217,   216,    55,    44,    40,    41,    42,   167,   218,    39,
     238,    47,    48,   271,    50,    51,    52,    53,    54,    55,
       4,   134,    17,   229,   338,    -1,    -1,    -1,    64,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,     5,     6,     7,     8,     9,    10,    11,    12,
      64,    14,    -1,    16,    17,   343,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    47,    -1,     4,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,     4,    15,    -1,    -1,
      18,    64,    20,    21,    22,    23,    24,    15,    -1,    -1,
      18,    -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    42,    43,    44,    -1,    24,    25,
      26,    27,    28,    51,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    19,    51,    40,    41,    42,    24,    25,    26,
      27,    28,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    64,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    40,    41,    42,    24,    25,    26,
      27,    28,    -1,    -1,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    40,    41,    42,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    -1,
      -1,    15,    -1,    -1,     4,    19,    20,    64,    22,    23,
      24,    25,    26,    27,    28,    15,    -1,    -1,    18,    -1,
      20,    21,    22,    23,    24,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    43,    18,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    18,    19,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      18,    19,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    18,    19,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      50,    51,    52,    53,    54,    55,    18,    19,    20,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    18,    19,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    -1,    44,    -1,    46,
      47,    48,    -1,    50,    51,    52,    53,    54,    55,    19,
      -1,    -1,    -1,    -1,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    -1,    44,    -1,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      -1,    44,    -1,    46,    47,    -1,    -1,    50,    51,    52,
      53,    54,    55,    19,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    51,    52,    53,    54,    55,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    40,    41,    42,    24,    25,    26,    27,    28,    -1,
      -1,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    51,    52,    53,    54,    55,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    40,    41,    42,
      43,    24,    25,    26,    27,    28,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    19,    40,    41,    42,
      43,    24,    25,    26,    27,    28,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    19,    40,    41,    42,
      43,    24,    25,    26,    27,    28,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    19,    40,    41,    42,
      43,    24,    25,    26,    27,    28,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    19,    40,    41,    42,
      43,    24,    25,    26,    27,    28,    -1,    50,    51,    52,
      53,    54,    55,    -1,    -1,    19,    -1,    40,    41,    42,
      24,    25,    26,    27,    28,    -1,    -1,    50,    51,    52,
      53,    54,    55,    -1,    19,    -1,    40,    41,    42,    24,
      25,    26,    27,    28,    -1,    -1,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    40,    41,    42,     0,    -1,
      -1,    -1,     4,    -1,    -1,    50,    51,    52,    53,    54,
      55,    -1,     4,    15,    -1,    -1,    18,    -1,    20,    21,
      22,    23,    24,    15,     4,    -1,    18,    -1,    20,    21,
      22,    23,    24,    -1,    -1,    15,    -1,    -1,    18,    -1,
      20,    21,    22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    15,    18,    20,    21,    22,    23,    24,    87,
      88,    91,    92,    93,    99,   104,   116,   131,   132,   133,
      24,    47,    88,    24,    47,    24,    42,    51,    64,    89,
      90,   105,   106,   107,    88,    88,    88,     0,   132,    47,
      24,   100,   101,   102,    47,    20,    92,    94,    95,    96,
     103,   105,   103,   107,   108,    49,    64,    47,    65,    87,
      88,   124,   134,    42,    44,   106,   100,    48,    49,    65,
      94,    96,    48,    95,    63,    97,    98,   105,    96,    43,
     103,   107,    90,   105,     5,     6,     7,     8,     9,    10,
      11,    12,    14,    16,    17,    19,    24,    25,    26,    27,
      28,    40,    41,    42,    48,    50,    51,    52,    53,    54,
      55,    64,    67,    68,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      87,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      24,    47,    84,   117,    87,   124,    24,    43,    88,   109,
     110,   111,   112,    18,    45,    51,    84,   108,    48,    49,
      48,   101,    70,    83,    86,    48,    86,    49,    64,    63,
      24,   122,    42,    42,    64,    64,    24,    64,    85,    42,
      42,    86,    63,    42,    70,    63,    42,    70,    70,    24,
      85,    96,   113,    39,    40,    41,    42,    44,    46,    30,
      72,    51,    56,    57,    52,    53,    37,    38,    35,    36,
      58,    59,    33,    34,    50,    60,    61,    31,    32,    62,
      49,    64,    48,   126,    44,    46,   117,   118,   119,   120,
     121,    42,    44,   105,   107,   114,   115,    43,    49,    43,
      49,    84,   108,    45,    45,    18,    45,    51,    84,    48,
      98,    86,     7,    43,    64,    85,    87,    85,    64,    64,
      85,    85,    63,   122,   113,   122,   113,    43,    42,   107,
     114,    43,    24,    69,    84,    85,    24,    84,    72,    72,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    76,
      76,    77,    78,    79,    80,    81,    85,    84,    86,    24,
      48,    49,   117,    65,   121,    24,    43,   109,   114,    18,
      45,    51,    84,   108,   115,    42,    44,    29,   111,    24,
      45,    84,    84,    45,    45,    42,   122,    64,    85,    64,
      64,    85,    43,    43,    43,   122,    43,    43,    47,    72,
      43,    49,    45,    63,    45,    48,   117,   119,    43,    43,
      84,   108,    45,    45,    18,    45,    84,    43,   109,    18,
      45,    51,    84,   108,    45,    45,    85,    85,    64,    64,
      85,    43,    85,    64,   122,   122,   122,   118,    84,    83,
     117,    45,    84,    84,    45,    43,    84,   108,    45,    45,
      18,    45,    84,    43,    43,    43,    85,    43,    85,    64,
     122,    43,    43,    85,    13,    48,    49,    45,    45,    45,
      84,    84,    45,    64,   122,   122,    43,   122,    43,    43,
      85,   122,   122,    43,   122,    48,    45,    45,   122,   122,
     122,    43,   122,   122
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
#line 2003 "scanner.tab.c"
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
#line 142 "scanner.y"


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
