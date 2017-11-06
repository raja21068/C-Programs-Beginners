#include"conio.h"
#include"stdio.h"

void main(void)
{
  int sum=0, n;

  clrscr();

  scanf("%d",&n);

  sum=n*(n+1)/2;

  printf("\n%d",sum);

  getch();


}