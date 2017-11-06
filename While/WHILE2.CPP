 #include "stdio.h"
 #include "conio.h"

 void main () {

 clrscr();
 int count=0;

 printf("Type in a phrase:");

 while (getche() != '.')    {
	count++;
	printf("\nCharacter count is %d",count);
    }
 getch();
 }
