%{
#include <string.h>
#include <stdio.h>
#include "y.tab.h"
#ifndef YYSTYPE
#define YYSTYPE int
#endif
void yyerror(char*);
%}

%token special
%token inline do for while break continue goto return if else switch enum case default static sizeof
%token type_qualifier storage_class_specifier type_specifier struct_or_union
%token identifier const_int const_char const_float string_literal
%token ellipsis
%token op_assign op_and op_or op_eq op_ne op_le op_ge op_lshift op_rshift op_ptr op_pp op_dd

%start translation_unit
%nonassoc ')'
%nonassoc else
%%

primary_expr 	: typedef_name | const_int | const_char | const_float | string_literal | '(' expr ')';
postfix_expr 	: primary_expr
		| postfix_expr '[' expr ']'
		| postfix_expr '(' argument_expr_list ')'
		| postfix_expr '.' identifier
		| postfix_expr op_ptr identifier
		| postfix_expr op_pp
		| postfix_expr op_dd
		| '(' type_name ')' '{' init_list '}' 
		| '(' type_name ')' '{' init_list ',' '}';
argument_expr_list 	: assignment_expr
			| argument_expr_list ',' assignment_expr;
unary_expr	: postfix_expr
		| op_pp unary_expr
		| op_dd unary_expr
		| op_unary cast_expr
		| sizeof unary_expr
		| sizeof '(' type_name ')';
op_unary :'&' | '*' | '+' | '-' | '~' | '!' ;
cast_expr	: unary_expr | '(' type_name ')' cast_expr;
multiplicative_expr	: cast_expr
			| multiplicative_expr '*' cast_expr
			| multiplicative_expr '/' cast_expr
			| multiplicative_expr '%' cast_expr;
additive_expr	: multiplicative_expr
		| additive_expr '+' multiplicative_expr
		| additive_expr '-' multiplicative_expr;
shift_expr	: additive_expr
		| shift_expr op_lshift additive_expr
		| shift_expr op_rshift additive_expr;
relational_expr	: shift_expr
		| relational_expr '<' shift_expr
		| relational_expr '>' shift_expr
		| relational_expr op_le shift_expr
		| relational_expr op_ge shift_expr;
equality_expr	: relational_expr
		| equality_expr op_eq relational_expr
		| equality_expr op_ne relational_expr;
AND_expr	: equality_expr |  AND_expr '&' equality_expr;
ex_OR_expr	: AND_expr | ex_OR_expr '^' AND_expr;
in_OR_expr 	: ex_OR_expr |  in_OR_expr '|' ex_OR_expr;
logical_AND_expr: in_OR_expr | logical_AND_expr op_and in_OR_expr;
logical_OR_expr	: logical_AND_expr | logical_OR_expr op_or logical_AND_expr;
conditional_expr: logical_OR_expr | logical_OR_expr '?' expr ':' conditional_expr;
assignment_expr	: conditional_expr | unary_expr op_assign assignment_expr;
expr	 	: assignment_expr | expr  ',' assignment_expr;
constant_expr	: conditional_expr;
declaration	: declaration_spec ';' | declaration_spec init_declarator_list ';';
declaration_spec: storage_class_spec | storage_class_spec declaration_spec 
		| type_spec | type_spec declaration_spec 
		| type_qualifier | type_qualifier declaration_spec
		| func_spec | func_spec declaration_spec;
init_declarator_list	: init_declarator | init_declarator_list ',' init_declarator;
init_declarator	: declarator | declarator '=' initializer;
storage_class_spec	: static | storage_class_specifier;
type_spec	: type_specifier | struct_or_union_spec | enum_spec | identifier; 
struct_or_union_spec	: struct_or_union '{' struct_declaration_list '}' 
			| struct_or_union identifier '{' struct_declaration_list '}'
			| struct_or_union identifier;
struct_declaration_list	: struct_declaration | struct_declaration_list struct_declaration;
struct_declaration	: spec_qual_list struct_declarator_list ';';
spec_qual_list	: type_spec | type_spec spec_qual_list | type_qual | type_qual spec_qual_list;
struct_declarator_list	: struct_declarator | struct_declarator_list ',' struct_declarator;
struct_declarator	: declarator | ':' constant_expr | declarator ':' constant_expr;
enum_spec	: enum '{' enum_list '}' | enum identifier '{' enum_list '}'
		| enum '{' enum_list ',' '}' | enum identifier '{' enum_list ',' '}'
		| enum identifier;
