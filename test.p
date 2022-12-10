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

