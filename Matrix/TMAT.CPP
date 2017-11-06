 #include <stdio.h>
 #include <conio.h>

  void main () {

  clrscr();

  int A[2][3],i,j;

  printf("\nEnter value for matrices\n\n");

  for (i=0; i<2; i++)
    for (j=0; j<3; j++)
     scanf("\n%d",&A[i][j]);


  for (i=0; i<2; i++)
    for (j=0; j<3; j++)
     printf(" %d ",A[i][j]);

     getch();

     }
