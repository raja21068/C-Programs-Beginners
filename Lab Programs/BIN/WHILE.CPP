#include"stdio.h"
#include"conio.h"

void main(void)
{
clrscr();
int a,b,s,e,k=1;
printf("\nTable will start from = ");
scanf("%d",&s);
printf("\nTable will end at = ");
scanf("%d",&e);

while(k<=5)
{
printf("\n\nPut the value = ");
scanf("%d",&a);
for(b=s; b<=e; b++)
printf("\n%d X %d = %d \n",a,b,a*b);
k++;
}
getch();
}