#include "stdio.h"
#include "conio.h"

void main (void)
{
 int A[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
 int i;

 clrscr();

 printf ("\n\nThis program will print the Odd contents of an Integer Array\n");

 for (i=0; i<=19; i++)
  printf("\n%d",A[i]);

 printf("\n\nNow it will show the Odd contents of an Integer Array\n");


 for (i=0; i<=19; i++)
  if (A[i]%2==1)
   printf("\n%d",A[i]);


 getch();
}