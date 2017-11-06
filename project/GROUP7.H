 #include <iostream.h>
 #include <conio.h>
 #include <stdio.h>


void start () {
    clrscr();
    gotoxy(25, 2);
    printf("MATRIX APPLICATION\n\n\n\n");
}

void showRectangular(){             // RECTANGULAR MATRIX

    start();

    int A[2][4]={1, 1, 1, 1, 2, 2, 2, 2};

    int i, j;
    gotoxy(25, 8);
    printf("RECTANGULAR MATRIX\n\n");

    printf("\n\n\tA Rectangular Matrix is a matrix whose number of\n\n\trows will");
    printf("never be equal to number of columns.\n\n");

    printf("\n\n\t=> No. of Rows != No. of Columns\n");

    printf("\n\n\t     Let A be any Matrix\n\n\n");

    printf("\tA = ");
    for(i=0; i<2; i++) {    // Start of For
        for(j=0; j<4; j++)
        printf(" %d ", A[i][j]);
        printf("\n");
        printf("\t    ");

    }               // End of For

    printf("\n\n\tWhose order is 2X4 is a Rectangular matrix.\n\n");

    gotoxy(25, 40);
    printf("Press any Key to go back!");

    getche();
}              // End of Rectangular Method



void showSquare() {                 // SQUARE MATRIX

    start();

    int A[2][4]={1, 1, 1, 1, 2, 2, 2, 2};

    int i, j;
    
    gotoxy(25, 8);
    printf("SQUARE MATRIX\n\n");

    printf("\n\n\tA Square Matrix is a matrix whose number of rows\n\n\twill always");
    printf(" be equal to number of columns.\n\n");

    printf("\n\n\t=> No. of Rows = No. of Columns\n");

    printf("\n\n\t     Let A be any Matrix\n\n\n");

    printf("\tA = ");
    for (i=0; i<2; i++){
        for(j=0; j<2; j++)
        printf(" %d ", A[i][j]);
        printf("\n");
        printf("\t    ");

    }

    printf("\n\n\tWhose order is 2X2 is a Square matrix.\n\n");

    gotoxy(25, 40);
    printf("Press any Key to go back!");

    getche();
}              // End of Square Method


void showDiagonal(int r, int r2, int c, int c2){                // DIAGONAL MATRIX

    start();
    int A[10][10];

    int i, j;

    int TEMP[3][3]={1, 0, 0, 0, 2, 0, 0, 0, 3};

    gotoxy(25, 8);
    printf("DIAGONAL MATRIX\n\n");


    printf("\n\n\tA Diagonal Matrix will always be a  Square matrix whose all\n\n\telements are zero except the diagonal elements.\n\n");

    printf("\n\n\t     Let D be any Matrix\n\n\n");

    printf("\tD = ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        printf(" %d ", TEMP[i][j]);
        printf("\n\t    ");
        // printf("");

    }
    printf("\n\n\tWhose order is 3X3 is a Diagonal matrix.\n\n");
    printf("\n\n\tNow you can try! Press Enter...\n\n");

    getch();
    clrscr();
    start();

    printf("\n\n\tMatrix A");

    printf("\n\n\tMatrix D");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c);

    if (r==c) {

        printf("\n\n\tEnter values for Matrix D in matrix order\n\n");

        printf("\tD = ");
        for(int i=0; i<r; i++) {
            for (int j=0; j<c; j++)
            scanf("%d", &D[i][j]);
            printf("\n\t    ");

        }    // End of for


        for(i=0; i<r; i++)
        for(int j=0; j<c; j++) {
            if (i==j){
                if(A[i][j]!=0);
                else {
                    printf("\n\n\tNon-Diagonal Matrix");
                    goto Label;
                }
            }
            else if(A[i][j]!=0){
                printf("\n\n\tNon-Diagonal Matrix");
                goto Label;
            }
        }

    }          // End of Diagonal Method
    
    printf("\n\n\tDiagonal Matrix");
    Label:
    gotoxy(25, 40);
    printf("Press any Key to go back!");

}          // End of Diagonal Method

