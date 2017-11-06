#include"conio.h"
#include"stdio.h"

int WIN(int x)
{
 int y=0;

 for(int i=1; i<=x; i++)
   y+=x%i==0;

 if(y==2)
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

 printf("%d",b);

 getch();
}