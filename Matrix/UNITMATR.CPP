 #include <stdio.h>
 #include <conio.h>
 #include <dos.h>

  void main () {

  clrscr();

  int A[3][3]={1,0,0,0,1,0,0,0,1};
  int r,c;

			// UNITARY MATRIX
	printf("\n\n\tUNITARY MATRIX");

	printf("\n\n A Square Matrix Whose all elements except diagonal\n elements are zero '0' and the diagonal elements are '1'.");

	printf("\n\n\tLet U be any Matrix\n\n");


	for (int i=0; i<3; i++){
	   printf("\t");
	   for(int j=0; j<3; j++)
	   printf(" %d ",A[i][j]);
	printf("\n");

	}


	printf("\n\tWhose order is 3X3 is a Unitary matrix.\n\n");


	getche();

	}