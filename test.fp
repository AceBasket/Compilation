void call_g(){
LOAD (fp+1) /* Loading x at stack index fp + 1 */
LOAD (fp+2) /* Loading y at stack index fp + 2 */
ADDI
return;
}
void call_f(){
LOAD (fp+1) /* Loading x at stack index fp + 1 */
LOADI 0
GT
/* condition loaded */
IFN L10
/* Negation condition tested */
/* case true */
LOADI 1
GOTO L11
/* Case false */
L10:
LOAD (fp+1) /* Loading x at stack index fp + 1 */
/* Preparing f call with 1 argument(s) */
SAVEFP
LOAD (fp+1) /* Loading x at stack index fp + 1 */
LOADI 1
SUBI
/* Argument 1 loaded */
CALL call_f
/* Restoring P-stack, with returned value added */
RESTORE 2
MULTI
L11:
/* End if-then-else */
return;
}
