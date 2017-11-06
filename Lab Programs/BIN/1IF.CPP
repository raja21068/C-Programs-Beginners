#include"stdio.h"
#include"conio.h"

void main(void)
{
int k;
clrscr();
printf("Enter the value = ");
scanf("%d",&k);
if(k%2==0)
printf("%d is even\n",k);
if(k%2!=0)
printf("%d is odd\n",k);
getch();
}
