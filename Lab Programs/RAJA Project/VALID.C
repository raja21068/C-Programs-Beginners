void main()
{
int r,c,i,j;
int arr[10][10];
int arrt[10][10];
int arrtt[10][10];
int aces= -1;
int aces2= -1;
int aces3= -1;
 clrscr();
    gotoxy(30,3);
     printf("MARTRIX VALIDATION");
     printf("\n\n\n\n\n\n\t   Matrix(A)");
     printf("\n\n\n\n    Enter No. of Rows:      ");
      scanf("%d",&r);
     printf("\n\n\n    Enter No. of Columns:   ");
      scanf("%d",&c);
 clrscr();
     printf("\n\n\t\t\t Input Values in Matrix(A)");
     printf("\n\n");
   for(i=0; i<r; i++){
     for(j=0; j<c; j++){
       printf("\n\n\t\tInput Value of Row No.%d and Column No.%d:  ",i+1,j+1);
	scanf("%d",&arr[i][j]);
     }
       printf("\t\t");
   }
     printf("\n\n\n\n\t\t    Press Any Key to Show the Validation");
 getch();
 clrscr();
     printf("\n\tMatrix(A) [%d X %d]",r,c);
     printf("\n\n      ");
   for(i=0; i<r; i++){
     for(j=0;j<c; j++){
       printf("   %2d   ",arr[i][j]);
     }
       printf("\n\n      ");
   }
     printf("\n");
   if (r==c){
     printf("\tMatrix A is a Square Matrix.");
   }
   else
     printf("\tMatrix A is a Rectangular Matrix.");
//Cheking Diagonal
   for(i=0; i<r; i++){
     for(j=0; j<c; j++){
	if(((i==j) && arr[i][j]==0)||((i!=j) && arr[i][j]!=0)){
	  aces=1;
	  goto label1;
	 }
     }
   }
 label1:
   if(aces==1)
       printf("\n\n\tMatrix A is a Non-Diagonal Matrix.");
   else{
       printf("\n\n\tMatrix A is a Diagonal Matrix.");
       }
			  //End of Diagonal
//Cheking Scalar Diagonal
   for(i=0; i<r; i++){
     for(j=0; j<c; j++){
       if(((i==j) && arr[i][j]!=arr[0][0])||((i!=j) && arr[i][j]!=0)){
	 aces2=1;
	 goto label2;
       }
     }
   }
 label2:
   if(aces2==1)
       printf("\n\n\tMatrix A is a Non-Scalar Diagonal.");
   else{
       printf("\n\n\tMatrix A is Scalar Diagonal.");
       }
		   //End of Scalar Diagonal
//Cheking Unitary
   for(i=0; i<r; i++){
     for(j=0; j<c; j++){
       if(((i==j) && arr[i][j]!=1)||((i!=j) && arr[i][j]!=0)){
	  aces3=1;
	  goto label3;
       }
     }
   }
 label3:
   if(aces3==1)
       printf("\n\n\tMatrix A is a Non-Unitary Matrix.");
   else{
       printf("\n\n\tMatrix A is Unitary Matrix.");
       }
			 //End of Unitary
// Checking Symmetric

   for (i=0; i<r; i++){
     for (j=0; j<c; j++){
	arrt[j][i]=arr[i][j];
     }
   }
   for(i=0; i<r; i++){
     for(j=0; j<c; j++){
       if(arrt[i][j]==arr[i][j])
	   continue;
       else{
	printf("\n\n\tA != A(transpose)");
	printf("\n\n\t => This is Non-Symmetric Matrix.");
	goto label4;
       }
     }
   }
     printf("\n\n\tA = A(transpose)");
     printf("\n\n\t => This is Symmetric Matrix.");
 label4:
			  //End of Symmetric
//Cheking Skew-symmetric

   for (i=0; i<r; i++){
     for (j=0; j<c; j++){
	arrtt[j][i]=arr[i][j]*-1;
     }
   }
   for(i=0; i<r; i++){
     for(j=0; j<c; j++){
       if(arrtt[i][j]==arr[i][j])
	 continue;
       else{
	   printf("\n\n\tA != -A(transpose)");
	   printf("\n\n\t => This is Non Skew-Symmetric Matrix.");
	   goto label5;
	   }
     }
   }
     printf("\n\n\tA = -A(transpose)");
     printf("\n\n\t => This is Skew-Symmetric Matrix.");
 label5:
		      //End of Skew-Symmetric
     printf("\n\nPress Any key to go Main Menu..!");
 getch();
}