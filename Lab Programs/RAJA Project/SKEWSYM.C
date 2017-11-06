void main()
{
int i,j,r,c;
int arrA[10][10];
int arrB[10][10];
int arr2[3][3]={0,1,2,-1,0,-3,-2,3,0};
 clrscr();
     printf("\n\n A Square Matrix is said to be Skew-Symmetric,");
     printf("\n\n\n\tIf A(transpose) = -A");
     printf("\n\n\n\n\tLet A be any Matrix");
     printf("\n\n\tA =  ");
   for (i=0; i<3; i++){
    for (j=0; j<3; j++){
       printf("%2d ",arr2[i][j]);
    }
       printf("\n\t     ");
   }
     printf("\n\n\n\tTranspose of Matrix A will be");
     printf("\n\n\n\tA(t) =  ");
   for (i=0; i<3; i++){
     for (j=0; j<3; j++){
	printf("%2d  ",arr2[j][i]);
     }
	printf("\n\t        ");
   }
     printf("\n\n\tNow you can try! Press Enter...");
 getch();
 clrscr();
    gotoxy(30,4);
     printf("SKEW-SYMMETRIC MATRIX");
     printf("\n\n\n\n\n\t  Matrix A");
     printf("\n\n\n    Enter No. of Rows:       ");
      scanf("%d",&r);
     printf("\n\n\n    Enter No. of columns:    ");
      scanf("%d", &c);
if (r==c){
 clrscr();
     printf("\n\n\n\t\t\tInput the value of Matrix(A)");
     printf("\n\n");
   for(i=0; i<r; i++){
     for(j=0; j<c; j++){
       printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
	scanf("%d",& arrA[i][j]);
     }
      printf("\t\t");
   }
 clrscr();
     printf("\n\tMatrix (A) [%d X %d]",r,c);
     printf("\n\n");
   for(i=0; i<=r-1; i++){
     for(j=0; j<=c-1; j++){
       printf("\t  %2d  ",arrA[i][j]);
     }
       printf("\n\n");
   }
     printf("\n\n\n\tThe Transpose of Matrix (A) is:");
     printf("\n\n");
   for (i=0; i<c; i++){
     for (j=0; j<r; j++)
       printf("\t  %2d  ", arrA[j][i]);
       printf("\n\n");
   }     //cheking skew-symmetric

     for (i=0; i<r; i++){
       for (j=0; j<c; j++){
	arrB[j][i]=arrA[i][j]*-1;

       }
     }
     for(i=0; i<r; i++){
       for(j=0; j<c; j++){
	  if(arrB[i][j]==arrA[i][j])
	      continue;
	  else{
	     printf("\n\n\tA != -A(transpose)");
	     printf("\n\n\t=>This is Non Skew-Symmetric Matrix");
	     printf("\n\n\nPress any key to go Main Menu.!");
	     goto label;
	      }
       }
     }
       printf("\n\n\tA = -A(transpose)");
       printf("\n\n\t=>This is Skew-Symmetric Matrix");
       printf("\n\n\nPress any key to go Main Menu.!");
}
else{
       printf("\n\n\n\n\t\t\tThis is Non-square Matrix");
       printf("\n\n\nPress any key to go Main Menu.!");
    }
label:
getch();
}