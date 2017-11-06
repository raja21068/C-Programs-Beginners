#include"conio.h"
#include"stdio.h"

int eq3(int x, int y, int z)
{
  if((x==y)&&(x==z))
  return 1;

  else
  return 0;
}

void main(void)
{
 clrscr();
 int a,b,c,d;

 printf("Enter value = ");
 scanf("%d",&a);

 printf("Enter value = ");
 scanf("%d",&b);

 printf("Enter value = ");
 scanf("%d",&c);

 d=eq3(a,b,c);

 printf("%d",d);

 getch();
}