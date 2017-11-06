#include"stdio.h"
#include"conio.h"

void main(void)
{
int a,b,sum=0;
clrscr();
for(a=2; a<=50; a+=2)
sum=sum+a;
printf("the sum is %d\n\n",sum);
getch();
}
