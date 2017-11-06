#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();
 int fact=1,a;

 printf("Enter No. = ");
 scanf("%d",&a);

 for(int i=a; i>=1; i--)
  fact*=i;

 printf("\nThe Factorial is %d",fact);

 getch();
}