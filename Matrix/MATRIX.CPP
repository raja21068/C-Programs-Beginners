 #include <conio.h>
 #include <stdio.h>

  // # define L 40

  void main () {

        clrscr();		// MATRICES WITH ADDITION, SUBTRACTION & TRANSPOSE

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
    	      for (i=0; i<a; i++) {    	// start of A
      	           for (j=0; j<b; j++)
       	           printf("%d ",A[i][j]);

		     printf("\n");

	       }  			 // End of A
 
	   printf("\n\nThe values of Matrix B is:\n");
    	       for (k=0; k<c; k++) {  	// Start of B
      	            for (l=0; l<d; l++)
       	            printf("%d ",B[k][l]);

		     printf("\n");

	       }  			// End of B


	    if (a==c && b==d)  {  	// Start of IF
    	         
	                 printf("\n\nThe Addition of Matrices A & B is:\n");
     		for (k=0; k<a; k++) { 				// Start of Inner body
       		    for (l=0; l<b; l++)
		    printf("%d ",A[k][l]+B[k][l]);

		    printf("\n");

	      }			 // End of Inner body

    }  				// End of IF

  else 	{  			// Start of Else

	   printf("\n\nThe Entered Matrices are not Square type");
     	   printf("\n\n\t\tADDITION is not possible !");

	} 			// End of Else


	   if (a==c && b==d) {  	// Start of 2nd IF
    	       printf("\n\nThe Subtraction of Matrices A from B is:\n");
    	                  for (k=0; k<a; k++) { 			// Start of Inner body
       		for (l=0; l<b; l++)
		printf("%d ",B[k][l]-A[k][l]);

		    printf("\n");

	}  			// End of inner body

    } 				 // End of 2nd IF


  else 	{  			// Start od Else

	   printf("\n\nThe Entered Matrices are not Square type");
   	   printf("\n\n\t\tSUBTRACTION is not possible !");
	
	}  			// End of Else

	
	   printf("\n\nThe transpose of Matrix A is:\n");
    	              for (i=0; i<b; i++) {  			// Start of for body
      	                 for (j=0; j<a; j++)
       	                 printf("%d ",A[j][i]);

		     printf("\n");

	       }			// End of for




         getche();

         }