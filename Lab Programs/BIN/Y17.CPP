#include"conio.h"
#include"stdio.h"

int WIN(int x, int y)
{
  if(x>y)
   return x;
    else
     return y;
}

void main(void)
{
 clrscr();
 int a,b,c;

 printf("Enter value = ");
 scanf("%d",&a);

 printf("Enter value = ");
 scanf("%d",&b);

 c=WIN(a,b);

 printf("\nThe largest value is %d",c);

 getch();
}