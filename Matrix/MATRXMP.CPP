 #include <stdio.h>
 #include <conio.h>

  void main () {

  clrscr();

  int A[10][10],B[10][10];
  int r,c,r2,c2;


	printf("\n\n\t\tMATRIX A ");

	printf("\n\n\tEnter the values for matrix A ");

	printf("\n\n\tEnter number of Rows:	  ");
	scanf("%d",&r);

	printf("\n\n\tEnter number of Columns:  ");
	scanf("%d",&c);



	for (int i=0; i<r; i++)
	   for(int j=0; j<c; j++)
	   scanf("%d",&A[i][j]);



	printf("\n\n\tMATRIX B ");

	printf("\n\n\tEnter the values for matrix B ");

	printf("\n\n\tEnter number of Rows:      ");
	scanf("%d",&r2);

	printf("\n\n\tEnter number of Columns:  ");
	scanf("%d",&c2);



	for (int k=0; k<r2; k++)
	   for(int l=0; l<c2; l++)
	   scanf("%d",&B[k][l]);



	printf("\n\n\tThe values of Matrix A is:\n");

	    for (i=0; i<r; i++) {
	       for(j=0; j<c; j++)
	       printf(" %d ",A[i][j]);
	    printf("\n");
       }



       printf("\n\n\tThe values of Matrix B is:\n");

	    for (k=0; k<r2; k++) {
	       for(l=0; l<c2; l++)
	       printf(" %d ",B[k][l]);
	    printf("\n");
       }


	getche();

	}