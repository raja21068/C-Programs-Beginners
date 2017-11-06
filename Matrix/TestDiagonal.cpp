#include <stdio.h>
#include <conio.h>

void main () {


  clrscr();

  int D[5][5], a=0, r, c;

    gotoxy(25,8);
    printf("DIAGONAL MATRIX\n\n");


     printf("\n\n\tMatrix D");

     printf("\n\nEnter No. of Rows:	");
     scanf("%d",&r);

     printf("\n\nEnter No. of Columns:	");
     scanf("%d",&c);

    if (r==c) {

     printf("\n\n\tEnter values for Matrix D in matrix order\n\n");

    printf("\tD = ");
    for(int i=0; i<r; i++) {
      for (int j=0; j<c; j++)
	scanf("%d",&D[i][j]);
      printf("\n\t    ");

    }    // End of for


    for(i=0; i<r; i++)    // Checking Diagonal
      for(int j=0; j<c; j++) {
	   if (i==j && D[i][j]!=0)
	       a+=1;
	   else
	   if (i!=j && D[i][j]==0)
	       continue;
	   else
	       a=0;
      }

    if (a==r) {
      printf("\n\n\tDiagonal Matrix");
      a=0;
      for(i=0; i<r; i++)      // Checking Unitary Diagonal
	for(int j=0; j<c; j++) {
	  if (i==j && D[i][j]==1)
	  a+=1;
	}

      if (a==r)
	printf("\n\n\tUnitary Diagonal Matrix");

      a=0;
      for(i=0; i<r; i++)      // Checking Scalar Diagonal
	for(j=0; j<c; j++) {
	  if (i==j && D[i][j]==D[0][0])
	    a+=1;
	}

      if (a==r)
	printf("\n\n\tScalar Diagonal Matrix");


    } // End of outer if

    else
      printf("\n\n\tNon-Diagonal Matrix");
  }

  else
     printf("\n\nNon-Square Matrix");

   getche();
}