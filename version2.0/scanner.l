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
#include "scanner.tab.h"
int linenum = 0;
int Wrong = 0;
int WrongIndex = 0;
int WrongLine[100];
char WrongString[100][255];
%}

%%
"\n"			linenum++;
("#"|"\\")		return SPECIAL;
("\t"|" ")
"/*"			comment();
"#include"		//return INCLUDE");
"<"{L}*".h>"		//return HEAD_FILE");
"\""{L}*".h\""		//return HEAD_FILE");

("auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"register"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while") 		return RESERVE");

{L}({L}|{D})*		return IDENTIFIER;

0[xX]{H}+{IS}?		return CONST_INT;
0{D}+{IS}?		return CONST_INT; //Integer with leading zero(s).
{D}+{IS}?		return CONST_INT; //Integer.
L?'(\\.|[^\\'])+'	return CONST_CHAR; //Char (Including escape character such '\n').
{D}+{E}{FS}?		return CONST_INT; //Integer (Including scientific notation).
{D}*"."{D}+({E})?{FS}?	return CONST_FLOAT; //Float (Including scientific notation).
{D}+"."{D}*({E})?{FS}?	return CONST_FLOAT; //Float (Including scientific notation).

L?\"(\\.|[^\\"])*\"	return STRING;

"..."			return ELLIPSIS;

(">>="|"<<="|"+="|"-="|"*="|"/="|"%="|"&="|"^="|"|="|"=") return ASSIGN;

(">>"|"<<"|"++"|"--"|"->"|"&&"|"||"|"<="|">="|"=="|"!=") return OP;

("+"|"-"|"*"|"/"|"%"|"^") return OP;

("<"|">"|"|"|"?"|"&"|"!"|"~"|".") return OP;

(";"|"{"|"<%"|"}"|"%>"|","|":"|"("|")"|"["|"<:"|"]"|":>") return PUNCTUATION;

.			{
			if(Wrong == 0) Wrong=1;
			if(WrongIndex<100){
				WrongLine[WrongIndex]=linenum;
				strcpy(WrongString[WrongIndex],yytext);
				WrongIndex++;
			} else WrongIndex++;
			return UNKNOWN;
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
	fprintf(stderr,"---- Wrong Information ----\n");
	for(i=0;i<WrongIndex;i++)
		fprintf(stderr,"Line %d encounterred illegal string \"%s\".\n",WrongLine[i],WrongString[i]);
	fprintf(stderr,"There exists %d lexical errors.\n",WrongIndex);
	if(WrongIndex>100) fprintf(stderr,"Only show the fisrt one hundred errors.\n");
}

int main()
{
	if (freopen("tokens.txt", "w", stdout)==NULL)
        	fprintf(stderr, "重定向错误！无法输出到文本\n");
	printf("---- Tokens ----\n");
	printf("Type                : Info.\n\n");
	yylex();
	printf("--------\n");
	printf("Total Column: %d \n",linenum);
	if(Wrong) show_wrong();
	else fprintf(stderr,"Lexical Right!\nYou can review the file \"tokens.txt\" to see the outcome.\n");
	fclose(stdout);
	return 0;
}
