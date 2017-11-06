#include"conio.h"
#include"stdio.h"

void main(void)
{
 clrscr();
 int A[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 int i,j;

 printf("\n\nThe contents of an Integer Array are \n\n");

 for (i=0; i<=19; i++)
  printf("%d,",A[i]);

 printf ("\n\nNow search the particular value by entering Index number in an Integer \nArray = ");
 scanf("%d",&j);

 for (i=0; i<=19; i++)
  if (A[i]==j)
   printf("\n%d",A[j]);

 getch();
}
