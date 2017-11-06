#include"stdio.h"
#include"conio.h"

void main(void)
{
clrscr();
int a,b,s,e,k;
printf("\nTable will start from = ");
scanf("%d",&s);
printf("\nTable will end at = ");
scanf("%d",&e);

for(k=1; k<=5; k++)
{
printf("\n\nPut the value = ");
scanf("%d",&a);
for(b=s; b<=e; b++)
printf("\n%d X %d = %d \n",a,b,a*b);
}
getch();
}