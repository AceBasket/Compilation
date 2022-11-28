
%{

  // header included in y.tab.h
#include "Attribut.h"  
#include "Table_des_symboles.h"
#include <stdio.h>
#include <string.h>

FILE * file_in = NULL;
FILE * file_out = NULL;
  
extern int yylex();
extern int yyparse();
int offset = 0;
void yyerror (char* s) {
   printf("\n%s\n",s);
 }

%}



%union{
  int val_int;
  char* val_string;
  float val_float;
}

%token <val_int> NUM <val_float> FLOAT <val_string> ID <val_string> STRING

%token PV LPAR RPAR LET IN VIR

%token IF THEN ELSE

%token <val_string>ISLT <val_string>ISGT <val_string>ISLEQ <val_string>ISGEQ <val_string>ISEQ
%left ISEQ
%left ISLT ISGT ISLEQ ISGEQ


%token AND OR NOT BOOL
%left OR
%left AND



%token PLUS MOINS MULT DIV EQ
%left PLUS MOINS
%left MULT DIV
%left CONCAT
%nonassoc UNA    /* pseudo token pour assurer une priorite locale */

%type <val_string> def_id
%type <val_string> comp
%type <val_int> exp
%type <val_int> arith_exp
%type <val_int> atom_exp

%start prog 
 

%%

 /* a program is a list of instruction */

prog : inst PV {printf("/* fin d'une instruction */\n");}

| prog inst PV {printf("/* fin d'une autre instruction */\n");}
;

/* a instruction is either a value or a definition (that indeed looks like an affectation) */

inst : let_def
| exp {printf("DROP\n/* dropping useless value */");}
;



let_def : def_id
| def_fun
;

def_id : LET ID EQ exp  {add_symbol_value($2,offset); printf("/* Value of %s stored at stack index fp+%d*/\n",$2,offset++);}
// creer un offset/ le stocker dans la table des symboles/ 
; // lorsqu'on utilise la variable il faut aller lire l'adresse dans la table des symboles
// fp = frame pointer / sp = stack pointer
def_fun : LET fun_head EQ exp {printf("Une définition de fonction\n");}
;

fun_head : ID LPAR id_list RPAR 
;

id_list : ID
| id_list VIR ID
;


exp : arith_exp {}
| let_exp {printf("local symbol\n");}
;

arith_exp : MOINS arith_exp %prec UNA {}
| arith_exp MOINS arith_exp {printf("SUBI\n");}
| arith_exp PLUS arith_exp {printf("ADDI\n");}
| arith_exp DIV arith_exp {printf("DIVI\n");}
| arith_exp MULT arith_exp {printf("MULTI\n");}
| arith_exp CONCAT arith_exp {printf("concat\n");}
| atom_exp {}
;

atom_exp : NUM {printf("LOADI %d\n", $1);}
| FLOAT {}//{printf("float\n");}
| STRING {}//{printf("string\n");}
| ID {printf("LOAD (fp+%d)\n /*Loading %s at stack index fp + %d*/\n", get_symbol_value($1), $1, get_symbol_value($1));} 
| control_exp {}                                           
| funcall_exp {}
| LPAR exp RPAR {}
;

control_exp : if_exp
;


if_exp : if cond then atom_exp else atom_exp {printf("L1:\n /*End if-then-else */\n ");}
;
/* Comment numeroter les labels ?
mettre des %d dans les printf des IFN  et GOTO
IF {$$ = nvl_int();}; // nvl_int = make_Num() ??
THEN {$$ = $<inf_int>-1;}; //$$ = attribut que pour le if
ELSE {$$ = $<inf_int>-1;} //$$ = meme attribut que pour le then 
label du else (LE) pair 
label du court_circuit du else (LCCE) impair

pour en creer des nouveaux prendre le label L: 
  nouveau LE = 2*L
  nouveau LCCE = 2*L+1 
*/
if : IF {}; 
cond : LPAR bool RPAR {}; 
then : THEN {printf("IFN L0\n /* negation condition tested*/\n /*case true*/\n");}; 
else : ELSE {printf("GOTO L1\n /* case false*/\n L0:\n");}; 


let_exp : let_def IN atom_exp {delete_symbol_value(); offset--; printf("DRCP\n");}
| let_def IN let_exp
;

funcall_exp : ID LPAR arg_list RPAR
;

arg_list : arith_exp
| arg_list VIR  arith_exp
;

bool : BOOL
| bool OR bool
| bool AND bool
| NOT bool %prec UNA 
| exp comp exp {printf("%s\n /*condition loaded*/\n", $2);}
| LPAR bool RPAR
;


comp :  ISLT {$$ = "LT";}
| ISGT {$$ = "GT";}
| ISLEQ {$$ = "LEQ";}
| ISGEQ {$$ = "GEQ";}
| ISEQ {$$ = "EQ";}
/* 
comp :  ISLT {printf("ISLT\n");}
| ISGT {printf("ISGT\n");}
| ISLEQ {printf("ISLEQ\n");}
| ISGEQ {printf("ISGEQ\n");}
| ISEQ {printf("ISEQ\n");} */
;

%% 
int main () {
    /* The code below is just a standard usage example.
    Of course, it can be changed at will.

    for instance, one could grab input and ouput file names 
    in command line arguements instead of having them hard coded */

    stderr = stdin;

    /* opening target code file and redirecting stdout on it */
    /* file_out = fopen("test.p","w");
    stdout = file_out;  */

    /* openng source code file and redirecting stdin from it */
    /* file_in = fopen("test.ml","r"); */
    /* stdin = file_in;  */

    /* As a starter, one may comment the above line for usual stdin as input */

    yyparse();

    /* any open file shall be closed */
    /* fclose(file_out); */
    /* fclose(file_in); */
 
    return 1;
} 