void showScalarDiagonal(int r, int r2, int c, int c2){              // DIAGONAL MATRIX
    start();
    int A[10][10];

    int i, j;

    int TEMP[3][3]={5, 0, 0,
        0, 5, 0,
        0, 0, 5};

    gotoxy(25, 8);
    printf("SCALAR DIAGONAL MATRIX\n\n");

    printf("\n\n\tA Diagonal Matrix will always be a Square matrix whose all\n\n\telements are zero except the diagonal elements & the diagonal elements\n\n\twill be same.\n\n");

    printf("\n\n\t     Let S be any Matrix\n\n\n");

    printf("\tS = ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        printf(" %d ", TEMP[i][j]);
        printf("\n\t    ");
        // printf("");

    }
    printf("\n\n\tWhose order is 3X3 is a Scalar Diagonal matrix.\n\n");

    printf("\n\n\tNow you can try! Press Enter...\n\n");

    getch();
    clrscr();
    start();

    printf("\n\n\tMatrix A");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c);


    if (r==c)  {  // Start of IF

        printf("\n\n\tEnter values for Matrix A in matrix order");
        printf("\n\n\tA = ");
        for(i=0; i<r; i++) {
            for(j=0; j<c; j++)
            scanf("%d", &A[i][j]);
            printf("\n\t    ");
        }

        for(i=0; i<r; i++)
        for(int j=0; j<c; j++) {
            if (i==j){
                if(A[i][j]==A[0][0]);
                else {
                    printf("\n\nThis is a non-Scalar Diagonal matrix.");
                    goto Label;
                }
            }
            else if(A[i][j]!=0){
                printf("\n\nThis is a non-Scalar Diagonal matrix.");
                goto Label;
            }
        }
        
        printf("\n\nThis is a Scalar Diagonal matrix.");
    }
    else{
        printf("\n\nThis is a non-Square matrix.");
    }

    Label:
    gotoxy(25, 40);
    printf("Press any Key to go back!");
    getch();
}
void showUnitary(int r, int r2, int c, int c2){             // UNITARY MATRIX

    start();
    int A[3][3]={1, 0, 0, 0, 1, 0, 0, 0, 1};

    int i, j;

    gotoxy(25, 8);
    printf("UNITARY MATRIX\n\n");

    printf("\n\n\tA Square Matrix Whose all elements except diagonal\n\n\telements");
    printf("are zero '0' and the diagonal elements are '1'.\n\n");

    printf("\n\n\t     Let U be any Matrix\n\n\n");

    printf("\tU = ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        printf(" %d ", A[i][j]);
        printf("\n");
        printf("\t    ");

    }

    printf("\n\nThis is a simple Unitary matrix & also called Scalar Diagonal Matirx.");

    printf("\n\n\tWhose order is 3X3 is a Unitary matrix.\n\n");
    
    printf("\n\n\tNow you can try! Press Enter...\n\n");

    getch();
    clrscr();
    start();

    printf("\n\n\tMatrix A");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c);
    
    if (r==c)  {  // Start of IF
    
        printf("\n\n\tA = ");
        for(i=0; i<r; i++) {
            for(j=0; j<c; j++)
            scanf("%d", &A[i][j]);
            printf("\n\t    ");     
        }
    
        for(i=0; i<r; i++)
        for(j=0; j<c; j++){
            if(i==j && A[i][j]!=1){
                printf("\n\nThis matrix is not a Unitary Diagonal.");
                goto Label;
            }
        }       
        printf("\n\nThis is a Unitary Diagonal matrix.");       
    }
    else{
        printf("\n\nThis is a non-Square matrix.");         
    }
    
    Label:
    gotoxy(25, 40);
    printf("Press any Key to go back!");             
    getch();
}          // End of Unitary Method


void showAddition(int r, int r2, int c, int c2){            // MATRICES WITH ADDITION

    start();

    int A[10][10], B[10][10], C[10][10];

    int i, j;
    
    gotoxy(25, 8);
    printf("ADDITION OF MATRIX\n\n");

    printf("\n\n\tMatrix A");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c);

    printf("\n\n\tMatrix B");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r2);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c2);

    if (r==r2 && c==c2)  {  // Start of IF
        clrscr();
        printf("\n\n\tAddition is possible:");

        printf("\n\n\tEnter values for Matrix A in matrix order\n\n");

        printf("\tA = ");
        for(i=0; i<r; i++) {
            for(j=0; j<c; j++)
            scanf("%d", &A[i][j]);
            printf("\n");
            printf("\t    ");

        }    // End of for


        printf("\n\n\tEnter values for Matrix B in matrix order\n\n");

        printf("\tB = ");
        for(i=0; i<r2; i++) {
            for (j=0; j<c2; j++)
            scanf("%d", &B[i][j]);
            printf("\n");
            printf("\t    ");

        }   // End of for

        printf("\n\n\tThe values of Matrix A is:\n");

        printf("\tA = ");
        for(i=0; i<r; i++) {
            for (j=0; j<c; j++)
            printf("%d", A[i][j]);
            printf("\n");
            printf("\t    ");

        }            // End of A

        printf("\n\n\tThe values of Matrix B is:\n");

        printf("\tB = ");
        for(i=0; i<r2; i++) {
            for(j=0; j<c2; j++)
            printf("%d", B[i][j]);
            printf("\n");
            printf("\t    ");

        }            // End of B


        printf("\n\n\tThe Addition of Matrices A & B is:\n");

        for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        C[i][j]=A[i][j]+B[i][j];


        printf("\tA+B = ");
        for(i=0; i<r; i++) {                // Start of outer For
            for(j=0; j<c; j++)
            printf("%d ", C[i][j]);
            printf("\n\t    ");

        }

    }           // End of IF
    else{           // Start of Else

        printf("\n\n\n\t\tThe Entered Matrices are not Square type\n");
        printf("\n\n\t\tADDITION is not possible !\n");

    }           // End of Else

    printf("\n\t\tPress any Key to go back.\n\n");
    getche();

}      // End of Addition Method



