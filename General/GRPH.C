 #include "stdio.h"
 #include "conio.h"

 void main () {

 int i;

 clrscr();

 for (i=1; i<=20; i++) {

 printf("\n");
 textcolor(i);
 cprintf("SALMAN SHAIKH");
 delay(150);

 }

 getch();

 }