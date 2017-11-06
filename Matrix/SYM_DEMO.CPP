
#include <conio.h>
#include <stdio.h>


 void main () {

   clrscr();

   int A[5][5], a=0, r, c;

    gotoxy(25,8);
    printf("SYMMETRIC MATRIX\n\n");


     printf("\n\n\tMatrix A");

     printf("\n\nEnter No. of Rows:	");
     scanf("%d",&r);

     printf("\n\nEnter No. of Columns:	");
     scanf("%d",&c);

     if (r==c) {
       printf("\n\n\tEnter values for Matrix A in matrix order\n\n");

       printf("\tA = ");
	for(int i=0; i<r; i++) {
	 for(int j=0; j<c; j++)
	  scanf("%d",&A[i][j]);
	  printf("\n\t    ");

	}    // End of for


       for(i=0; i<r; i++) {
	for(int j=0; j<c; j++)
	  if (A[i][j]==A[j][i])
	    a+=1;
       }    // End of for


       if (a==r*c)
	 printf("\n\n\tSymmetric Matrix");

     }

     else
       printf("\n\n\tNon-Square Matrix");

   getche();
 }
