#include"conio.h"
#include"stdio.h"

void main(void)
{
clrscr();
int a=1,b=3,c=10,d=5;

printf("DO While loop\n\n\n");

do
{
printf("@");
a++;
}while(a<=9);
printf("\n\n");

do
{
printf("%d#",b);
b++;
}while(b<=8);
printf("\n\n");

do
{
printf("%d,",c);
c--;
}while(c>=2);
printf("\n\n");

do
{
printf("%d,",d);
d+=5;
}while(d<=30);

getch();

}