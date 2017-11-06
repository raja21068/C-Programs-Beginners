#include"conio.h"
#include"stdio.h"

int WIN(int x)
{
  if((x%=)&&(x%x==0))
  return 1;
   else
    return 0;
}

void main(void)
{
 clrscr();
 int a,b;

 printf("Enter no. = ");
 scanf("%d",&a);

 b=WIN(a);

 printf("The no is %d",b);
 getch();
}