enum_list	: enumerator | enum_list ',' enumerator;
enumerator	: enum_constant | enum_constant '=' constant_expr;
enum_constant 	: identifier;
type_qual	: type_qualifier;
func_spec	: inline;
declarator	: direct_declarator | pointer direct_declarator;
direct_declarator	: identifier | '(' declarator ')'
			| direct_declarator '[' ']' | direct_declarator '[' type_qual_list ']'
			| direct_declarator '[' assignment_expr ']'
			| direct_declarator '[' type_qual_list assignment_expr ']'
			| direct_declarator '[' static assignment_expr ']'
			| direct_declarator '[' static type_qual_list assignment_expr ']'
			| direct_declarator '[' type_qual_list static assignment_expr ']'
			| direct_declarator '[' '*' ']'
			| direct_declarator '[' type_qual_list '*' ']'
			| direct_declarator '(' para_type_list ')'
			| direct_declarator '(' ')'
			| direct_declarator '(' identifier_list ')';
pointer		: '*' | '*' type_qual_list | '*' pointer | '*' type_qual_list pointer;
type_qual_list	: type_qual | type_qual_list type_qual;
para_type_list	: para_list | para_list ',' ellipsis;
para_list	: para_declaration | para_list ',' para_declaration;
para_declaration: declaration_spec declarator | declaration_spec | declaration_spec abstract_declarator;
identifier_list	: identifier | identifier_list ',' identifier;
type_name	: spec_qual_list | spec_qual_list abstract_declarator;
abstract_declarator	: pointer | direct_abstract_declarator | pointer direct_abstract_declarator;
direct_abstract_declarator	: '(' abstract_declarator ')' | '[' ']' | direct_abstract_declarator '[' ']' |  '[' type_qual_list ']' |  '[' assignment_expr ']' |  direct_abstract_declarator '[' type_qual_list ']' |  direct_abstract_declarator '[' assignment_expr ']' |  '[' type_qual_list assignment_expr ']' |  direct_abstract_declarator '[' type_qual_list assignment_expr ']' 
				| '[' static assignment_expr ']' | direct_abstract_declarator '[' static assignment_expr ']' | '[' static type_qual_list assignment_expr ']' | direct_abstract_declarator '[' static type_qual_list assignment_expr ']' 
				| '[' type_qual_list static assignment_expr ']' | direct_abstract_declarator '[' type_qual_list static assignment_expr ']' 
				| '[' '*' ']' | direct_abstract_declarator '[' '*' ']'
				| '(' ')' | direct_abstract_declarator '(' ')' | '(' para_type_list ')' | direct_abstract_declarator '(' para_type_list ')';
typedef_name	: identifier; 
initializer	: assignment_expr | '{' init_list '}' | '{' init_list ',' '}';
init_list	: initializer | designation initializer | init_list ',' initializer | init_list ',' designation initializer;
designation	: designator_list '=';
designator_list	: designator | designator_list designator;
designator	: '[' constant_expr ']' | '.' identifier;
statement	: labeled_statement | compound_statement | expr_statement | selection_statement | iteration_statement | jump_statement;
labeled_statement	: identifier ':' statement | case constant_expr ':' statement | default ':' statement;
compound_statement	: '{' '}' | '{' block_item_list '}';
block_item_list	: block_item | block_item_list block_item;
block_item	: declaration | statement;
expr_statement	: ';' | expr ';';
selection_statement	: if '(' expr ')' statement | if '(' expr ')' statement else statement | switch '(' expr ')' statement;
iteration_statement	: while '(' expr ')' statement | do statement while '(' expr ')' ';'
			| for '(' ')' statement | for '(' expr ';' ';' ')' statement | for '(' ';' expr ';' ')' statement | for '(' ';' ';' expr ')' statement | for '(' expr ';' expr ';' ')' statement | for '(' expr ';' ';' expr ')' statement | for '(' ';' expr ';' expr ')' statement | for '(' expr ';' expr ';' expr ')' statement 
			| for '(' declaration ';' ')' statement | for '(' declaration expr ';' ')' statement | for '(' declaration ';' expr ')' statement | for '(' declaration expr ';' expr ')' statement;
jump_statement	: goto identifier ';' | continue ';' | break ';' | return';' | return expr ';';
translation_unit	: external_declaration | translation_unit external_declaration;
external_declaration	: func_definition | declaration;
func_definition	: declaration_spec declarator compound_statement | declaration_spec declarator declaration_list compound_statement;
declaration_list	: declaration | declaration_list declaration;

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
