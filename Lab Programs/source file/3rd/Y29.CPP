#include "stdio.h"
#include "conio.h"


int int_is_positive (int i)
{
 if (i>0)
  return 1;

   else
    return 0;
}



void main (void)
{
 int j,k;

 clrscr();

 printf ("\n\nEnter a number = ");
 scanf ("%d",&j);

 k= int_is_positive(j);

 printf ("\n\n %d ",k);


 getch();
}