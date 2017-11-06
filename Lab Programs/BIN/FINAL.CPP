#include <stdio.h>
#include <conio.h>

void showRectangular(int r, int r2, int c, int c2);
void showSquare(int r, int r2, int c, int c2);
void showDiagonal(int r, int r2, int c, int c2);
void showUnitary(int r, int r2, int c, int c2);
void showAddition(int r, int r2, int c, int c2);
void showSubtraction(int r, int r2, int c, int c2);
void showDivision(int r, int r2, int c, int c2);
void showScalarMultiplication(int r, int r2, int c, int c2);
void showMultiplication(int r, int r2, int c, int c2);
void showTranspose(int r, int r2, int c, int c2);
void showSymetric(int r, int r2, int c, int c2);
void showSkewSymetric(int r, int r2, int c, int c2);
void showHermitian(int r, int r2, int c, int c2);
void showSkewHermitian(int r, int r2, int c, int c2);

    int r,c,r2,c2;

 void start () {
    clrscr();
    gotoxy(25,2);
    printf("MATRIX APPLICATION");
 }

 void main () {
  int op;
    clrscr();
    gotoxy(25,20);
    printf("WELCOME TO MATRIX APPLICATION");
    printf("\n\n\n\t\t\t  PRESS ENTER TO CONTINUE...");
    getche();

    clrscr();
    gotoxy(5,5);
    printf("The Application is intended to solve and clear the basic concepts of\n\t Matrix (plural Matrices). This is a basic Matrix Application.");

    gotoxy(30,10);
    printf("GOOD LUCK !");
    printf("\n\n\n\n\tEnter order of the Matrix A  in Rows and Columns (mxn): ");
    scanf("%d %d",&r,&c);

    printf("\n\n\tEnter order of the Matrix B  in Rows and Columns (mxn): ");
    scanf("%d %d",&r2,&c2);

    start();

    gotoxy(8,8);
    printf("Selection Menu for the Matrix");
    gotoxy(10,10);
    printf("\n\n\t1  RECTANGULAR MATRIX");
    printf("\n\n\t2. SQUARE MATRIX");
    printf("\n\n\t3. DIAGONAL MATRIX");
    printf("\n\n\t4. UNITARY MATRIX");
    printf("\n\n\t5. ADDITION MATRIX");
    printf("\n\n\t6. SUBTRACTION MATRIX");
    printf("\n\n\t7. DIVISION MATRIX");
    printf("\n\n\t8. SCALAR MULTIPLICATION MATRIX");
    printf("\n\n\t9. MULTIPLICATION MATRIX");
    printf("\n\n\t10.TRANSPOSE MATRIX");
    printf("\n\n\t11.SYMETRIC MATRIX");
    printf("\n\n\t12.SKEW-SYMETRIC MATRIX");
    printf("\n\n\t13.HERMITIAN MATRIX");
    printf("\n\n\t14.SKEW-HERMITIAN MATRIX");
    printf("\n\n\t15.EXIT");

    switch (op) {

    case 1:
    showRectangular(r, r2, c, c2);
    break;

    case 2:
    showSquare(r, r2, c, c2);
    break;

    case 3:
    showDiagonal(r, r2, c, c2);
    break;

    case 4:
    showUnitary(r, r2, c, c2);
    break;

    case 5:
    showAddition(r, r2, c, c2);
    break;

    case 6:
    showSubtraction(r, r2, c, c2);
    break;

    case 7:
    showDivision(r, r2, c, c2);
    break;

    case 8:
    showScalarMultiplication(r, r2, c, c2);
    break;

    case 9:
    showMultiplication(r, r2, c, c2);
    break;

    case 10:
    showTranspose(r, r2, c, c2);
    break;

    case 11:
    showSymetric(r, r2, c, c2);
    break;

    case 12:
    showSkewSymetric(r, r2, c, c2);
    break;

    case 13:
    showHermitian(r, r2, c, c2);
    break;

    case 14:
    showSkewHermitian(r, r2, c, c2);
    break;

    default:
    break;
  }
    getch();

}


void showRectangular(int r, int r2, int c, int c2){

    clrscr();

    int A[2][4]={1,1,1,1,2,2,2,2};

    // RECTANGULAR MATRIX

    printf("\n\n\tRECTANGULAR MATRIX");

    printf("\n\n A Rectangular Matrix is a matrix whose number of\n rows will never be equal to number of columns.");

    printf("\n\n\t=> No. of Rows != No. of Columns\n");

    printf("\n\n\tLet A be any Matrix\n\n");


    for (int i=0; i<2; i++){
       printf("\t");
       for(int j=0; j<4; j++)
       printf(" %d ",A[i][j]);
    printf("\n");

    }


       printf("\n\tWhose order is 2X4 is a rectangular matrix.\n\n");
       getche();
}


