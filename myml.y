
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

%token ISLT ISGT ISLEQ ISGEQ ISEQ
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
%type <val_int> exp
%type <val_int> arith_exp

%start prog 
 

%%

 /* a program is a list of instruction */

prog : inst PV {printf("Afficher résultat\n");}

| prog inst PV {printf("Afficher un autre résultat\n");}
;

/* a instruction is either a value or a definition (that indeed looks like an affectation) */

inst : let_def
| exp
;



let_def : def_id
| def_fun
;

def_id : LET ID EQ exp  {set_symbol_value($2,$4); printf("/* Valeur de %s stockée à fd+%d*/\n",$2,*$2);} // return de get_symbol_value() de type symb_value_type
                                                                                                        // mais dans quelle variable le mettre ?
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
| let_exp {}
;

arith_exp : MOINS arith_exp %prec UNA {}
| arith_exp MOINS arith_exp {printf("(%d) SUBI\n",$1-$3);}
| arith_exp PLUS arith_exp {printf("(%d) ADDI\n",$1+$3);}
| arith_exp DIV arith_exp {printf("(%d) DIVI\n",$1/$3);}
| arith_exp MULT arith_exp {printf("(%d) MULTI\n",$1*$3);}
| arith_exp CONCAT arith_exp {printf("concat\n");}
| atom_exp {}
;

atom_exp : NUM { printf("LOADI %d\n", $1);}
| FLOAT //{printf("float\n");}
| STRING //{printf("string\n");}
| ID { get_symbol_value($1); printf("LOADI %s\n", $1);} // return de get_symbol_value() de type symb_value_type
| control_exp                                           // Mais dans quoi le mettre ???
| funcall_exp
| LPAR exp RPAR
;

control_exp : if_exp
;


if_exp : if cond then atom_exp else atom_exp 
;

if : IF {printf("if\n");}; 
cond : LPAR bool RPAR {printf("(\n");}; 
then : THEN {printf("then\n");}; 
else : ELSE {printf("else\n");}; 


let_exp : let_def IN atom_exp 
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
| exp comp exp
| LPAR bool RPAR
;


comp :  ISLT | ISGT | ISLEQ | ISGEQ | ISEQ
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

