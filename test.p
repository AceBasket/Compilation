LOADI 1
DROP
/* Dropping useless value */

LOADI 1
LOADI 2
ADDI
DROP
/* Dropping useless value */

LOADI 1
LOADI 2
LOADI 3
MULTI
ADDI
DROP
/* Dropping useless value */

LOADI 1
/* Value of x stored at stack index fp+0*/

LOADI 2
/* Value of y stored at stack index fp+1*/

LOADI 1
LOADI 2
LOAD (fp+0) /* Loading x at stack index fp + 0 */
MULTI
ADDI
/* Value of y stored at stack index fp+2*/

LOADI 2
LOAD (fp+0) /* Loading x at stack index fp + 0 */
MULTI
LOAD (fp+2) /* Loading y at stack index fp + 2 */
ADDI
DROP
/* Dropping useless value */

LOADI 1
/* Value of x stored at stack index fp+3*/

LOADI 2
/* Value of x stored at stack index fp+4*/
LOAD (fp+4) /* Loading x at stack index fp + 4 */
DRCP
/* Replacing local symbol x by expression result */
DROP
/* Dropping useless value */

LOADI 2
/* Value of x stored at stack index fp+4*/
LOADI 3
/* Value of x stored at stack index fp+5*/
LOAD (fp+5) /* Loading x at stack index fp + 5 */
DRCP
/* Replacing local symbol x by expression result */
DRCP
DROP
/* Dropping useless value */

LOADI 10
/* Value of x stored at stack index fp+4*/

LOAD (fp+4) /* Loading x at stack index fp + 4 */
LOADI 1
GT
/* condition loaded */
IFN L0
/* Negation condition tested */
/* case true */
LOADI 1
GOTO L1
/* Case false */
L0:
LOADI 0
L1:
/* End if-then-else */
DROP
/* Dropping useless value */

LOAD (fp+4) /* Loading x at stack index fp + 4 */
LOADI 1
GT
/* condition loaded */
IFN L2
/* Negation condition tested */
/* case true */
LOAD (fp+4) /* Loading x at stack index fp + 4 */
GOTO L3
/* Case false */
L2:
LOADI 3
LOAD (fp+4) /* Loading x at stack index fp + 4 */
MULTI
L3:
/* End if-then-else */
/* Value of y stored at stack index fp+5*/

LOAD (fp+4) /* Loading x at stack index fp + 4 */
LOADI 1
GT
/* condition loaded */
IFN L4
/* Negation condition tested */
/* case true */
LOAD (fp+5) /* Loading y at stack index fp + 5 */
LOADI 3
GT
/* condition loaded */
IFN L6
/* Negation condition tested */
/* case true */
LOADI 0
GOTO L7
/* Case false */
L6:
LOADI 1
L7:
/* End if-then-else */
GOTO L5
/* Case false */
L4:
LOAD (fp+5) /* Loading y at stack index fp + 5 */
LOADI 5
LT
/* condition loaded */
IFN L8
/* Negation condition tested */
/* case true */
LOADI 2
GOTO L9
/* Case false */
L8:
LOADI 3
L9:
/* End if-then-else */
L1:
/* End if-then-else */
/* Value of z stored at stack index fp+6*/

/* Function g defined in separated file */

/* Preparing g call with 1 argument(s) */
SAVEFP
LOADI 1
/* Argument 1 loaded */
LOADI 2
/* Argument 2 loaded */
CALL call_g
/* Restoring P-stack, with returned value added */
RESTORE 7
DROP
/* Dropping useless value */

LOAD (fp+1) /* Loading x at stack index fp + 1 */
/* Preparing f call with 1 argument(s) */
SAVEFP
LOAD (fp+1) /* Loading x at stack index fp + 1 */
LOADI 1
SUBI
/* Argument 1 loaded */
CALL call_f
/* Restoring P-stack, with returned value added */
RESTORE 7
MULTI
DROP
/* Dropping useless value */

/* Function f defined in separated file */

