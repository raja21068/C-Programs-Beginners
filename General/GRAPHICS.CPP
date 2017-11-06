 #include "stdio.h"
 #include "conio.h"
 #include "dos.h"

 void main () {

 clrscr();
 char sym='*';
 int i=0;

 for (i=1; i<=20; i++) {

 textcolor (i);
 cprintf("%c",sym);
 delay(150);
 }

 getch();

 }