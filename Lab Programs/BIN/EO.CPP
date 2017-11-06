#include"conio.h"
#include"stdio.h"

void main(void)
{
  int a[5], i;

  clrscr();

  for (i=0; i<=4; i++){

  scanf("\n%d",&a[i]);

  if (a[i]%2==0)
  printf("\n%d is Even",a[i]);
  else
  printf("\n%d is Odd",a[i]);
  }

  getch();


}