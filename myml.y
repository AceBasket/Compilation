
%{

  // header included in y.tab.h
#include "Attribut.h"  
#include "Table_des_symboles.h"
#include <stdio.h>
#include <string.h>

FILE * file_in = NULL;
FILE * file_out = NULL;
FILE * file_out_function = NULL;
  
extern int yylex();
extern int yyparse();

int offset = 0;
int label_number = 0;
int nb_if = 0;
int arg_nb = 1;
int fp = 0;
// char *func_name = "";


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

%type <val_string> fun_head
%type <val_string> funcall_exp
%type <val_string> fid
%type <val_string> def_id
%type <val_string> comp
%type <val_int> exp
%type <val_int> arith_exp
%type <val_int> arg_list
%type <val_int> atom_exp
%type <val_int> if
%type <val_int> then
%type <val_int> else

%start prog 
 

%%

 /* a program is a list of instruction */

prog : inst PV {printf("\n");}

| prog inst PV //{printf("/* Fin d'une autre instruction */\n\n");}
;

/* a instruction is either a value or a definition (that indeed looks like an affectation) */

inst : let_def
| exp {printf("DROP\n/* Dropping useless value */\n");}
;



let_def : def_id {}
| def_fun {file_out = fopen("test.p", "w"); stdout = file_out; fclose(file_out_function);}
;

def_id : LET ID EQ exp  {add_symbol_value($2,offset); printf("/* Value of %s stored at stack index fp+%d (l.92)*/\n", $2, offset++);}
;
def_fun : LET fun_head EQ exp {printf("return;\n}\n"); offset = get_symbol_value($2); delete_symbol_value();}
;

fun_head : ID LPAR id_list RPAR {$$ = $1; file_out_function = fopen("test.fp", "w"); stdout = file_out_function; printf("void call_%s(){\n", $1);} //  
/* fun_head : ID LPAR id_list RPAR {fp = offset; offset = 0; add_symbol_value($1, offset); offset++; printf("void call_%s(){\n", $1);} //  stdout = fopen("test.fp", "w"); */
;

id_list : ID {add_symbol_value($<val_string>-1, offset++); add_symbol_value($1, offset++);} 
// 1re règle exécutée lors de la déclaration d'une fonction --> on stocke l'offset avant déclaration de la fonction dans la table des symbol avec le nom de la fonction comme symbol
| id_list VIR ID {add_symbol_value($3, offset++);}
;


exp : arith_exp {}
| let_exp {}
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
| FLOAT {}
| STRING {}
| ID {printf("LOAD (fp+%d) /* Loading %s at stack index fp + %d */\n", get_symbol_value($1), $1, get_symbol_value($1));} 
| control_exp {}                                           
| funcall_exp {}//; printf("fp = %d and offset = %d\n", fp, offset);} //arg_nb = 1; 
| LPAR exp RPAR {}
;

control_exp : if_exp {}
;


if_exp : if cond then atom_exp else atom_exp {printf("L%d:\n/* End if-then-else */\n",label_number+1); label_number = label_number - (2*(nb_if-1));}
;
/* Comment numeroter les labels ?

Chaque if correspond a un multiple de 2 différents
Ajouter 2 au label_number à chque ouverture de if, et incrementer le compteur de if (nb_if)
A la fin d'une boucle if: décrémenter correctement le label_number ( actuellement retire 2*(nb_if-1) )
*/
if : IF {label_number = 2*nb_if; nb_if = nb_if +1; $$ = label_number;}; 
cond : LPAR bool RPAR {}; 
then : THEN {$$ = $<val_int>-1; printf("IFN L%d\n/* Negation condition tested */\n/* case true */\n", $$);}; 
else : ELSE {$$ = $<val_int>-1; printf("GOTO L%d\n/* Case false */\nL%d:\n", $$+1, $$);}; 


let_exp : let_def IN atom_exp {delete_symbol_value(); offset--; printf("DRCP  (l.151)\n");}// /* Replacing local symbol %s by expression result */\n", $3);}
| let_def IN let_exp {delete_symbol_value(); offset--; printf("DRCP (l.152)\n");}
;

funcall_exp : fid LPAR arg_list RPAR {$$=$1; printf("CALL call_%s\n", $1); offset = get_symbol_value($1); printf("/* Restoring P-stack, with returned value added */\nRESTORE %d\n", $3);}
;
 
fid: ID {printf("/* Preparing %s call with %d argument(s) */\nSAVEFP\n", $1, arg_nb); $$=$1; add_symbol_value($1, offset);}
;

arg_list : arith_exp {$$ = 1; printf("/* Argument %d loaded */\n",$$);}
| arg_list VIR  arith_exp {$$ = $1 + 1; printf("/* Argument %d loaded */\n",$$);}
;

bool : BOOL
| bool OR bool
| bool AND bool
| NOT bool %prec UNA 
| exp comp exp {printf("\n /* condition loaded */\n");}
| LPAR bool RPAR
;


comp :  ISLT {$$ = "LT";}
| ISGT {$$ = "GT";}
| ISLEQ {$$ = "LEQ";}
| ISGEQ {$$ = "GEQ";}
| ISEQ {$$ = "EQ";}
;

%% 
int main () {
    /* The code below is just a standard usage example.
    Of course, it can be changed at will.

    for instance, one could grab input and ouput file names 
    in command line arguements instead of having them hard coded */

    stderr = stdin;

    /* opening target code file and redirecting stdout on it */
    file_out = fopen("test.p","w");
    stdout = file_out; 

    /* openng source code file and redirecting stdin from it */
    file_in = fopen("testExemple.ml","r"); 
    stdin = file_in; 

    /* As a starter, one may comment the above line for usual stdin as input */

    yyparse();

    /* any open file shall be closed */
    fclose(file_out);
    fclose(file_in);
 
    return 1;
} 

