#include"conio.h"
#include"stdio.h"

void main(void)
{
 int a,b;
 clrscr();

 printf("Enter no = ");
 scanf("%d",&a);

 b=(a%2==0)? 1:0;

 printf("%d",b);

 getch();


}