#include"stdio.h"
#include"conio.h"

void main (void)

{
clrscr();
int i;

printf("Enter any number = ");
scanf("%d",&i);

switch (i)
{
case 1:
printf("One\n");
break;

case 2:
printf("Two\n");


default:
printf("invalid");
}
getch();
}

