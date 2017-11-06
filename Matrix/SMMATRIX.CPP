 #include <stdio.h>
 #include <conio.h>
 #include <dos.h>

  void main () {

  clrscr();

  int A[3][3]={2,4,3,4,2,3,6,7,4};
  int r,c;

		 // SCALAR MULTIPLICATION
	printf("\n\n\tSCALAR MULTIPLICATION MATRIX");

	printf("\n\n Let K is a scalar and A be any Square Matrix then every\n element of A is multiplied with a scalar K.");

	printf("\n\n\tLet A be any Square Matrix\n\n");

	for (int i=0; i<3; i++){
	   printf("\t");
	   for(int j=0; j<3; j++)
	   printf(" %d ",A[i][j]);
	printf("\n");

	}


	printf("\n\n\tLet 5 is a scalar which multiplies matrix A\n\n");


	for (i=0; i<3; i++){
	   printf("\t");
	   for(int j=0; j<3; j++)
	   printf(" %d ",5*A[i][j]);
	printf("\n");

	}


	printf("\n\tWhose order is 3X3 is a Scalar Diagonal matrix.\n\n");


	getche();

	}