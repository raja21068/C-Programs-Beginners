#include"conio.h"
#include"stdio.h"

void main(void)
{
clrscr();
int a=1,b=3,c=10,d=5;

printf("While loop\n\n\n");

while(a<=9)
{
printf("@");
a++;
}
printf("\n\n");

while(b<=8)
{
printf("%d#",b);
b++;
}
printf("\n\n");

while(c>=2)
{
printf("%d,",c);
c--;
}
printf("\n\n");

while(d<=30)
{
printf("%d,",d);
d+=5;
}

getch();

}