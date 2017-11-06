
 #include <conio.h>
 #include <stdio.h>

	 // # define L 40

	 void main () {

	  clrscr();			// TRANSPOSE OF A MATRIX

	  int num;

	  printf("\t\t\t");
	  textcolor(3);
	  cprintf("\n\nMatrix Application");

	  int A[40][40],r1,c1;


  	printf("\n\nMatrix A");

	  printf("\n\nEnter No. of Rows:	");
	  scanf("%d",&r1);

	  printf("\n\nEnter No. of Columns:	");
	  scanf("%d",&c1);

  	printf("\n\nEnter values for Matrix A in matrix order\n");

 	   for (int i=0; i<r1; i++)      // Entering values of Matrix A
  	    for (int j=0; j<c1; j++)    // in row & column format
   	    scanf("%d",&A[i][j]);

   	    // Now printing A Matrix

 	printf("\n\nThe values of Matrix A is:\n");
    	for (i=0; i<r1; i++) {
    	  for (j=0; j<c1; j++)
    	   printf("%d ",A[i][j]);

   	  printf("\n");

	       }

  	 printf("\n\nThe transpose of Matrix A is:\n");
  	  for (i=0; i<c1; i++) {
  	    for (j=0; j<r1; j++)
	       printf("%d ",A[j][i]);

	     printf("\n");

   	    }
	
	  getche();

	  }
