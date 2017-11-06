#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();
 int birthyear, currentyear, myage;

 printf("Enter Birth Year = ");
 scanf("%d",&birthyear);

 printf("\nEnter Current Year = ");
 scanf("%d",&currentyear);

 myage=currentyear-birthyear;

 printf("\n\nU r now %d year old",myage);

 getch();
}