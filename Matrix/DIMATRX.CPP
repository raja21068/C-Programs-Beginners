 #include <stdio.h>
 #include <conio.h>
 #include <dos.h>

  void main () {

  clrscr();

  int A[3][3]={1,0,0,0,2,0,0,0,3};
  int r,c;


	printf("\n\n\tDIAGONAL MATRIX");

	printf("\n\n A Diagonal Matrix will always be a  Square matrix whose all elements\n are zero except the diagonal elements.");

	printf("\n\n\tLet E be any Matrix\n\n");


	for (int i=0; i<3; i++){
	   printf("\t");
	   for(int j=0; j<3; j++)
	   printf(" %d ",A[i][j]);
	printf("\n");

	}


	printf("\n\tWhose order is 3X3 is a Diagonal matrix.\n\n");


	getche();

	}