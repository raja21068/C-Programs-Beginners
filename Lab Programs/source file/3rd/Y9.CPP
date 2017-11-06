#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();
 int a,b;

 printf("Ahmed deposits 5000/= into bank each year\n& the saving interest is \"4%\" per annualy");
 printf("\n\nEnter year = ");
 scanf("%d",&a);

 b=(5000/100)*4*a+(a*5000);

 printf("\n\nTotal saving with interest is %d",b);
 getch();
}