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
int linenum = 0;
int Wrong = 0;
int WrongIndex = 0;
int WrongLine[100];
char WrongString[100][255];
%}

%%
"\n"			linenum++;
("#"|"\\")		show_type("SPECIAL");
("\t"|" ")
"/*"			comment();
"#include"		//show_type("INCLUDE");
"<"{L}*".h>"		//show_type("HEAD_FILE");
"\""{L}*".h\""		//show_type("HEAD_FILE");

("auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"register"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while") 		show_type("RESERVE");

{L}({L}|{D})*		show_type("IDENTIFIER");

0[xX]{H}+{IS}?		show_type("CONST_INT");
0{D}+{IS}?		show_type("CONST_INT"); //Integer with leading zero(s).
{D}+{IS}?		show_type("CONST_INT"); //Integer.
L?'(\\.|[^\\'])+'	show_type("CONST_CHAR"); //Char (Including escape character such '\n').
{D}+{E}{FS}?		show_type("CONST_INT"); //Integer (Including scientific notation).
{D}*"."{D}+({E})?{FS}?	show_type("CONST_FLOAT"); //Float (Including scientific notation).
{D}+"."{D}*({E})?{FS}?	show_type("CONST_FLOAT"); //Float (Including scientific notation).

L?\"(\\.|[^\\"])*\"	show_type("STRING");

"..."			show_type("ELLIPSIS");

(">>="|"<<="|"+="|"-="|"*="|"/="|"%="|"&="|"^="|"|="|"=") show_type("ASSIGN");

(">>"|"<<"|"++"|"--"|"->"|"&&"|"||"|"<="|">="|"=="|"!=") show_type("OP");

("+"|"-"|"*"|"/"|"%"|"^") show_type("OP");

("<"|">"|"|"|"?"|"&"|"!"|"~"|".") show_type("OP");

(";"|"{"|"<%"|"}"|"%>"|","|":"|"("|")"|"["|"<:"|"]"|":>") show_type("PUNCTUATION");

.			{show_type("UNKNOWN");
			if(Wrong == 0) Wrong=1;
			if(WrongIndex<100){
				WrongLine[WrongIndex]=linenum;
				strcpy(WrongString[WrongIndex],yytext);
				WrongIndex++;
			} else WrongIndex++;
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

show_type(char text[])
{
	int i,num_zero;
	num_zero = 20-strlen(text);
	printf("%s",text);
	for(i=0;i<num_zero;i++) printf(" ");
	printf(": %s\n",yytext);
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
