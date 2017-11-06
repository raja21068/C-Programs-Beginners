#include"stdio.h"
#include"conio.h"

void main(void)
{
int a,b;
clrscr();
printf("Put The Value = ");
scanf("%d",&b);
for(a=1; a<=10; a++)
printf("\n%d X %d = %d  \n",b,a,a*b);
getch();
}