#include"stdio.h"
#include"conio.h"

void main(void)

{

int a,b,c,x,y;

clrscr();

printf("\n\nPut the value of a = ");
scanf("%d",&a);

printf("\nPut the value of b = ");
scanf("%d",&b);

printf("\nPut the value of c = ");
scanf("%d",&c);

x=++a+b*c;
y=(a++)+b*c;

printf("\n\n\nThe result of X=++a+b*c is %d",x);

printf("\n\nThe result of Y=a++ +b*c is %d",y);

getch();

}