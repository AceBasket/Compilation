%option noyywrap
/* avoid dependency with library fl */

%{ 
#include "y.tab.h"
#include "Table_des_symboles.h"
#include <stdio.h>

%}

whitespace          [ \t\r\n\f]+

digit               [0-9]
alpha               [a-zA-Z]
alphanum            [a-zA-Z0-9]

integer             [[:digit:]]+
float               [[:digit:]]+\.[[:digit:]]*
boolean             "true"|"false"

escape              \\([\\"'ntbr ])
string              \"({escape}|[^"\\])*\"

all_but_star        []


identifier          [[:alpha:]][[:alnum:]_]*

%% 
"/*".*"*/"   /* commentaire en ML */
"++"         {return CONCAT;}
"+"          {return PLUS;}
"-"          {return MOINS;}
"*"          {return MULT;}
"/"          {return DIV;}
"="          {return EQ;}
"<"          {return ISLT;}
">"          {return ISGT;}
"<="         {return ISLEQ;}
">="         {return ISGEQ;}
"=="         {return ISEQ;}

"let"        {return LET;}
"in"         {return IN;}
"if"         {return IF;}
"then"       {return THEN;}
"else"       {return ELSE;}


{boolean}    {return BOOL;}

"("          {return LPAR;}
")"          {return RPAR;}
","          {return VIR;}
";"          {return PV;}

{float}      {yylval.val_float = atof(yytext); return FLOAT; }
{integer}    {yylval.val_int = atoi(yytext); return NUM; }
{identifier} {yylval.val_string = string_to_sid(yytext); return ID;}
{string}     {return STRING;}
{whitespace} ;