void showSubtraction(int r, int r2, int c, int c2){
    // MATRICES WITH SUBTRACTION

    start();

    int A[10][10], B[10][10], C[10][10];

    int i, j;
    
    gotoxy(24, 8);
    printf("SUBTRACTION OF MATRIX");

    printf("\n\n\tMatrix A");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c);

    printf("\n\n\tMatrix B");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r2);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c2);

    if (r==r2 && c==c2)  {  // Start of IF

        printf("\n\n\tSubtraction is possible:");

        printf("\n\n\tEnter values for Matrix A in matrix order\n\n");

        printf("\tA = ");
        for(i=0; i<r; i++) {
            for(j=0; j<c; j++)
            scanf("%d", &A[i][j]);
            printf("\n");
            printf("\t    ");

        }

        printf("\n\n\tEnter values for Matrix B in matrix order\n\n");

        printf("\tB = ");
        for(i=0; i<r2; i++) {
            for(j=0; j<c2; j++)
            scanf("%d", &B[i][j]);
            printf("\n");
            printf("\t    ");

        }

        clrscr();
        start();

        printf("\n\n\tThe values of Matrix A is:\n");

        printf("\n\tA = ");
        for(i=0; i<r; i++) {    // start of A
            for(j=0; j<c; j++)
            printf("%d ", A[i][j]);
            printf("\n");
            printf("\t    ");

        }            // End of A

        printf("\n\n\tThe values of Matrix B is:\n");

        printf("\n\tB = ");
        for(i=0; i<r2; i++) { // Start of B
            for(j=0; j<c2; j++)
            printf("%d ", B[i][j]);
            printf("\n");
            printf("\t    ");

        }           // End of B


        int sub;

        printf("\n\n1. A - B");
        printf("\n2. B - A");

        printf("\n\nEnter your selection: ");
        scanf("%d", &sub);

        if(sub==1) {

            printf("\n\n\tThe Subtraction of Matrices A - B is:\n");

            for(i=0; i<r; i++)
            for(j=0; j<c; j++)
            C[i][j]=A[i][j]-B[i][j];

            printf("\n\tA-B = ");
            for(i=0; i<r; i++) {     // Start of outer for
                for(j=0; j<c; j++)
                printf("%d ", C[i][j]);
                printf("\n");
                printf("\t    ");

            }             // End of Outer For
        }   // End of Inner If

        if(sub==2) {

            printf("\n\n\tThe Subtraction of Matrices B - A is:\n");

            for(i=0; i<r; i++)
            for(j=0; j<c; j++)
            C[i][j]=B[i][j]-A[i][j];

            printf("\n\tB-A = ");
            for(i=0; i<r; i++) {                 // Start of outer For
                for(int j=0; j<c; j++)
                printf("%d ", C[i][j]);
                printf("\n");
                printf("\t    ");

            }             // End of Outer For
        }    // End of If

    }               // End of IF

    else    {           // Start of Else

        printf("\n\n\n\t\tThe Entered Matrices are not Square type\n");
        printf("\n\n\t\tSUBTRATION is not possible !\n\n");

    }           // End of Else

    printf("\n\t\tPress any Key to go back.\n\n");
    getche();

}      // End of Subtraction Method


