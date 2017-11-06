#include"stdio.h"
#include"conio.h"

void main(void)

{

int a,b,c;

clrscr();

printf("The series of real number is\n\n");
for(a=1; a<=100; a++)
printf(" %d",a);

printf("\n\n\nThe series of even number is\n\n");
for(b=2; b<=100; b+=2)
printf(" %d",b);

printf("\n\n\nThe series of odd number is\n\n");
for(c=3; c<=100; c+=3)
printf(" %d",c);

getch();

}