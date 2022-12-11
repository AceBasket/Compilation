LOADI 1
/* Value of x stored at stack index fp+0*/

LOADI 3
/* Value of y stored at stack index fp+1*/

LOAD (fp+0) /* Loading x at stack index fp + 0 */
LOADI 1
GT
/* condition loaded */
IFN L0
/* Negation condition tested */
/* case true */
LOAD (fp+1) /* Loading y at stack index fp + 1 */
LOADI 3
GT
/* condition loaded */
IFN L2
/* Negation condition tested */
/* case true */
LOAD (fp+1) /* Loading y at stack index fp + 1 */
LOADI 6
EQ
/* condition loaded */
IFN L4
/* Negation condition tested */
/* case true */
LOADI 0
GOTO L5
/* Case false */
L4:
LOADI 1
L5:
/* End if-then-else */
GOTO L3
/* Case false */
L2:
LOADI 6
L1:
/* End if-then-else */
GOTO L1
/* Case false */
L0:
LOAD (fp+1) /* Loading y at stack index fp + 1 */
LOADI 5
LT
/* condition loaded */
IFN L6
/* Negation condition tested */
/* case true */
LOADI 2
GOTO L7
/* Case false */
L6:
LOADI 3
L7:
/* End if-then-else */
L1:
/* End if-then-else */
/* Value of z stored at stack index fp+2*/

