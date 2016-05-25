D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
/*在上述定义部分，FS和IS分别表示浮点数和整数后缀*/
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
int linenum = 0;
int Wrong = 0;
int WrongIndex = 0;
int WrongLine[100];
char WrongString[100][255];
%}

%%
"\n"			linenum++;
("#"|"\\")		//return SPECIAL;
("\t"|" ")
"/*"			comment();
"#include"		//return INCLUDE;
"<"{L}*".h>"		//return HEAD_FILE;
"\""{L}*".h\""		//return HEAD_FILE;

"inline" return INLINE;
"do" return DO;
"for" return FOR;
"while" return WHILE;
"break" return BREAK;
"continue" return CONTINUE;
"goto" return GOTO;
"return" return RETURN;
"if" return IF;
"else" return ELSE;
"switch" return SWITCH;
"enum" return ENUM;
"case" return CASE;
"default" return DEFAULT;
("const"|"volatile"|"restrict") return type_qualifier;
("typedef"|"extern"|"auto"|"register") return storage_class_specifier;
"static" return STATIC;
("void"|"char"|"short"|"int"|"long"|"float"|"double"|"signed"|"unsigned") return type_specifier;
("struct"|"union") return struct_or_union;
"sizeof" return SIZEOF;


{L}({L}|{D})*		return identifier;

0[xX]{H}+{IS}?		return const_int;
0{D}+{IS}?		return const_int; //Integer with leading zero(s).
{D}+{IS}?		return const_int; //Integer.
L?'(\\.|[^\\'])+'	return const_char; //Char (Including escape character such '\n').
{D}+{E}{FS}?		return const_int; //Integer (Including scientific notation).
{D}*"."{D}+({E})?{FS}?	return const_float; //Float (Including scientific notation).
{D}+"."{D}*({E})?{FS}?	return const_float; //Float (Including scientific notation).

L?\"(\\.|[^\\"])*\"	return string_literal;

"..."			return ellipsis;

(">>="|"<<="|"+="|"-="|"*="|"/="|"%="|"&="|"^="|"|="|"=") return op_assign;

"&&" return op_and;

"||" return op_or;

"==" return op_eq;

"!=" return op_ne;

"<=" return op_le;

">=" return op_ge;

"<<" return op_lshift;

">>" return op_rshift;

"->" return op_ptr;

"++" return op_pp;

"--" return op_dd;

"/" return '/';
"%" return '%';
"^" return '^';
"&" return '&';
"*" return '*';
"+" return '+';
"-" return '-';
"~" return '~';
"!" return '!';

"<" return '<';
">" return '>';
"|" return '|';
"?" return '?';
"." return '.';

";" return ';';
("{"|"<%") return '{';
("}"|"%>") return '}';
("["|"<:") return '[';
("]"|":>") return ']';
"," return ',';
":" return ':';
"(" return '(';
")" return ')';


.			{
			if(Wrong == 0) Wrong=1;
			if(WrongIndex<100){
				WrongLine[WrongIndex]=linenum;
				strcpy(WrongString[WrongIndex],yytext);
				WrongIndex++;
			} else WrongIndex++;
			//printf("UNKNOWN LEXICAL ELEMENT\n");
			}

%%

int yywrap()
{
	return 1;
}

int check_type()
{
	return 0;
}


comment()
{
	char c, c1;
	printf("COMMENT             : ");
loop:
	while ((c = input()) != '*' && c != EOF)
		putchar(c);

	if ((c1 = input()) != '/' && c != EOF)
	{
		//unput means delete the *
		unput(c1);
		goto loop;
	}
    if (c != EOF)
		putchar(c1);
	printf("\n");
}

void show_wrong()
{
	int i;
	fprintf(stderr,"---- Lexical Wrong Information ----\n");
	for(i=0;i<WrongIndex;i++)
		fprintf(stderr,"Line %d encounterred illegal string \"%s\".\n",WrongLine[i],WrongString[i]);
	fprintf(stderr,"There exists %d lexical errors.\n",WrongIndex);
	if(WrongIndex>100) fprintf(stderr,"Only show the fisrt one hundred errors.\n");
}

