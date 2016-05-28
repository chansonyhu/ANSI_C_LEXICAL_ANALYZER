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
#include <stdlib.h>
#include "y.tab.h"
#ifndef YYSTYPE
#define YYSTYPE int
#endif
void yyerror(char*);

/* Line 371 of yacc.c  */
#line 79 "scanner.tab.c"

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
     INLINE = 258,
     DO = 259,
     FOR = 260,
     WHILE = 261,
     BREAK = 262,
     CONTINUE = 263,
     GOTO = 264,
     RETURN = 265,
     IF = 266,
     ELSE = 267,
     SWITCH = 268,
     ENUM = 269,
     CASE = 270,
     DEFAULT = 271,
     STATIC = 272,
     SIZEOF = 273,
     type_qualifier = 274,
     storage_class_specifier = 275,
     type_specifier = 276,
     struct_or_union = 277,
     identifier = 278,
     const_int = 279,
     const_char = 280,
     const_float = 281,
     string_literal = 282,
     ellipsis = 283,
     op_assign = 284,
     op_and = 285,
     op_or = 286,
     op_eq = 287,
     op_ne = 288,
     op_le = 289,
     op_ge = 290,
     op_lshift = 291,
     op_rshift = 292,
     op_ptr = 293,
     op_pp = 294,
     op_dd = 295
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
#define YYLAST   1604

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  232
/* YYNRULES -- Number of states.  */
#define YYNSTATES  435

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    58,    55,     2,
      47,    48,    45,    43,    54,    44,    51,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,    63,
      41,    64,    42,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,    60,    53,    56,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      24,    28,    33,    37,    41,    44,    47,    54,    62,    64,
      68,    70,    73,    76,    79,    82,    87,    89,    91,    93,
      95,    97,    99,   101,   106,   108,   112,   116,   120,   122,
     126,   130,   132,   136,   140,   142,   146,   150,   154,   158,
     160,   164,   168,   170,   174,   176,   180,   182,   186,   188,
     192,   194,   198,   200,   206,   208,   212,   214,   218,   220,
     223,   227,   229,   232,   234,   237,   239,   242,   244,   247,
     249,   253,   255,   259,   261,   263,   265,   267,   269,   271,
     276,   282,   285,   287,   290,   294,   296,   299,   301,   304,
     306,   310,   312,   315,   319,   324,   330,   336,   343,   346,
     348,   352,   354,   358,   360,   362,   364,   366,   369,   371,
     375,   379,   384,   389,   395,   401,   408,   415,   420,   426,
     431,   436,   440,   442,   445,   448,   452,   454,   457,   459,
     463,   465,   469,   472,   474,   477,   479,   483,   485,   488,
     490,   492,   495,   499,   502,   506,   510,   514,   519,   524,
     529,   535,   540,   546,   552,   559,   565,   572,   576,   581,
     586,   590,   594,   597,   599,   601,   605,   610,   612,   615,
     619,   624,   627,   629,   632,   636,   639,   641,   643,   645,
     647,   649,   651,   655,   660,   664,   667,   671,   673,   676,
     678,   680,   682,   685,   691,   699,   705,   711,   719,   724,
     732,   740,   748,   757,   766,   775,   785,   792,   800,   808,
     817,   821,   824,   827,   830,   834,   836,   839,   841,   843,
     847,   852,   854
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     130,     0,    -1,    23,    -1,    24,    -1,    25,    -1,    26,
      -1,    27,    -1,    47,    84,    48,    -1,    66,    -1,    67,
      49,    84,    50,    -1,    67,    47,    48,    -1,    67,    47,
      68,    48,    -1,    67,    51,    23,    -1,    67,    38,    23,
      -1,    67,    39,    -1,    67,    40,    -1,    47,   112,    48,
      52,   117,    53,    -1,    47,   112,    48,    52,   117,    54,
      53,    -1,    83,    -1,    68,    54,    83,    -1,    67,    -1,
      39,    69,    -1,    40,    69,    -1,    70,    71,    -1,    18,
      69,    -1,    18,    47,   112,    48,    -1,    55,    -1,    45,
      -1,    43,    -1,    44,    -1,    56,    -1,    57,    -1,    69,
      -1,    47,   112,    48,    71,    -1,    71,    -1,    72,    45,
      71,    -1,    72,    46,    71,    -1,    72,    58,    71,    -1,
      72,    -1,    73,    43,    72,    -1,    73,    44,    72,    -1,
      73,    -1,    74,    36,    73,    -1,    74,    37,    73,    -1,
      74,    -1,    75,    41,    74,    -1,    75,    42,    74,    -1,
      75,    34,    74,    -1,    75,    35,    74,    -1,    75,    -1,
      76,    32,    75,    -1,    76,    33,    75,    -1,    76,    -1,
      77,    55,    76,    -1,    77,    -1,    78,    59,    77,    -1,
      78,    -1,    79,    60,    78,    -1,    79,    -1,    80,    30,
      79,    -1,    80,    -1,    81,    31,    80,    -1,    81,    -1,
      81,    61,    84,    62,    82,    -1,    82,    -1,    69,    29,
      83,    -1,    83,    -1,    84,    54,    83,    -1,    82,    -1,
      87,    63,    -1,    87,    88,    63,    -1,    90,    -1,    90,
      87,    -1,    91,    -1,    91,    87,    -1,    19,    -1,    19,
      87,    -1,   103,    -1,   103,    87,    -1,    89,    -1,    88,
      54,    89,    -1,   104,    -1,   104,    64,   116,    -1,    17,
      -1,    20,    -1,    21,    -1,    92,    -1,    98,    -1,   115,
      -1,    22,    52,    93,    53,    -1,    22,    23,    52,    93,
      53,    -1,    22,    23,    -1,    94,    -1,    93,    94,    -1,
      95,    96,    63,    -1,    91,    -1,    91,    95,    -1,   102,
      -1,   102,    95,    -1,    97,    -1,    96,    54,    97,    -1,
     104,    -1,    62,    85,    -1,   104,    62,    85,    -1,    14,
      52,    99,    53,    -1,    14,    23,    52,    99,    53,    -1,
      14,    52,    99,    54,    53,    -1,    14,    23,    52,    99,
      54,    53,    -1,    14,    23,    -1,   100,    -1,    99,    54,
     100,    -1,   101,    -1,   101,    64,    85,    -1,    23,    -1,
      19,    -1,     3,    -1,   105,    -1,   106,   105,    -1,    23,
      -1,    47,   104,    48,    -1,   105,    49,    50,    -1,   105,
      49,   107,    50,    -1,   105,    49,    83,    50,    -1,   105,
      49,   107,    83,    50,    -1,   105,    49,    17,    83,    50,
      -1,   105,    49,    17,   107,    83,    50,    -1,   105,    49,
     107,    17,    83,    50,    -1,   105,    49,    45,    50,    -1,
     105,    49,   107,    45,    50,    -1,   105,    47,   108,    48,
      -1,   105,    47,   111,    48,    -1,   105,    47,    48,    -1,
      45,    -1,    45,   107,    -1,    45,   106,    -1,    45,   107,
     106,    -1,   102,    -1,   107,   102,    -1,   109,    -1,   109,
      54,    28,    -1,   110,    -1,   109,    54,   110,    -1,    87,
     104,    -1,    87,    -1,    87,   113,    -1,    23,    -1,   111,
      54,    23,    -1,    95,    -1,    95,   113,    -1,   106,    -1,
     114,    -1,   106,   114,    -1,    47,   113,    48,    -1,    49,
      50,    -1,   114,    49,    50,    -1,    49,   107,    50,    -1,
      49,    83,    50,    -1,   114,    49,   107,    50,    -1,   114,
      49,    83,    50,    -1,    49,   107,    83,    50,    -1,   114,
      49,   107,    83,    50,    -1,    49,    17,    83,    50,    -1,
     114,    49,    17,    83,    50,    -1,    49,    17,   107,    83,
      50,    -1,   114,    49,    17,   107,    83,    50,    -1,    49,
     107,    17,    83,    50,    -1,   114,    49,   107,    17,    83,
      50,    -1,    49,    45,    50,    -1,   114,    49,    45,    50,
      -1,   114,    47,   108,    48,    -1,   114,    47,    48,    -1,
      47,   108,    48,    -1,    47,    48,    -1,    23,    -1,    83,
      -1,    52,   117,    53,    -1,    52,   117,    54,    53,    -1,
     116,    -1,   118,   116,    -1,   117,    54,   116,    -1,   117,
      54,   118,   116,    -1,   119,    64,    -1,   120,    -1,   119,
     120,    -1,    49,    85,    50,    -1,    51,    23,    -1,   122,
      -1,   123,    -1,   126,    -1,   127,    -1,   128,    -1,   129,
      -1,    23,    62,   121,    -1,    15,    85,    62,   121,    -1,
      16,    62,   121,    -1,    52,    53,    -1,    52,   124,    53,
      -1,   125,    -1,   124,   125,    -1,    86,    -1,   121,    -1,
      63,    -1,    84,    63,    -1,    11,    47,    84,    48,   121,
      -1,    11,    47,    84,    48,   121,    12,   121,    -1,    13,
      47,    84,    48,   121,    -1,     6,    47,    84,    48,   121,
      -1,     4,   121,     6,    47,    84,    48,    63,    -1,     5,
      47,    48,   121,    -1,     5,    47,    84,    63,    63,    48,
     121,    -1,     5,    47,    63,    84,    63,    48,   121,    -1,
       5,    47,    63,    63,    84,    48,   121,    -1,     5,    47,
      84,    63,    84,    63,    48,   121,    -1,     5,    47,    84,
      63,    63,    84,    48,   121,    -1,     5,    47,    63,    84,
      63,    84,    48,   121,    -1,     5,    47,    84,    63,    84,
      63,    84,    48,   121,    -1,     5,    47,    86,    63,    48,
     121,    -1,     5,    47,    86,    84,    63,    48,   121,    -1,
       5,    47,    86,    63,    84,    48,   121,    -1,     5,    47,
      86,    84,    63,    84,    48,   121,    -1,     9,    23,    63,
      -1,     8,    63,    -1,     7,    63,    -1,    10,    63,    -1,
      10,    84,    63,    -1,   131,    -1,   130,   131,    -1,   132,
      -1,    86,    -1,    87,   104,   123,    -1,    87,   104,   133,
     123,    -1,    86,    -1,   133,    86,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    26,    26,    26,    26,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    45,    45,    45,
      45,    45,    46,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    83,
      84,    85,    86,    86,    87,    88,    88,    88,    88,    89,
      89,    90,    90,    90,    91,    91,    92,    92,    93,    94,
      94,    95,    95,    96,    97,    98,    99,    99,   100,   100,
     101,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   121,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   124,   124,   125,   126,   126,   126,   127,   127,   127,
     127,   128,   129,   129,   130,   130,   131,   131,   131,   131,
     131,   131,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   137,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   140,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   144,
     144,   145,   145
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INLINE", "DO", "FOR", "WHILE", "BREAK",
  "CONTINUE", "GOTO", "RETURN", "IF", "ELSE", "SWITCH", "ENUM", "CASE",
  "DEFAULT", "STATIC", "SIZEOF", "type_qualifier",
  "storage_class_specifier", "type_specifier", "struct_or_union",
  "identifier", "const_int", "const_char", "const_float", "string_literal",
  "ellipsis", "op_assign", "op_and", "op_or", "op_eq", "op_ne", "op_le",
  "op_ge", "op_lshift", "op_rshift", "op_ptr", "op_pp", "op_dd", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'['", "']'", "'.'",
  "'{'", "'}'", "','", "'&'", "'~'", "'!'", "'%'", "'^'", "'|'", "'?'",
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
     295,    60,    62,    43,    45,    42,    47,    40,    41,    91,
      93,    46,   123,   125,    44,    38,   126,    33,    37,    94,
     124,    63,    58,    59,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      73,    74,    74,    74,    75,    75,    75,    75,    75,    76,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    92,
      92,    92,    93,    93,    94,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   101,   102,   103,   104,   104,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   115,   116,   116,   116,   117,   117,   117,
     117,   118,   119,   119,   120,   120,   121,   121,   121,   121,
     121,   121,   122,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   129,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     3,     1,     2,
       3,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     1,     2,     3,     1,     2,     1,     2,     1,
       3,     1,     2,     3,     4,     5,     5,     6,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     1,     3,
       3,     4,     4,     5,     5,     6,     6,     4,     5,     4,
       4,     3,     1,     2,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     1,     2,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     3,     4,     4,     4,
       5,     4,     5,     5,     6,     5,     6,     3,     4,     4,
       3,     3,     2,     1,     1,     3,     4,     1,     2,     3,
       4,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     1,     2,     1,
       1,     1,     2,     5,     7,     5,     5,     7,     4,     7,
       7,     7,     8,     8,     8,     9,     6,     7,     7,     8,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     3,
       4,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   115,     0,    83,    75,    84,    85,     0,   173,   228,
       0,    71,    73,    86,    87,    77,    88,     0,   225,   227,
     108,     0,    76,    91,     0,   118,   132,     0,    69,     0,
      79,    81,   116,     0,    72,    74,    78,     1,   226,     0,
     113,     0,   109,   111,     0,   114,    95,     0,    92,     0,
      97,   136,   134,   133,     0,     0,    70,     0,     0,   231,
       0,   229,     0,     0,     0,   117,     0,   104,     0,     0,
       0,    96,    89,    93,     0,     0,    99,   101,    98,   137,
     135,   119,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     0,     0,    28,    29,    27,     0,   195,    26,    30,
      31,   201,     8,    20,    32,     0,    34,    38,    41,    44,
      49,    52,    54,    56,    58,    60,    62,    64,    66,     0,
     199,   200,   186,   187,     0,   197,   188,   189,   190,   191,
       2,     0,   174,    82,   232,   230,   173,   131,   143,     0,
     138,   140,     0,     0,    27,   120,     0,     0,   105,     0,
     106,   110,    32,    68,   112,    90,   102,     0,    94,     0,
       2,     0,     0,     0,   222,   221,     0,   223,     0,     0,
       0,     0,     0,     0,    24,     0,     0,    21,    22,     2,
       0,   147,     0,     0,    14,    15,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   202,   196,   198,     0,     0,   177,     0,     0,     0,
     182,     0,     0,   142,   149,   144,   150,   129,     0,   130,
       0,     0,     0,   127,   122,     0,    27,   121,     0,   107,
     100,   103,     0,     0,     0,     0,     0,     0,   220,   224,
       0,     0,     0,   194,     0,   192,     0,     7,     0,   149,
     148,     0,    13,    10,     0,    18,     0,    12,    65,    35,
      36,    37,    39,    40,    42,    43,    47,    48,    45,    46,
      50,    51,    53,    55,    57,    59,    61,     0,    67,     0,
     185,   175,     0,   178,   181,   183,   173,   172,     0,     0,
       0,    27,   153,     0,     0,   151,     0,     0,   139,   141,
     146,   124,     0,     0,   128,   123,     0,   208,     0,     0,
       0,     0,     0,     0,     0,     0,   193,    25,     0,     0,
      33,    11,     0,     9,     0,   184,   176,   179,     0,   171,
     152,     0,     0,   167,   156,     0,   155,     0,   170,     0,
       0,    27,   154,     0,     0,   125,   126,     0,     0,     0,
       0,     0,     0,     0,     0,   206,   203,   205,     0,    19,
      63,   180,   161,     0,     0,   159,   169,     0,     0,   168,
     158,     0,   157,     0,     0,     0,     0,     0,     0,     0,
       0,   216,     0,     0,     0,     0,    16,     0,   163,   165,
     162,     0,     0,   160,   207,   211,   210,     0,   209,     0,
       0,     0,   218,   217,     0,   204,    17,   164,   166,   214,
     213,   212,     0,   219,   215
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   112,   113,   274,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     164,     9,    60,    29,    30,    11,    12,    13,    47,    48,
      49,    75,    76,    14,    41,    42,    43,    50,    15,    54,
      32,    33,    53,   308,   150,   151,   152,   192,   309,   236,
      16,   226,   227,   228,   229,   230,   131,   132,   133,   134,
     135,   136,   137,   138,   139,    17,    18,    19,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -290
