#include <conio.h>
#include <stdio.h>
#include <string.h>


 void main () {
  clrscr();

  char name[20];

 printf("\nEnter Name: ");
 gets(name);

 strrev(name);
 puts(name);

 getch();
 }

