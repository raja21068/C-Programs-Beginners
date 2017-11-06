#include"stdio.h"
#include"conio.h"

int add(int, int);
void main (void)

{
clrscr();
int a,b;

printf("Enter 1st value = ");
scanf("%d",&a);

printf("Enter 2nd value = ");
scanf("%d",&b);

int c=add(a, b);
clrscr();

printf("The result is %d",c);
getch();

}

int add(int a, int b)

{ return a+b; }

