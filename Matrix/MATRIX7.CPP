 #include <stdio.h>
 #include <conio.h>

  void main () {

  clrscr();

  int A[10][10],r,c;	// SQUARE MATRIX CHECKING

		printf("\n\n\t\tMATRIX APPLICATION");

	printf("\n\n\tEnter no. of rows: ");
	scanf("%d",&r);

	printf("\n\n\tEnter no. of columns: ");
	scanf("%d",&c);

	printf("\n\nEnter values in the Matrix order\n\n");

	for (int i=0; i<r; i++)
	   for(int j=0; j<c; j++)
	   scanf("%d",&A[i][j]);


	printf("\n\nThe Matrix A is:\n\n");

	for (i=0; i<r; i++){
	   for(int j=0; j<c; j++)
	   printf(" %d ",A[i][j]);
	printf("\n");

	}

	if (r==c) {

	   printf("\n\n\tThis is a Square Matrix");
	   printf("\n\n\tIts order is %d X %d",r,c);

	}

	else  {

	   printf("\n\nThis is a Rectangular Matrix");
	   printf("\n\nIts order is %d X %d",r,c);

	}

	getche();

	}


