LOADI 1
/* Value of x stored at stack index fp+0 (l.92)*/

* Preparing g call with 1 argument(s) */
SAVEFP
LOADI 1
/* Argument 1 loaded */
LOADI 2
/* Argument 2 loaded */
CALL call_g
/* Restoring P-stack, with returned value added */
RESTORE 2
/* Value of z stored at stack index fp+2 (l.92)*/
