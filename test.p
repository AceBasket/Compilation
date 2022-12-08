
LOADI 3
/* Value of y stored at stack index fp+0 (l.92)*/
/* Preparing plusUn call with 1 argument(s) */
SAVEFP
LOAD (fp+0) /* Loading y at stack index fp + 0 */
/* Argument 1 loaded */
CALL call_plusUn
/* Restoring P-stack, with returned value added */
RESTORE 1
/* Value of z stored at stack index fp+1 (l.92)*/
