#include"stdio.h"
#include"conio.h"

void main(void)

{

int a,b;

clrscr();

printf("\n\nThe series of Even number is\n\n\n");

printf("\nPut the Even value = ");
scanf("%d",&b);

for(a=b; a<=100; a+=2)
printf(" %d",a);

getch();
}