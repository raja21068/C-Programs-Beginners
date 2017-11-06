#include"conio.h"
#include"stdio.h"

void main(void)
{
 int a,p;
 clrscr();

 for(int i=1; i<=10; i++)
 { p=0;
  for(a=1; a<=i; a++)
   {
    p+=(i%a==0);
    printf("%d\n",p);
   }
 }
 getch();
}