static const yytype_int16 yypact[] =
{
     598,  -290,    28,  -290,   598,  -290,  -290,    48,  -290,  -290,
      36,   598,   598,  -290,  -290,   598,  -290,  1069,  -290,  -290,
     -34,    79,  -290,    54,   218,  -290,    -5,   106,  -290,   107,
    -290,   207,   230,   111,  -290,  -290,  -290,  -290,  -290,    79,
    -290,    34,  -290,    50,   218,  -290,   218,   116,  -290,    66,
     218,  -290,  -290,    -5,    84,   106,  -290,   369,  1162,  -290,
      36,  -290,    43,   790,   845,   230,   199,  -290,    29,  1477,
     182,  -290,  -290,  -290,  1477,   108,  -290,    74,  -290,  -290,
    -290,  -290,  -290,    77,   584,   112,   119,   118,   132,   192,
     640,   172,   176,  1477,   169,  1512,    55,  -290,  -290,  -290,
    -290,  1547,  1547,  -290,  -290,  -290,   810,  -290,  -290,  -290,
    -290,  -290,  -290,   160,   216,  1477,  -290,   -21,   286,   324,
     240,   338,   205,   204,   208,   250,    62,  -290,  -290,   124,
    -290,  -290,  -290,  -290,   476,  -290,  -290,  -290,  -290,  -290,
    -290,  1127,  -290,  -290,  -290,  -290,   109,  -290,    97,   239,
     236,  -290,   164,  1197,   252,  -290,   262,   880,  -290,    73,
    -290,  -290,  -290,  -290,  -290,  -290,  -290,    66,  -290,  1477,
     271,   308,   523,  1477,  -290,  -290,   277,  -290,   134,  1477,
    1477,   281,   584,   810,  -290,   584,   810,  -290,  -290,  1246,
     166,   -14,   297,   325,  -290,  -290,  1232,  1477,   335,  1477,
    -290,  1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,
    1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,  1477,
    1477,  -290,  -290,  -290,  1477,   345,  -290,   344,  1162,   103,
    -290,   428,   915,  -290,    98,  -290,   251,  -290,   416,  -290,
     358,   353,  1197,  -290,  -290,  1477,   360,  -290,   361,  -290,
    -290,  -290,   368,   584,   675,   154,   710,   190,  -290,  -290,
     224,   241,   584,  -290,   370,  -290,   372,  -290,   629,   264,
    -290,  1267,  -290,  -290,   249,  -290,   -18,  -290,  -290,  -290,
    -290,  -290,   -21,   -21,   286,   286,   324,   324,   324,   324,
     240,   240,   338,   205,   204,   208,   250,    32,  -290,   367,
    -290,  -290,  1055,  -290,  -290,  -290,   201,  -290,   379,   380,
    1197,   384,  -290,   390,   950,   251,   800,   985,  -290,  -290,
    -290,  -290,   391,   393,  -290,  -290,  1477,  -290,  1477,   159,
     745,  1302,   171,   584,   584,   584,  -290,   377,   377,  1127,
    -290,  -290,  1477,  -290,  1477,  -290,  -290,  -290,  1162,  -290,
    -290,   396,  1197,  -290,  -290,  1477,  -290,   402,  -290,   405,
    1197,   404,  -290,   424,  1020,  -290,  -290,   253,   261,  1337,
    1372,   188,   584,   268,  1407,  -290,   492,  -290,   346,  -290,
    -290,  -290,  -290,   438,   455,  -290,  -290,   456,  1197,  -290,
    -290,  1477,  -290,   457,   445,   584,   584,   283,   584,   296,
    1442,  -290,   584,   584,   305,   584,  -290,  1091,  -290,  -290,
    -290,   459,   460,  -290,  -290,  -290,  -290,   584,  -290,   584,
     584,   309,  -290,  -290,   584,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,   584,  -290,  -290
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -290,  -290,  -290,  -290,   254,  -290,  -111,   197,   198,   156,
     194,   298,   299,   295,   300,   304,  -290,   -59,   -56,   -64,
     -45,    22,     5,  -290,   458,  -290,    -3,  -290,   474,    78,
      -1,  -290,   357,  -290,   488,   -61,  -290,   -26,  -290,     1,
     -32,     2,   -41,   -51,  -290,   292,  -290,    -9,  -118,  -215,
    -290,   -55,   195,  -289,  -290,   306,   -78,  -290,     8,  -290,
     417,  -290,  -290,  -290,  -290,  -290,   519,  -290,  -290
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -174
static const yytype_int16 yytable[] =
{
      51,    65,   142,   143,   200,    10,   171,   161,   156,    22,
     163,    31,   149,   348,    45,   163,    34,    35,    39,   315,
      36,    46,    10,   157,   201,   202,   178,    79,    52,   166,
     235,    26,   343,   268,   163,   232,   220,   203,    51,    61,
      26,    46,   190,    46,    46,    71,     1,    46,   181,    78,
      77,    20,    40,    59,   315,    80,    83,     2,  -173,    25,
       3,    83,     4,     5,     6,     7,     8,    46,   148,  -173,
     145,    23,  -173,   270,  -173,  -173,  -173,  -173,  -173,   130,
      21,    26,   160,    27,   144,   142,   220,    67,    68,    25,
     279,   280,   281,   218,   344,    57,    40,   241,   161,    28,
      24,   248,    40,    46,   263,   191,    44,   265,   255,   257,
     163,    26,   242,    27,    69,   260,   261,   185,   348,   190,
      25,    25,   190,   219,   251,    73,   249,    51,    74,    25,
       2,    79,    81,   276,    25,    45,   169,     6,     7,     8,
     275,    58,    26,   278,   231,   231,   232,   232,    73,   233,
     234,    26,   224,    27,   225,   297,   130,  -145,    27,   172,
     340,    55,   167,  -145,   298,   163,   173,   304,    77,    72,
      56,   168,   142,   303,   264,   327,   313,   266,   220,   299,
      46,   174,   191,    46,   336,   191,   322,   221,   220,   323,
     329,   314,   332,   269,   256,   175,     2,   259,   193,   194,
     195,    45,    65,     6,     7,     8,    51,   196,   220,   197,
       1,   198,   239,   220,   267,   176,    79,   330,   240,   179,
     220,     2,   369,   180,     3,   220,     4,     5,     6,     7,
       8,   182,     2,   234,   374,   165,   148,    45,   333,     6,
       7,     8,   220,   148,   220,   199,   142,   347,  -118,  -118,
    -118,   400,   158,   159,   351,   375,   376,   377,   357,    57,
     214,   363,   367,   215,   368,   359,   371,   373,   216,   352,
     269,    58,   334,   148,   208,   209,   364,    63,   220,    64,
     217,   210,   211,   142,    51,   380,   379,   237,    79,   335,
     238,    51,   142,   381,   401,   220,   383,   341,   316,   384,
     317,   394,   243,   342,   387,   397,   399,   220,   393,   395,
     404,   268,   244,   232,   252,   220,   402,   415,   416,   388,
     418,   148,   220,   162,   422,   423,    79,   425,   162,   204,
     205,   417,   411,   185,    51,   412,   421,   220,    79,   429,
     258,   430,   431,   262,   419,   271,   433,   162,   272,   184,
     220,   142,   347,   424,   434,   187,   188,   432,   277,   220,
     206,   207,    79,   220,   286,   287,   288,   289,   300,   162,
     212,   213,     1,    84,    85,    86,    87,    88,    89,    90,
      91,   320,    92,     2,    93,    94,     3,    95,     4,     5,
       6,     7,    96,    97,    98,    99,   100,   301,   302,   406,
     407,   282,   283,   321,   284,   285,   290,   291,   101,   102,
     324,   325,   103,   104,   105,   326,   106,   345,   337,     1,
     338,    57,   107,   162,   108,   109,   110,   349,   350,   339,
       2,     1,   111,     3,   353,     4,     5,     6,     7,     8,
     354,   365,     2,   366,   318,     3,   382,     4,     5,     6,
       7,   306,   385,   386,   389,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,    26,   390,   231,   307,   232,   162,     1,
      84,    85,    86,    87,    88,    89,    90,    91,   408,    92,
       2,    93,    94,     3,    95,     4,     5,     6,     7,    96,
      97,    98,    99,   100,   405,   409,   410,   413,   414,   427,
     428,   294,   292,    82,   293,   101,   102,   295,    70,   103,
     104,   105,   296,   106,   250,   162,     1,    66,    57,   222,
     319,   108,   109,   110,   378,   305,    38,     2,     0,   111,
       3,    95,     4,     5,     6,     7,   189,    97,    98,    99,
     100,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,   102,     0,     0,   103,   104,   105,     0,
     106,   253,     0,     0,     0,     0,     0,     0,   108,   109,
     110,     0,     0,     0,     0,     0,   254,     0,    84,    85,
      86,    87,    88,    89,    90,    91,     0,    92,   162,    93,
      94,     1,    95,     0,     0,     0,     0,   170,    97,    98,
      99,   100,     2,     0,     0,     3,     0,     4,     5,     6,
       7,     8,     0,   101,   102,     0,     0,   103,   104,   105,
       0,   106,     1,     0,     0,     0,    57,     0,     0,   108,
     109,   110,     0,     2,     0,     0,     3,   111,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     0,    95,     0,
       0,     0,     0,   140,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,    26,     0,   268,   307,   232,   101,
     102,     0,     0,   103,   104,   105,     0,   106,     0,     0,
       0,     0,     0,    95,     0,   108,   109,   110,   140,    97,
      98,    99,   100,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,     0,     0,   103,   104,
     105,     0,   106,     0,     0,     0,     0,     0,    95,     0,
     108,   109,   110,   140,    97,    98,    99,   100,   328,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,     0,     0,   103,   104,   105,     0,   106,     0,     0,
       0,     0,     0,    95,     0,   108,   109,   110,   140,    97,
      98,    99,   100,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,     0,     0,   103,   104,
     105,     0,   106,     1,     0,     0,     0,     0,     0,     0,
     108,   109,   110,     1,     2,     0,     0,     3,   370,     4,
       5,     6,     7,   146,     2,     0,     0,     3,     0,     4,
       5,     6,     7,     8,     2,     0,     0,     0,    95,    45,
       0,     6,     7,   189,    97,    98,    99,   100,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   358,   101,
     102,     0,     0,   103,   104,   105,     0,   106,     0,     0,
       0,     0,   153,    95,    45,   108,   109,   110,   140,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,     0,     0,   103,   104,
     154,     0,   106,     0,     0,   155,     0,   245,    95,    45,
     108,   109,   110,   140,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,     0,     0,   103,   104,   246,     0,   106,     0,     0,
     247,     0,   310,    95,    45,   108,   109,   110,   140,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,     0,     0,   103,   104,
     311,     0,   106,     0,     0,   312,     0,   355,    95,    45,
     108,   109,   110,   140,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,     0,     0,   103,   104,   105,     0,   106,     0,     0,
     356,     0,   360,    95,    45,   108,   109,   110,   140,    97,
      98,    99,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   101,   102,     0,     0,   103,   104,
     361,     0,   106,     0,     0,   362,     0,   391,    95,    45,
     108,   109,   110,   140,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,     0,     0,   103,   104,   105,     0,   106,     0,    37,
     392,     0,     1,    95,     0,   108,   109,   110,   140,    97,
      98,    99,   100,     2,     0,     0,     3,     0,     4,     5,
       6,     7,     8,     0,   101,   102,     0,     0,   103,   104,
     105,     0,   106,     0,   224,     0,   225,   141,   346,    95,
     108,   109,   110,     0,   140,    97,    98,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,     0,     0,   103,   104,   105,     0,   106,     0,
     224,     0,   225,   141,   426,    95,   108,   109,   110,     0,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
     103,   104,   105,     0,   106,     0,   224,     0,   225,   141,
      95,     0,   108,   109,   110,   140,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,     0,     0,   103,   104,   105,     0,   106,
       0,     0,     0,     0,   141,    95,    45,   108,   109,   110,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
     103,   104,   105,     0,   106,     0,     0,     0,     0,  -173,
      95,     0,   108,   109,   110,   140,    97,    98,    99,   100,
    -173,     0,     0,  -173,     0,  -173,  -173,  -173,  -173,  -173,
       0,   101,   102,     0,     0,   103,   104,   105,     0,   106,
     273,     0,     0,     0,     0,    95,     0,   108,   109,   110,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
     103,   104,   105,     0,   106,     0,     0,     0,     0,   339,
      95,     0,   108,   109,   110,   140,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,     0,     0,   103,   104,   105,     0,   106,
     372,     0,     0,     0,     0,    95,     0,   108,   109,   110,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
     103,   104,   105,     0,   106,   396,     0,     0,     0,     0,
      95,     0,   108,   109,   110,   140,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,     0,     0,   103,   104,   105,     0,   106,
     398,     0,     0,     0,     0,    95,     0,   108,   109,   110,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
     103,   104,   105,     0,   106,   403,     0,     0,     0,     0,
      95,     0,   108,   109,   110,   140,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,     0,     0,   103,   104,   105,     0,   106,
     420,     0,     0,     0,     0,    95,     0,   108,   109,   110,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
     103,   104,   105,     0,   106,     0,     0,     0,     0,     0,
      95,     0,   108,   109,   110,   140,    97,    98,    99,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,     0,     0,   103,   104,   105,     0,   183,
       0,     0,     0,     0,     0,    95,     0,   108,   109,   110,
     140,    97,    98,    99,   100,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
     103,   104,   105,     0,   186,     0,     0,     0,     0,     0,
       0,     0,   108,   109,   110
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-290)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      26,    33,    58,    58,   115,     0,    84,    68,    64,     4,
      69,    10,    63,   302,    19,    74,    11,    12,    52,   234,
      15,    24,    17,    64,    45,    46,    90,    53,    26,    74,
     148,    45,    50,    47,    93,    49,    54,    58,    64,    31,
      45,    44,   106,    46,    47,    46,     3,    50,    93,    50,
      49,    23,    23,    31,   269,    53,    55,    14,     3,    23,
      17,    60,    19,    20,    21,    22,    23,    70,    63,    14,
      62,    23,    17,   191,    19,    20,    21,    22,    23,    57,
      52,    45,    53,    47,    62,   141,    54,    53,    54,    23,
     201,   202,   203,    31,    62,    52,    23,   153,   159,    63,
      52,   157,    23,   106,   182,   106,    52,   185,   172,   173,
     169,    45,   153,    47,    64,   179,   180,    62,   407,   183,
      23,    23,   186,    61,   169,    47,    53,   153,    62,    23,
      14,   157,    48,   197,    23,    19,    62,    21,    22,    23,
     196,    64,    45,   199,    47,    47,    49,    49,    70,   148,
     148,    45,    49,    47,    51,   219,   134,    48,    47,    47,
     271,    54,    54,    54,   220,   224,    47,    64,   167,    53,
      63,    63,   228,   228,   183,   253,   232,   186,    54,   224,
     183,    63,   183,   186,   262,   186,   242,    63,    54,   245,
     254,   232,   256,   191,   172,    63,    14,    63,    38,    39,
      40,    19,   234,    21,    22,    23,   232,    47,    54,    49,
       3,    51,    48,    54,    48,    23,   242,    63,    54,    47,
      54,    14,    63,    47,    17,    54,    19,    20,    21,    22,
      23,    62,    14,   231,    63,    53,   231,    19,    48,    21,
      22,    23,    54,   238,    54,    29,   302,   302,    47,    48,
      49,    63,    53,    54,   310,   333,   334,   335,   314,    52,
      55,   317,   326,    59,   328,   316,   330,   331,    60,   310,
     268,    64,    48,   268,    34,    35,   317,    47,    54,    49,
      30,    41,    42,   339,   310,   344,   342,    48,   314,    48,
      54,   317,   348,   348,   372,    54,   352,    48,    47,   355,
      49,    48,    50,    54,   360,   369,   370,    54,   364,    48,
     374,    47,    50,    49,     6,    54,    48,   395,   396,   360,
     398,   316,    54,    69,   402,   403,   352,   405,    74,    43,
      44,    48,   388,    62,   360,   391,   400,    54,   364,   417,
      63,   419,   420,    62,    48,    48,   424,    93,    23,    95,
      54,   407,   407,    48,   432,   101,   102,    48,    23,    54,
      36,    37,   388,    54,   208,   209,   210,   211,    23,   115,
      32,    33,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    23,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    53,    54,    53,
      54,   204,   205,    50,   206,   207,   212,   213,    39,    40,
      50,    50,    43,    44,    45,    47,    47,    50,    48,     3,
      48,    52,    53,   169,    55,    56,    57,    48,    48,    52,
      14,     3,    63,    17,    50,    19,    20,    21,    22,    23,
      50,    50,    14,    50,    28,    17,    50,    19,    20,    21,
      22,    23,    50,    48,    50,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,    45,    50,    47,    48,    49,   224,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    50,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    12,    50,    50,    50,    63,    50,
      50,   216,   214,    55,   215,    39,    40,   217,    44,    43,
      44,    45,   218,    47,   167,   271,     3,    39,    52,    53,
     238,    55,    56,    57,   339,   229,    17,    14,    -1,    63,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    63,    -1,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,   344,    15,
      16,     3,    18,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    14,    -1,    -1,    17,    -1,    19,    20,    21,
      22,    23,    -1,    39,    40,    -1,    -1,    43,    44,    45,
      -1,    47,     3,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    57,    -1,    14,    -1,    -1,    17,    63,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    47,    48,    49,    39,
      40,    -1,    -1,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    55,    56,    57,    23,    24,
      25,    26,    27,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      55,    56,    57,    23,    24,    25,    26,    27,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    55,    56,    57,    23,    24,
      25,    26,    27,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      45,    -1,    47,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,     3,    14,    -1,    -1,    17,    63,    19,
      20,    21,    22,    23,    14,    -1,    -1,    17,    -1,    19,
      20,    21,    22,    23,    14,    -1,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    39,
      40,    -1,    -1,    43,    44,    45,    -1,    47,    -1,    -1,
      -1,    -1,    17,    18,    19,    55,    56,    57,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      45,    -1,    47,    -1,    -1,    50,    -1,    17,    18,    19,
      55,    56,    57,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    45,    -1,    47,    -1,    -1,
      50,    -1,    17,    18,    19,    55,    56,    57,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      45,    -1,    47,    -1,    -1,    50,    -1,    17,    18,    19,
      55,    56,    57,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    45,    -1,    47,    -1,    -1,
      50,    -1,    17,    18,    19,    55,    56,    57,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      45,    -1,    47,    -1,    -1,    50,    -1,    17,    18,    19,
      55,    56,    57,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    43,    44,    45,    -1,    47,    -1,     0,
      50,    -1,     3,    18,    -1,    55,    56,    57,    23,    24,
      25,    26,    27,    14,    -1,    -1,    17,    -1,    19,    20,
      21,    22,    23,    -1,    39,    40,    -1,    -1,    43,    44,
      45,    -1,    47,    -1,    49,    -1,    51,    52,    53,    18,
      55,    56,    57,    -1,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    44,    45,    -1,    47,    -1,
      49,    -1,    51,    52,    53,    18,    55,    56,    57,    -1,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    -1,    49,    -1,    51,    52,
      18,    -1,    55,    56,    57,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    -1,    52,    18,    19,    55,    56,    57,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,     3,
      18,    -1,    55,    56,    57,    23,    24,    25,    26,    27,
      14,    -1,    -1,    17,    -1,    19,    20,    21,    22,    23,
      -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    55,    56,    57,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    52,
      18,    -1,    55,    56,    57,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    55,    56,    57,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      18,    -1,    55,    56,    57,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    55,    56,    57,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    -1,
      18,    -1,    55,    56,    57,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,    47,
      48,    -1,    -1,    -1,    -1,    18,    -1,    55,    56,    57,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    55,    56,    57,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    45,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    55,    56,    57,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    14,    17,    19,    20,    21,    22,    23,    86,
      87,    90,    91,    92,    98,   103,   115,   130,   131,   132,
      23,    52,    87,    23,    52,    23,    45,    47,    63,    88,
      89,   104,   105,   106,    87,    87,    87,     0,   131,    52,
      23,    99,   100,   101,    52,    19,    91,    93,    94,    95,
     102,   102,   106,   107,   104,    54,    63,    52,    64,    86,
      87,   123,   133,    47,    49,   105,    99,    53,    54,    64,
      93,    95,    53,    94,    62,    96,    97,   104,    95,   102,
     106,    48,    89,   104,     4,     5,     6,     7,     8,     9,
      10,    11,    13,    15,    16,    18,    23,    24,    25,    26,
      27,    39,    40,    43,    44,    45,    47,    53,    55,    56,
      57,    63,    66,    67,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      86,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      23,    52,    83,   116,    86,   123,    23,    48,    87,   108,
     109,   110,   111,    17,    45,    50,    83,   107,    53,    54,
      53,   100,    69,    82,    85,    53,    85,    54,    63,    62,
      23,   121,    47,    47,    63,    63,    23,    63,    84,    47,
      47,    85,    62,    47,    69,    62,    47,    69,    69,    23,
      84,    95,   112,    38,    39,    40,    47,    49,    51,    29,
      71,    45,    46,    58,    43,    44,    36,    37,    34,    35,
      41,    42,    32,    33,    55,    59,    60,    30,    31,    61,
      54,    63,    53,   125,    49,    51,   116,   117,   118,   119,
     120,    47,    49,   104,   106,   113,   114,    48,    54,    48,
      54,    83,   107,    50,    50,    17,    45,    50,    83,    53,
      97,    85,     6,    48,    63,    84,    86,    84,    63,    63,
      84,    84,    62,   121,   112,   121,   112,    48,    47,   106,
     113,    48,    23,    48,    68,    83,    84,    23,    83,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    76,    77,    78,    79,    80,    84,    83,    85,
      23,    53,    54,   116,    64,   120,    23,    48,   108,   113,
      17,    45,    50,    83,   107,   114,    47,    49,    28,   110,
      23,    50,    83,    83,    50,    50,    47,   121,    63,    84,
      63,    63,    84,    48,    48,    48,   121,    48,    48,    52,
      71,    48,    54,    50,    62,    50,    53,   116,   118,    48,
      48,    83,   107,    50,    50,    17,    50,    83,    48,   108,
      17,    45,    50,    83,   107,    50,    50,    84,    84,    63,
      63,    84,    48,    84,    63,   121,   121,   121,   117,    83,
      82,   116,    50,    83,    83,    50,    48,    83,   107,    50,
      50,    17,    50,    83,    48,    48,    48,    84,    48,    84,
      63,   121,    48,    48,    84,    12,    53,    54,    50,    50,
      50,    83,    83,    50,    63,   121,   121,    48,   121,    48,
      48,    84,   121,   121,    48,   121,    53,    50,    50,   121,
     121,   121,    48,   121,   121
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
#line 2031 "scanner.tab.c"
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
#line 147 "scanner.y"


#pragma comment(lib,"yl.lib")
extern FILE * yyin;
extern int linenum;
extern void show_wrong();
extern int WrongIndex;
extern int WrongLine[100];
extern int WrongString[100][255];
extern int Wrong;
extern char yytext[];
void yyerror(char* s) {
	printf("---- Syntax Wrong Information ----\n");
	printf("Line %d encounterred %s \"%s\".\n",linenum,s,yytext);
	//printf("Line %d: %s \n",linenum,s);
}
int main(void)
{
	yyin=stdin;
	printf("Start analysing\n");
	yyparse();
	if(Wrong) show_wrong();
	return 0;
}
