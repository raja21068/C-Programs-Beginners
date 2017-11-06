#include "stdio.h"
#include "conio.h"

void main (void)
{
 int A[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 int i, sum=0;

 clrscr();

 printf ("\n\nThis program will print the sum of all the contents of an Integer Array\n");

 for (i=0; i<=19; i++)
  printf("\n%d",A[i]);

 printf("\n\nNow it will show the sum of all the contents\n");


 for (i=0; i<=19; i++)
  sum+=A[i];
   printf("\n%d",sum);


 getch();
}