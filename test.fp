void call_fact(){
LOAD (fp+1) /* Loading x at stack index fp + 1 */
LOADI 0
LEQ
/* condition loaded */
IFN L0
/* Negation condition tested */
/* case true */
LOADI 1
GOTO L1
/* Case false */
L0:
LOAD (fp+1) /* Loading x at stack index fp + 1 */
/* Preparing fact call with 1 argument(s) */
SAVEFP
LOAD (fp+1) /* Loading x at stack index fp + 1 */
LOADI 1
SUBI
/* Argument 1 loaded */
CALL call_fact
/* Restoring P-stack, with returned value added */
RESTORE 2
MULTI
L1:
/* End if-then-else */
return;
}