void showSquare(int r, int r2, int c, int c2){
    clrscr();

    int A[2][4]={1,1,1,1,2,2,2,2};
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


void showDiagonal(int r, int r2, int c, int c2){
    clrscr();

    int A[3][3]={1,0,0,0,2,0,0,0,3};

                // DIAGONAL MATRIX
    printf("\n\n\tDIAGONAL MATRIX");

    printf("\n\n A Diagonal Matrix will always be a  Square matrix whose all elements\n are zero except the diagonal elements.");

    printf("\n\n\tLet E be any Matrix\n\n");


    for (int i=0; i<3; i++){
       printf("\t");
       for(int j=0; j<3; j++)
       printf(" %d ",A[i][j]);
    printf("\n");

    }


    printf("\n\tWhose order is 3X3 is a Diagonal matrix.\n\n");


    getche();
}


void showUnitary(int r, int r2, int c, int c2){
    clrscr();

    int A[3][3]={1,0,0,0,1,0,0,0,1};

            // UNITARY MATRIX
    printf("\n\n\tUNITARY MATRIX");

    printf("\n\n A Square Matrix Whose all elements except diagonal\n elements are zero '0' and the diagonal elements are '1'.");

    printf("\n\n\tLet U be any Matrix\n\n");


    for (int i=0; i<3; i++){
       printf("\t");
       for(int j=0; j<3; j++)
       printf(" %d ",A[i][j]);
    printf("\n");

    }


    printf("\n\tWhose order is 3X3 is a Unitary matrix.\n\n");


    getche();
    }


void showAddition(int r, int r2, int c, int c2){
    clrscr();       // MATRICES WITH ADDITION

    int A[40][40],B[40][40];

    printf("\t\t\t");
    textcolor(3);
    cprintf("\n\nMatrix Application");

     printf("\n\nMatrix A");

     printf("\n\nEnter No. of Rows:	");
     scanf("%d",&r);

     printf("\n\nEnter No. of Columns:	");
     scanf("%d",&c);

     printf("\n\nEnter values for Matrix A in matrix order\n");
    
        for (int i=0; i<r; i++)
                       for (int j=0; j<c; j++)
               scanf("%d",&A[i][j]);

     printf("\n\nMatrix B");

     printf("\n\nEnter No. of Rows:	");
     scanf("%d",&r2);

     printf("\n\nEnter No. of Columns:	");
     scanf("%d",&c2);

           
     printf("\n\nEnter values for Matrix B in matrix order\n");

        for (int k=0; k<r2; k++)
          for (int l=0; l<c2; l++)
          scanf("%d",&B[k][l]);


     printf("\n\nThe values of Matrix A is:\n");
          for (i=0; i<r; i++) {     // start of A
            for (j=0; j<c; j++)
            printf("%d ",A[i][j]);

         printf("\n");

       }             // End of A
 
     printf("\n\nThe values of Matrix B is:\n");
           for (k=0; k<r2; k++) {   // Start of B
              for (l=0; l<c2; l++)
              printf("%d ",B[k][l]);

              printf("\n");

       }            // End of B


        if (r==r2 && c==c2)  {  // Start of IF
                 
        printf("\n\nThe Addition of Matrices A & B is:\n");
            for (k=0; k<r; k++) {               // Start of Inner body
                for (l=0; l<c; l++)
                printf("%d ",A[k][l]+B[k][l]);

            printf("\n");

       }             // End of Inner body

    }               // End of IF

  else  {           // Start of Else

       printf("\n\nThe Entered Matrices are not Square type");
       printf("\n\n\t\tADDITION is not possible !");

    }           // End of Else
    getche();
    }


void showSubtraction(int r, int r2, int c, int c2){
    
    clrscr();       // MATRICES WITH SUBTRACTION

        int A[40][40],B[40][40];

        printf("\t\t\t");
        textcolor(3);
        cprintf("\n\nMatrix Application");

        printf("\n\nMatrix A");

        printf("\n\nEnter No. of Rows:	");
        scanf("%d",&r);

        printf("\n\nEnter No. of Columns:	");
        scanf("%d",&c);

        printf("\n\nEnter values for Matrix A in matrix order\n");
    
        for (int i=0; i<r; i++)
           for (int j=0; j<c; j++)
           scanf("%d",&A[i][j]);

        printf("\n\nMatrix B");

        printf("\n\nEnter No. of Rows:	");
        scanf("%d",&r2);

        printf("\n\nEnter No. of Columns:	");
        scanf("%d",&c2);

           
        printf("\n\nEnter values for Matrix B in matrix order\n");

        for (int k=0; k<r2; k++)
           for (int l=0; l<c2; l++)
           scanf("%d",&B[k][l]);


        printf("\n\nThe values of Matrix A is:\n");
            for (i=0; i<r; i++) {       // start of A
              for (j=0; j<c; j++)
              printf("%d ",A[i][j]);

              printf("\n");
    
           }             // End of A
 
       printf("\n\nThe values of Matrix B is:\n");
            for (k=0; k<r2; k++) {  // Start of B
              for (l=0; l<c2; l++)
              printf("%d ",B[k][l]);

             printf("\n");

           }            // End of B
    }


void showDivision(int r, int r2, int c, int c2){
    }


void showScalarMultiplication(int r, int r2, int c, int c2){
    clrscr();

    int A[3][3]={2,4,3,4,2,3,6,7,4};

         // SCALAR MULTIPLICATION
    printf("\n\n\tSCALAR MULTIPLICATION MATRIX");

    printf("\n\n Let K is a scalar and A be any Square Matrix then every\n element of A is multiplied with a scalar K.");

    printf("\n\n\tLet A be any Square Matrix\n\n");

    for (int i=0; i<3; i++){
       printf("\t");
       for(int j=0; j<3; j++)
       printf(" %d ",A[i][j]);
    printf("\n");

    }


    printf("\n\n\tLet 5 is a scalar which multiplies matrix A\n\n");


    for (i=0; i<3; i++){
       printf("\t");
       for(int j=0; j<3; j++)
       printf(" %d ",5*A[i][j]);
    printf("\n");

    }


    printf("\n\tWhose order is 3X3 is a Scalar Diagonal matrix.\n\n");


    getche();

    }
void showMultiplication(int r, int r2, int c, int c2){
       clrscr();

     int A[3][3];
     int B[3][3];
     int C[3][3];
     int X[3][3][3];
     int i,j,m;

     printf("\n\nSQUARE MATRIX MULTIPLICATION");

     printf("\n\nEnter Rows: ");
     scanf("%d",&r);

        printf("\n\nEnter Columns: ");
        scanf("%d",&c);

    printf("\t\tEnter matrix A\n\n");
    printf("Enter values in Matrix form:\n");

     for(i=0;i<r;i++)  {
       for(j=0;j<c;j++)  {
               scanf("%d", &A[i][j]);
           C[i][j]=0;
      }
     }


     printf("\n\t\tEnter matrix B\n\n");
     printf("Enter values in Matrix form:\n");
     for(i=0;i<r;i++) {
       for(j=0;j<c;j++) {
          scanf("%d", &B[i][j]);
      }
     }

        // SHOWING MATRIX A

     printf("\n\nThe values of Matrix A is:\n");
          for (i=0; i<r; i++) {
           for (j=0; j<c; j++)
           printf("%d ",A[i][j]);

             printf("\n");

           }


        // SHOWING MATRIX B

    printf("\n\nThe values of Matrix B is:\n\n");
           for (i=0; i<r; i++) {
            for (j=0; j<c; j++)
            printf("%d ",B[i][j]);

             printf("\n");

           }

        // MAIN LOGIC OF MULTIPLICATION

     for(i=0;i<r;i++)  {
        for(j=0;j<c;j++)  {
           for(m=0;m<r;m++)  {
              X[i][j][m]=A[i][m]*B[m][j];
              C[i][j]+=X[i][j][m];
           }
        }
         }



     printf("\n==========Matrix C==========\n\n");
     for(i=0;i<r;i++)  {
     for(j=0;j<c;j++)
        printf("%d ",C[i][j]);

     printf("\n");

     }

    getche();
    }


void showTranspose(int r, int r2, int c, int c2){
    clrscr();       // MATRICES WITH TRANSPOSE

        int A[40][40],B[40][40];

    printf("\t\t\t");
    textcolor(3);
    cprintf("\n\nMatrix Application");

     printf("\n\nMatrix A");

     printf("\n\nEnter No. of Rows:	");
     scanf("%d",&r);

     printf("\n\nEnter No. of Columns:	");
     scanf("%d",&c);

     printf("\n\nEnter values for Matrix A in matrix order\n");
    
        for (int i=0; i<r; i++)
           for (int j=0; j<c; j++)
           scanf("%d",&A[i][j]);
    
      printf("\n\nThe transpose of Matrix A is:\n");
        for (i=0; i<c; i++) {           // Start of for body
           for (j=0; j<r; j++)
      printf("%d ",A[j][i]);

      printf("\n");

           }            // End of for


         getche();
    }


void showSymetric(int r, int r2, int c, int c2){
    clrscr();

  int A[2][2]={2,3,3,5};

            // SYMMETRIC MATRIX
    printf("\n\n\tSYMMETRIC MATRIX");

    printf("\n\n A Square Matrix is said to be Symmetric,\n\n\t\tIf A(transpose) = A.");

    printf("\n\n\n\tLet A be any Matrix\n\n");


    for (int i=0; i<2; i++){
       printf("\t");
       for(int j=0; j<2; j++)
       printf(" %d ",A[i][j]);
    printf("\n");

    }


    printf("\n\n\tTranspose of Matrix A will be\n\n");

    for (i=0; i<2; i++){
       printf("\t");
       for(int j=0; j<2; j++)
       printf(" %d ",A[j][i]);
    printf("\n");

    }

    getche();

    }
void showSkewSymetric (int r, int r2, int c, int c2){
    }
void showHermitian (int r, int r2, int c, int c2){
    }
void showSkewHermitian (int r, int r2, int c, int c2){
    }