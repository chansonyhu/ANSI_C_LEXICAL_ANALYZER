%{
#include <string.h>
#include <stdio.h>
#ifndef YYSTYPE
#define YYSTYPE int
#endif
void yyerror(char*);
%}

%token TRUE
%token FALSE
%%
line : bexpr '\n'   {if($1==1){printf("true");}else{printf("false");}}
     | '\n'         {printf("\n");}
     ;
bexpr : bexpr '&' bterm   { if(($1==1)&&($3==1)){$$=1;}else{$$=0;} }
      | bterm
      ;
bterm : bterm '|' bfactor   {if(($1==0)&&($3==0)){$$=0;}else{$$=1;}}
      | bfactor           
      ;
bfactor :'~' bfactor     {if($2==1){$$=0;}else{$$=1;}}
        | '('bexpr')'   {$$=$2;}
        |  TRUE         
        |  FALSE
	;
%%

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
