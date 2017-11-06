 #include "stdio.h"
 #include "conio.h"

 void main () {

 int i;

 clrscr();

 for (i=1; i<=12; i++) {
   for (int j=1; j<=12; j++)
	printf("%4d",i*j);
	printf("\n");

     }
 getch();
 }