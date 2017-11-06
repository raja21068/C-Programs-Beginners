 #include <conio.h>
 #include <stdio.h>

	 // # define L 40

	 void main () {

	  clrscr();

	  int num;

	  printf("\t\t\t");
	  textcolor(3);
	  cprintf("\n\nMatrix Application");

	// DECLARATION OF THREE MULTYDIMENTIONAL ARRAYS

	  int A[40][40],B[40][40],C[40][40],r1,c1,r2,c2,r3,c3;


	  printf("\n\nMatrix A");

	  printf("\n\nEnter No. of Rows:	");
	  scanf("%d",&r1);

	  printf("\n\nEnter No. of Columns:	");
  	scanf("%d",&c1);

	  printf("\n\nEnter values for Matrix A in matrix order\n");

	    for (int i=0; i<r1; i++)      // Entering values of Matrix A
      	for (int j=0; j<c1; j++)    // in row & column format
       	scanf("%d",&A[i][j]);

	  printf("\n\nMatrix B");

	  printf("\n\nEnter No. of Rows:	");
	  scanf("%d",&r2);

	  printf("\n\nEnter No. of Columns:	");
	  scanf("%d",&c2);

	  printf("\n\nEnter values for Matrix B in matrix order\n");

	    for (int k=0; k<r2; k++)       // Entering values of Matrix B
         	       for (int l=0; l<c2; l++)     // in row & column format
	       scanf("%d",&B[k][l]);


	  printf("\n\nMatrix C");

	  printf("\n\nEnter No. of Rows:	");
	  scanf("%d",&r3);	

	  printf("\n\nEnter No. of Columns:	");
	  scanf("%d",&c3);



	  printf("\n\nEnter values for Matrix C in matrix order\n");

	    for (int m=0; m<r3; m++)         // Entering values of Matrix C
      	         for (int n=0; n<c3; n++)       // in row & column format
       	         scanf("%d",&C[m][n]);

	       // Now printing A, B & C Matrices

	  printf("\n\nThe values of Matrix A is:\n");
    	for (i=0; i<r1; i++) {
      	    for (j=0; j<c1; j++)
       	    printf("%d ",A[i][j]);

	     printf("\n");

	       }

	    printf("\n\nThe values of Matrix B is:\n");
    	for (k=0; k<r2; k++) {
      	   for (l=0; l<c2; l++)
	   printf("%d ",B[k][l]);

	     printf("\n");

	       }

	    printf("\n\nThe values of Matrix C is:\n");
    	for (m=0; m<r3; m++) {
      	    for (n=0; n<c3; n++)
       	    printf("%d ",C[m][n]);

	     printf("\n");

	       }




	    if (r1==r2 && c1==c2 && r2==r3 && c2==c3) {
    	      printf("\n\nThe Addition of Matrices A, B & C is:\n");
     	      for (k=0; k<r1; k++) {
       	          for (l=0; l<c1; l++)
	          printf("%d ",A[k][l]+B[k][l]+C[k][l]);

	    printf("\n");

		}

	    }

	  else	 {

	   printf("\n\nThe Entered Matrices are not Square type");
   	   printf("\n\n\t\tADDITION is not possible !");

  	   }

	   if (r1==r2 && c1==c2 && r2==r3 && c2==c3) {
    	      printf("\n\nThe Subtraction of Matrices A, B & C is:\n");
     	      for (k=0; k<r1; k++) {
       	           for (l=0; l<c1; l++)
	          printf("%d ",B[k][l]-A[k][l]-C[k][l]);

	    printf("\n");

		}

	    }

	  else	 {

	   printf("\n\nThe Entered Matrices are not Square type");
    	   printf("\n\n\t\tSUBTRACTION is not possible !");

		}


	  getche();

	  }
