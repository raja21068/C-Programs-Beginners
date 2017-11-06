#include"stdio.h"
#include"conio.h"

void main(void)
{
int a,b,c=1,ch;
clrscr();

do
{
printf("\n\n\nPut The Value = ");
scanf("%d",&b);
for(a=1; a<=10; a++)
printf("\n%d X %d = %d  \n",b,a,a*b);
c++;
}while((ch=getch()!='x'));
getch();
}