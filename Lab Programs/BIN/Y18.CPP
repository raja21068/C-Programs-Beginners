#include"conio.h"
#include"stdio.h"

int WIN(int x, int y,int z)
 {
  if((x>y)&&(x>z))
   return x;
    else
     if((y>x)&&(y>z))
      return y;
       else
	return z;
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

 d=WIN(a,b,c);

 printf("\nThe Largest value is %d",d);

 getch();
}