void call_g(){
LOADI 3
/* Value of z stored at stack index fp+4 (l.92)*/
LOAD (fp+2) /* Loading x at stack index fp + 2 */
LOAD (fp+3) /* Loading y at stack index fp + 3 */
ADDI
LOAD (fp+4) /* Loading z at stack index fp + 4 */
ADDI
DRCP  (l.151)
return;
}
