 #include <stdio.h>
 #include <conio.h>
 #include <dos.h>

  void main () {

  clrscr();

  int A[2][2]={2,3,3,5};
  int r,c;

			// SYMMETRIC MATRIX
	printf("\n\n\tSYMMETRIC MATRIX");

	printf("\n\n A Square Matrix is said to be Symmetric,\n\n\t\tIf A(transpose) = A.");

	printf("\n\n\n\tLet A be any Matrix\n\n");


	for (int i=0; i<2; i++){
	   printf("\t");
	   for(int j=0; j<2; j++)
	   printf(" %d ",A[i][j]);
	printf("\n");

	}


	printf("\n\n\tTranspose of Matrix A will be\n\n");

	for (i=0; i<2; i++){
	   printf("\t");
	   for(int j=0; j<2; j++)
	   printf(" %d ",A[j][i]);
	printf("\n");

	}



	getche();

	}