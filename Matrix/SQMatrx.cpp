 #include <stdio.h>
 #include <conio.h>
 #include <dos.h>

  void main () {

  clrscr();

  int A[2][4]={1,1,1,1,2,2,2,2};
  int r,c;
				// SQUARE MATRIX

	printf("\n\n\tSQUARE MATRIX");

	printf("\n\n A Square Matrix is a matrix whose number of\n rows will always be equal to number of columns.");

	printf("\n\n\t=> No. of Rows = No. of Columns\n");

	printf("\n\n\tLet E be any Matrix\n\n");


	for (i=0; i<2; i++){
	   printf("\t");
	   for(int j=0; j<2; j++)
	   printf(" %d ",A[i][j]);
	printf("\n");

	}


	printf("\n\tWhose order is 2X2 is a Square matrix.\n\n");


	getche();

	}