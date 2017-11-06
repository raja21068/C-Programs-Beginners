#include"stdio.h"
#include"conio.h"

void main(void)

{
int a;
clrscr();

gotoxy(15,7);
printf("\t\tThis Programs Created By\n\n\t\t\t          YOGESHWAR KHATRI \n\n\t\t\t            2k10-CSE-86");
getch();

clrscr();

printf("\n\nThe series of Odd number is\n\n\n");

for(a=1; a<=100; a+=2)

printf(" %d",a);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     To Exit Press Enter Key");

getch();

}