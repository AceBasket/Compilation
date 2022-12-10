void call_g(){
LOADI 3
/* Value of z stored at stack index fp+3 (l.92)*/
LOAD (fp+1) /* Loading x at stack index fp + 1 */
LOAD (fp+2) /* Loading y at stack index fp + 2 */
ADDI
LOAD (fp+3) /* Loading z at stack index fp + 3 */
ADDI
DRCP
/* Replacing local symbol z by expression result */
return;
}
