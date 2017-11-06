#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();
 int a=0,b=1;

 printf("%d,%d,",a,b);

 for(int i=1; i<=10; i++)
  {
   a+=b;
   b+=a;
   printf("%d,%d,",a,b);
  }
 getch();
}