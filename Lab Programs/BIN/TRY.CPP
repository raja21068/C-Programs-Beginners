#include"conio.h"
#include"stdio.h"

void main(void)
{
 int a,b,c,pow=1;
 clrscr();

 printf("Enter number = ");
 scanf("%d",&a);

 printf("Enter power = ");
 scanf("%d",&b);


 for(c=1; c<=b; c++)
  pow=pow*a;


  printf("%d",pow);

  getch();


}