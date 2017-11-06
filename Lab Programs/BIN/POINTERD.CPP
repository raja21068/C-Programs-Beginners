#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();
 int a=3;
 int *j;
 j=&a;

 printf("Adress is=%u\n",&a);
 printf("Adress is=%u\n",j);
 printf("Adress is=%u\n",&j);
 printf("Value is=%u\n",j);
 printf("Value is=%d\n",a);
 printf("Value is=%d\n",*(&a));
 printf("Value is=%d",*j);
 getch();
}