void showScalarMultiplication(int r, int r2, int c, int c2){
    // SCALAR MULTIPLICATION

    start();
    int A[3][3]={2, 4, 3, 4, 2, 3, 6, 7, 4};

    int i, j;
    
    gotoxy(24, 8);
    printf("SCALAR MULTIPLICATION");

    printf("\n\n\tLet K is a scalar and A be any Square Matrix then every\n\n\t");
    printf("element of A is multiplied with a scalar K.\n");

    printf("\n\n\tLet A be any Square Matrix\n\n");

    for(i=0; i<3; i++){
        printf("\t");
        for(j=0; j<3; j++)
        printf(" %d ", A[i][j]);
        printf("\n");
    }

    printf("\n\n\n\t");
    printf("Let 5 is a scalar which multiplies matrix A\n\n");

    for(i=0; i<3; i++){
        printf("\t");
        for(j=0; j<3; j++)
        printf(" %d ", 5*A[i][j]);
        printf("\n");

    }

    printf("\n\n\tWhose order is 3X3 is a Scalar Diagonal matrix.\n\n");
    printf("\n\n\n\tPress any Key to perform Scalar Multiplication.\n\n");

    getche();

    clrscr();
    start();

    printf("\n\n\tMatrix A");

    printf("\n\n\tEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\n\tEnter No. of Columns:	");
    scanf("%d", &c);

    printf("\n\n\tEnter values for Matrix A in matrix order\n\n");

    printf("\tA = ");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++)
        scanf("%d", &A[i][j]);
        printf("\n");
        printf("\t    ");

    }

    printf("\n\n\tEnter any Scalar value: ");
    scanf("%d", &r2);

    printf("\n\n\tThe values of Matrix A after multiplication is:\n");

    printf("\n\tA = ");
    for(i=0; i<r; i++) {    // start of A
        for(j=0; j<c; j++)
        printf(" %d ", r2*A[i][j]);
        printf("\n");
        printf("\t    ");

    }            // End of A

    gotoxy(25, 40);
    printf("Press any Key to go back!");

    getche();

}       // End of ScalarMultiplication Method


void showMultiplication(int r, int r2, int c, int c2){
    // SquareMultiplication
    start();

    int A[3][3];
    int B[3][3];
    int C[3][3];
    int X[3][3][3];
    
    int i, j, m;

    gotoxy(25, 8);
    printf("\n\n\tSQUARE MULTIPLICATION");

    printf("\n\nEnter Rows: ");
    scanf("%d", &r);

    printf("\n\nEnter Columns: ");
    scanf("%d", &c);

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
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++)
        printf("%d ", A[i][j]);

        printf("\n");

    }


    // SHOWING MATRIX B

    printf("\n\nThe values of Matrix B is:\n\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++)
        printf("%d ", B[i][j]);

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
    }   // END OF MAIN LOGIC



    printf("\n==========Matrix C==========\n\n");
    for(i=0;i<r;i++)  {
        for(j=0;j<c;j++)
        printf("%d ", C[i][j]);

        printf("\n");

    }

    printf("\n\tPress any Key to go back.\n\n");
    getche();
}      // End of Multiplication Method


void showTranspose(int r, int r2, int c, int c2){                    // MATRICES WITH TRANSPOSE

    start();

    int A[10][10], B[10][10];

    int i, j;
    
    gotoxy(25, 8);
    printf("TRANSPOSE OF MATRIX\n\n");

    printf("\n\n\tMatrix A");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c);

    printf("\n\nEnter values for Matrix A in matrix order\n");

    for(i=0; i<r; i++)
    for(j=0; j<c; j++)
    scanf("%d", &A[i][j]);

    printf("\n\nThe transpose of Matrix A is:\n");

    printf("\tA = ");
    for(i=0; i<c; i++) {            // Start of for body
        for(j=0; j<r; j++)
        printf("%d ", A[j][i]);
        printf("\n");
        printf("\t");

    }           // End of for

    gotoxy(25, 40);
    printf("Press any Key to go back!");

    getche();

}                      // End of Transpose Method

