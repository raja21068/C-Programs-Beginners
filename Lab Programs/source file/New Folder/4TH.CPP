#include"stdio.h"
#include"conio.h"

void main(void)

{
int a,b,c,x,y;

clrscr();

gotoxy(15,7);
printf("\t\tThis Programs Created By\n\n\t\t\t          YOGESHWAR KHATRI \n\n\t\t\t            2k10-CSE-86");
getch();

clrscr();

printf("\n\nPut the value of a = ");
scanf("%d",&a);

printf("\nPut the value of b = ");
scanf("%d",&b);

x=++a+b*c;
y=(a++)+b*c;

printf("\n\n\nThe result of X=++a+b*c is %d",x);

printf("\n\nThe result of Y=a++ +b*c is %d",y);

printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t    To Exit Press Enter Key");
getch();

}
