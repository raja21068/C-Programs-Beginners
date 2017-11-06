
 #include "stdio.h"
 #include "conio.h"


 void main() {

  clrscr();

     int A[3][3];
     int B[3][3];
     int C[3][3];
     int X[3][3][3];
     int i,j,m,a,b;

	 printf("\n\nSQUARE MATRIX MULTIPLICATION");

	 printf("\n\nEnter Rows: ");
  	 scanf("%d",&a);

      	printf("\n\nEnter Columns: ");
      	scanf("%d",&b);

	printf("\t\tEnter matrix A\n\n");
	printf("Enter values in Matrix form:\n");
     for(i=0;i<a;i++)  {
	   for(j=0;j<b;j++)  {
		       scanf("%d", &A[i][j]);
	       C[i][j]=0;
	  }
     }


	 printf("\n\t\tEnter matrix B\n\n");
	 printf("Enter values in Matrix form:\n");
     for(i=0;i<a;i++) {
	   for(j=0;j<b;j++) {
	      scanf("%d", &B[i][j]);
	  }
     }

		// SHOWING MATRIX A

	 printf("\n\nThe values of Matrix A is:\n");
	      for (i=0; i<a; i++) {
		   for (j=0; j<b; j++)
		   printf("%d ",A[i][j]);

		     printf("\n");

	       }


		// SHOWING MATRIX B

	printf("\n\nThe values of Matrix B is:\n\n");
	       for (i=0; i<a; i++) {
		    for (j=0; j<b; j++)
		    printf("%d ",B[i][j]);

		     printf("\n");

	       }

		// MAIN LOGIC OF MULTIPLICATION

	 for(i=0;i<a;i++)  {
	    for(j=0;j<b;j++)  {
	       for(m=0;m<a;m++)  {
	       X[i][j][m]=A[i][m]*B[m][j];
	       C[i][j]+=X[i][j][m];
	       }
	  }
     }



     printf("\n==========Matrix C==========\n\n");
     for(i=0;i<a;i++)  {
	 for(j=0;j<b;j++)
	 printf("%d ",C[i][j]);

	 printf("\n");

     }

	getche();
}