#include"conio.h"
#include"stdio.h"
#include"string.h"

#define Pi 3.14

void main(void)
{
 char name1[20];
 char name2[20];
 clrscr();
  printf("Enter your name = ");
  gets(name1);

  strcpy(name2,name1);

  printf("%s", name2);

 getch();
}