%{
#include "bool.tab.h"
#include <stdlib.h>
extern int yylval;
%}
%%
true {yylval=1;return TRUE;}
false {yylval=0;return FALSE;}
.|\n {return yytext[0];}

%%
int yywrap(){
	return 1;
}