void showSymetric(int r, int r2, int c, int c2){                    // SYMMETRIC MATRIX

    start();
    int C[2][2]={2, 3, 3, 5};
    
    int A[10][10];
    int B[10][10];

    int i, j;
    
    gotoxy(25, 8);
    printf("SYMETRIC MATRIX\n\n");

    printf("\n\n A Square Matrix is said to be Symmetric,\n\n");
    printf("\n\n\t If A(transpose) = A\n");

    printf("\n\n\n\tLet A be any Matrix\n\n");

    printf("\tC = ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++)
        printf(" %d ", C[i][j]);
        printf("\n");
        printf("\t");
    }
        
    printf("\n\n\t     Transpose of Matrix A will be\n\n\n");

    printf("\tC = ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++)
        printf(" %d ", C[j][i]);
        printf("\n");
        printf("\t");
    }
    
    printf("\n\n\tNow you can try! Press Enter...\n\n");

    getch();
    clrscr();
    start();

    printf("\n\n\tMatrix A");

    printf("\n\nEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\nEnter No. of Columns:	");
    scanf("%d", &c);
    
    // A[r][c];
    
    printf("\n\n\tA = ");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d ", &A[i][j]); 
        }
    }
    
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            B[i][j]=A[j][i];
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(B[i][j]==A[i][j]){              
                printf("%d ", B[i][j]);
            }else{
                printf("\nNo symmetric");
                goto Label;
            } 
        }
        printf("\n");
    }

    printf("\nSymmetric");
    
    Label:
    gotoxy(25, 40);
    printf("Press any Key to go back!");
    getche();

}          // End of Symetric Method

void showSkewSymetric (int r, int r2, int c, int c2){                // SKEW SYMETRIC MATRIX
    
    start();
    
    int A[3][3]={0, 1, 2, -1, 0, -3, -2, 3, 0};

    int i, j;
    
    gotoxy(25, 8);
    printf("SKEW-SYMETRIC MATRIX\n\n");

    printf("\n\nA Square Matrix is said to be Skew-Symmetric,\n\n");
    printf("\n\n\t If A(transpose) = -A\n");

    printf("\n\n\n\tLet A be any Matrix\n\n");


    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
        printf(" %d ", A[i][j]);
        printf("\n");
        printf("\t");

    }


    printf("\n\n\t     Transpose of Matrix A will be\n\n\n");


    printf("\tA = ");
    for(i=0; i<3; i++){
        printf("\t");
        for(j=0; j<3; j++)
        printf(" %d ", A[j][i]);
        printf("\n");
    }

    gotoxy(25, 40);
    printf("Press any Key to go back!");
    getche();

}          // End of Skew-Symetric Method


void showMatrixValidation (int r, int r2, int c, int c2) {                   // MATRIX VALIDATION

    start();
    
    int A[10][10], B[10][10];
    
    int i, j;
    
    gotoxy(25, 8);
    printf("\n\n\tVALIDATION MATRIX");

    printf("\n\n\tMatrix A\n");

    printf("\n\tEnter No. of Rows:	");
    scanf("%d", &r);

    printf("\n\tEnter No. of Columns:	");
    scanf("%d", &c);

    printf("\n\n\tEnter values for Matrix A in matrix order\n\n");

    printf("\tA = ");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++)
        scanf("%d", &A[i][j]);
        printf("\n");
        printf("\t    ");

    }

    printf("\n\n\tMatrix B\n");

    printf("\n\tEnter No. of Rows:	");
    scanf("%d", &r2);

    printf("\n\tEnter No. of Columns:	");
    scanf("%d", &c2);


    printf("\n\n\tEnter values for Matrix B in matrix order\n\n");

    printf("\tB = ");
    for(i=0; i<r2; i++) {
        for(j=0; j<c2; j++)
        scanf("%d", &B[i][j]);
        printf("\n");
        printf("\t    ");

    }

    printf("\n\n\tThe values of Matrix A is:\n");

    printf("\tA = ");
    for(i=0; i<r; i++) {    // start of A
        for(j=0; j<c; j++)
        printf("%d ", A[i][j]);

        printf("\n");
        printf("\t    ");

    }        // End of A

    printf("\n\n\tThe values of Matrix B is:\n");

    printf("\tA = ");
    for(i=0; i<r2; i++) { // Start of B
        for(j=0; j<c2; j++)
        printf("%d ", B[i][j]);

        printf("\n");
        printf("\t    ");

    }       // End of B

    if (r==c)      // Start of if for Matrix A
    printf("\n\n\tA is a Square Matrix\n");
    /*    for (i=0; i<r; i++) { // Matrix A
    for (int j=0; j<c; j++)
        if (i==j) {
         if (A[i][j]==0)
         break;
         else
         printf("Diagonal Matrix");
        }
        else if (i==j!=0)
        ;
        else
        ;
    }                       //Matrix A End

        */

    else
    printf("\n\tA is a Rectangular Matrix\n");

    if (r2==c2)    // Start of if for Matrix B
    printf("\n\tB is a Square Matrix\n");

    else
    printf("\n\tB is a Rectangular Matrix\n");


    printf("\n\tPress any Key to go back!\n\n");
    getche();
}          // End of MatrixValidation Method
