#include"conio.h"
#include"stdio.h"

void main(void)
{
  clrscr();
  int a,b,fact=1;

  printf("Put No. = ");
  scanf("%d",&a);

  for(b=1; b<=a; b++)
  fact*=b;
  printf("\nThe Factorial of %d is %d",a,fact);
  getch();

}