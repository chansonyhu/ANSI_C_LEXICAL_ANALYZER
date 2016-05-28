#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "scanner.y"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
#ifndef YYSTYPE
#define YYSTYPE int
#endif
void yyerror(char*);

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

extern	int      yydebug;
extern	int      yynerrs;

extern	int      yyerrflag;
extern	int      yychar;
extern	YYSTYPE  yyval;
extern	YYSTYPE  yylval;
