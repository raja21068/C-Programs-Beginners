 #include <conio.h>
 #include <stdio.h>

	// # define L 40

	 void main () {

  	clrscr();			// ADDITION OF MATRICES

	  int A[40][40],B[40][40],a,b,c,d;

	  printf("\t\t\t");
  	textcolor(3);
 	 cprintf("\n\nMatrix Application");

	  printf("\n\nMatrix A");

	  printf("\n\nEnter No. of Rows:	");
  	scanf("%d",&a);

  	printf("\n\nEnter No. of Columns:	");
	  scanf("%d",&b);

	  printf("\n\nEnter values for Matrix A in matrix order\n");

	    for (int i=0; i<a; i++)
   	    for (int j=0; j<b; j++)
       	    scanf("%d",&A[i][j]);

	  printf("\n\nMatrix B");

  	printf("\n\nEnter No. of Rows:	");
  	scanf("%d",&c);

  	printf("\n\nEnter No. of Columns:	");
  	scanf("%d",&d);

  	printf("\n\nEnter values for Matrix B in matrix order\n");

  	  for (int k=0; k<c; k++)
  	    for (int l=0; l<d; l++)
  	     scanf("%d",&B[k][l]);

	    printf("\n\nThe values of Matrix A is:\n");
	    for (i=0; i<a; i++) {
	      for (j=0; j<b; j++)
    	   printf("%d ",A[i][j]);

   	  printf("\n");

     	  }

    	printf("\n\nThe values of Matrix B is:\n");
   	 for (k=0; k<c; k++) {
   	   for (l=0; l<d; l++)
    	   printf("%d ",B[k][l]);

     	printf("\n");

   	    }


  	  if (a==c && b==d) {
	    printf("\n\nThe Addition of Matrices A & B is:\n");
  	   for (k=0; k<a; k++) {
  	     for (l=0; l<b; l++)
   	    printf("%d ",A[k][l]+B[k][l]);

   	 printf("\n");

		}

	    }

	  else	 {

   	printf("\n\nThe Entered Matrices are not Square type");
   	printf("\n\n\t\tADDITION is not possible !");

		}

  	getche();

	  }