 #include <stdio.h>
 #include <conio.h>
 #include <dos.h>

  void main () {

  clrscr();

  int A[3][3]={5,0,0,0,5,0,0,0,5};
  int r,c;

		// SCALAR MATRIX
	printf("\n\n\tSCALAR MATRIX");

	printf("\n\n A Square Matrix Whose all elements except diagonal\n elements are zero '0' and the diagonal elements are same.");

	printf("\n\n\tLet S be any Scalar Matrix\n\n");


	for (int i=0; i<3; i++){
	   printf("\t");
	   for(int j=0; j<3; j++)
	   printf(" %d ",A[i][j]);
	printf("\n");

	}


	printf("\n\tWhose order is 3X3 is a Scalar Diagonal matrix.\n\n");


	getche();

	}