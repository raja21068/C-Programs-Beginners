void welcome();
void note();
void doSquare();
void doRectangular();
void doDiagonal();
void doScalarDiagonal();
void doUnitary();
void doAddition();
void doSubtraction();
void doScalarMultiplication();
void doMultiplication();
void doTranspose();
void doSymmetric();
void doSkewSymmetric();
void doValidation();

void main(void){
    int i, sel = 0;
    char *menu[] = {
		  "SQUARE MATRIX",
		  "RECTANGULAR MATRIX",
		  "DIAGONAL MATRIX",
		  "SCALAR DIAGONAL MATRIX",
		  "UNITARY MATRIX",
		  "ADDITION MATRIX",
		  "SUBTRACTION MATRIX",
		  "SCALAR MULTIPLICATION MATRIX",
		  "MULTIPLICATION MATRIX",
		  "TRANSPOSE MATRIX",
		  "SYMETRIC MATRIX",
		  "SKEW-SYMETRIC MATRIX",
		  "MATRIX VALIDATION",
		  "EXIT"
		};
    int	size = sizeof(menu)/sizeof(int);

    welcome();
    note();
    do{
	clrscr();
	printf("\n\t\t\t\tMARTRIX APPLICATION\n\n\n\n");
	for(i = 0; i < size; i++){
	    printf("\t%2d. %s\n\n\n", (i+1), menu[i]);
	}
	printf("\n\nEnter your selection: ");
	scanf("%d", &sel);

	switch(sel){
	    case 1:
	    doSquare();
	    break;
	    case 2:
	    doRectangular();
	    break;
	    case 3:
	    doDiagonal();
	    break;
	    case 4:
	    doScalarDiagonal();
	    break;
	    case 5:
	    doUnitary();
	    break;
	    case 6:
	    doAddition();
	    break;
	    case 7:
	    doSubtraction();
	    break;
	    case 8:
	    doScalarMultiplication();
	    break;
	    case 9:
	    doMultiplication();
	    break;
	    case 10:
	    doTranspose();
	    break;
	    case 11:
	    doSymmetric();
	    break;
	    case 12:
	    doSkewSymmetric();
	    break;
	    case 13:
	    doValidation();
	    break;
	    default:
	    break;
	}
    }while(sel != 14);
}

void welcome(){
    clrscr();
    gotoxy(25,20);
    printf("WELCOME TO MARTRIX APPLICATION");
    printf("\n\n\n\t\t\t  PRESS ENTER TO CONTINUE...");
    getch();
}
void note(){
    clrscr();
    gotoxy(30,10);
    printf("PROGGAMMER'S NOTE");
    gotoxy(25,13);
    printf("\n\n\n   The Application is intended to solve and clear the basic ");
    printf("concepts of Matrix\n\n   (plural Matrix)");
    printf("\n\n\n=>  This Matrix Apllication involves all the basic Matrix Properties ");
    printf("that are\n\n    required by the basic learners of Matrices. Moreover it ");
    printf("defines each\n\n    property with an example. GOOD LUCK.! Press Enter to Continue");
    getch();
}
void doSquare(){
    int arr[2][2]={3,3,5,5};
    int i,j;
    clrscr();
    gotoxy(30,4);
    printf("SQUARE MATRIX");
    printf("\n\n\n\n\n\n\t A Square Matrix is a matrix whose number of rows will\n");
    printf("\n\n\t always be equal to number of columns.\n\n");
    printf("\n\n\t => No. of rows = No. of columns");
    printf("\n\n\n\n\n\t Let A be any matrix");
    printf("\n\n\n\n\t A =");

    for (i=0; i<2; i++){
	for (j=0; j<2; j++){
	    printf(" %d ", arr[i][j]);
	}
	printf("\n\n\t    ");
    }
    printf("\n\n\n\t Whose order is 2X2 is a Square matrix.");
    printf("\n\n\n\n\n Press any key to go Main Menu!");

    getch();
}
void doRectangular(){
    int arr[3][4]={3,3,3,3,5,5,5,5,7,7,7,7};
    int i,j;
    clrscr();
    gotoxy(30,4);
    printf("RECTANGULAR MATRIX");
    printf("\n\n\n\n\n\n\n\t A Rectangular Matrix is a matrix whose number of rows will\n");
    printf("\n\n\t never be equal to number of columns.\n\n");
    printf("\n\n\t => No. of rows != No. of columns");
    printf("\n\n\n\n\n\t Let A be any matrix");
    printf("\n\n\n\n\t A =");
    for (i=0; i<3; i++){
       for (j=0; j<4; j++){
	  printf(" %d ", arr[i][j]);
       }
       printf("\n\n\t    ");
    }
    printf("\n\n\n\t Whose order is 3X4 is a Rectangular matrix.");
    printf("\n\n\n\n\n Press any key to go back!");

    getch();
}
void doDiagonal(){
    int ar[3][3]={1,0,0,0,2,0,0,0,3};
    int arr[10][10];
    int i,j,r,c,temp=0;
    clrscr();
    gotoxy(30,4);
    printf("DIAGONAL MATRIX");
    printf("\n\n\n\n\n\n\t A Diagonal Matrix will always be a square matrix whose all\n");
    printf("\n\n\t elements are zero expect the diagonal elements.\n\n");
    printf("\n\n\n\n\t Let D be any matrix");
    printf("\n\n\n\n\t D =");
    for (i=0; i<3; i++){
	for (j=0; j<3; j++){
	    printf(" %d ", ar[i][j]);
	}
	printf("\n\n\t    ");
    }
    printf("\n\n\n\tWhose order is 3X3 is a Diagonal matrix.");
    printf("\n\n\n\n\n\tNow you can try! press Enter...");

    getch();
    clrscr();

    printf("\n\n\n\t\t\t    DIAGONAL MATRIX");
    printf("\n\n\n\n\n\tMatrix D");

    printf("\n\n\n\n   Enter No. of Rows:       ");
    scanf("%d",&r);

    printf("\n\n\n\n   Enter No. of Columns:    ");
    scanf("%d",&c);

    if(r==c){
	clrscr();
	printf("\n\n\n\n\n\t\t\tInput the value of Matrix(D)");
	printf("\n\n\n");
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arr[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();

	printf("\n\tMatrix (D) [%d X %d]",r,c);
	printf("\n\n\n");
	for(i=0; i<=r-1; i++){
	    for(j=0; j<=c-1; j++){
		printf("\t  %2d  ",arr[i][j]);
	    }
	    printf("\n\n\n");
	}

	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		if(i==j && arr[i][j]!=0)
		    temp=temp+1;
		else if(i!=j && arr[i][j]==0)
		    continue;
		else temp=0;
	    }
	}
	if(temp==r)
	    printf("\n\n\n\n\tYaaa.. It's a Diagonal Matrix. \n\n\n\tPress any key to go Main Menu!");
	else
	    printf("\n\n\n\n\tOoh! It's a Non-Diadonal Matrix. \n\n\n\tPress any key to go Main Menu!");
    }
    else{
	printf("\n\n\n\n\n\n\t\tOoh! It's a Non-Square Matrix\n\n\nPress any key to go Main Menu!");
    }
    getch();
}
void doScalarDiagonal(){
    int ar[3][3]={4,0,0,0,4,0,0,0,4};
    int arr[10][10];
    int i,j,r,c,a,b,temp=0;
    clrscr();
    gotoxy(30,4);
    printf("SCALAR DIAGONAL MATRIX");
    printf("\n\n\n\n\n\n\n\t A Scalar Diagonal Matrix will always be a diagonal matrix if and\n");
    printf("\n\n\t only if it's Diagonal element are same.\n\n");
    printf("\n\n\n\n\n\t Let S be any matrix");
    printf("\n\n\n\n\t S =");

    for(a=0; a<3; a++){
	for (b=0; b<3; b++){
	    printf(" %d ", ar[a][b]);
	}
	printf("\n\n\t    ");
    }
    printf("\n\n\n\tWhose order is 3X3 is a Scalar Diagonal Matrix.");
    printf("\n\n\n\n\n\tNow you can try! press Enter...");
    getch();
    clrscr();
    gotoxy(30,4);
    printf("SCALAR DIAGONAL MATRIX");
    printf("\n\n\n\n\n\n\n\t   Matrix A ");
    printf("\n\n\n\n   Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n\n   Enter No. of Columns:    ");
    scanf("%d",&c);
    if(r==c){
	clrscr();
	printf("\n\n\n\n\n\n\t\t\tInput the value of Matrix(D)");
	printf("\n\n\n\n");
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arr[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\tMatrix (D) [%d X %d]",r,c);
	printf("\n\n\n");
	for(i=0; i<=r-1; i++){
	    for(j=0; j<=c-1; j++){
		printf("\t  %2d  ",arr[i][j]);
	    }
	    printf("\n\n\n");
	}

	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		if(i==j && arr[i][j]!=0 && arr[i][j]==arr[0][0])
		    temp=temp+1;
		else
		if(i!=j && arr[i][j]==0)
		    continue;
		else
		    temp=0;
	    }
	}
	if(temp==r)
	    printf("\n\n\n\n\tYaaa.. It's a Scalar Diagonal Matrix.\n\n\n\n\n\tPress any key to go Main Menu..!");
	else
	    printf("\n\n\n\n\n\tOoh! It's a Non-Scalar Diadonal Matrix.\n\n\n\n\n\tPress any key to go Main Menu..!");
    }
    else{
	printf("\n\n\n\n\n\n\t\tOoh! It's a Non-Square Matrix\n\n\nPress any key to go Main Menu..!");
    }
    getch();
}
void doUnitary(){
    int ar[3][3]={1,0,0,0,1,0,0,0,1};
    int arr[10][10];
    int i,j,r,c,temp=0;
    clrscr();
    gotoxy(30,4);
    printf("UNITRY MATRIX");
    printf("\n\n\n\n\n\n\n\tA Square Matrix Whose all elements except diagonal element\n");
    printf("\n\n\t are zero(0) and the diagonal elements are always '1'.\n\n");
    printf("\n\n\n\n\n\t Let U be any matrix");
    printf("\n\n\n\n\tU = ");
    for (i=0; i<3; i++){
	for (j=0; j<3; j++){
	    printf(" %d ", ar[i][j]);
	}
	printf("\n\n\t    ");
    }
    printf("\n\n\n\n\tWhose order is 3X3 is a Unitary Matrix.");
    printf("\n\n\n\n\n\n\tNow you can try! press Enter...");
    getch();
    clrscr();
    gotoxy(30,4);
    printf("UNITRY MATRIX");
    printf("\n\n\n\n\n\n\n\n\t  Matrix A");
    printf("\n\n\n\n    Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n\n    Enter No. of Columns:    ");
    scanf("%d",&c);
    if(r==c){
	clrscr();
	printf("\n\n\n\n\n\n\t\t\tInput the value of Matrix(A)");
	printf("\n\n\n");
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arr[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\n\tMatrix (A) [%d X %d]",r,c);
	printf("\n\n\n");
	for(i=0; i<=r-1; i++){
	    for(j=0; j<=c-1; j++){
		printf("\t  %2d  ",arr[i][j]);
	    }
	    printf("\n\n\n");
	}

	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		if(i==j && arr[i][j]!=0 && arr[i][j]==1)
		    temp=temp+1;
		else
		if(i!=j && arr[i][j]==0)
		    continue;
		else
		    temp=0;
	    }
	}

	if(temp==r)
	    printf("\n\n\n\n\tYaaa.. It's a Unitary Matrix.\n\n\n\n\n\tPress any key to go Main Menu..!");
	else
	    printf("\n\n\n\n\n\tOoh! It's a Non-Unitary Matrix.\n\n\n\n\n\tPress any key to go Main Menu..!");
    }
    else{
	printf("\n\n\n\n\t\tOoh! It's a Non-Square Matrix\n\n\nPress any key to go Main Menu..!");
    }
    getch();
}
void doAddition(){
    int arr1[10][10];
    int arr2[10][10];
    int arr3[10][10];
    int r1,r2,c1,c2,i,j;
    clrscr();
    gotoxy(30,4);
    printf("ADDITION OF MATRIX");
    printf("\n\n\n\n\n\n\n\t  Matrix A");
    printf("\n\n\n\n   Enter No. of Rows:     ");
    scanf("%d",&r1);
    printf("\n\n\n   Enter No. of columns:  ");
    scanf("%d",&c1);
    printf("\n\n\n\n\n\t  Matrix B");
    printf("\n\n\n\n   Enter No. of Rows:     ");
    scanf("%d",&r2);
    printf("\n\n\n   Enter No. of columns:  ");
    scanf("%d",&c2);
    if (r1==r2 && c1==c2){
	clrscr();
	printf("\n\n\n\n\n\n\t\t\tInput values of Matrix(A)");
	printf("\n\n\n");
	for(i=0; i<r1; i++){
	    for(j=0; j<c1; j++){
		printf("\n\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arr1[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\n\n\n\t\t\tInput values of Matrix(B)");
	printf("\n\n\n");
	for(i=0; i<r2; i++){
	    for(j=0; j<c2; j++){
		printf("\n\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arr2[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\n\tMatrix (A) [%d X %d]",r1,c1);
	printf("\n\n\n");
	for(i=0; i<=r1-1; i++){
	    for(j=0; j<=c1-1; j++){
		printf("\t  %2d  ",arr1[i][j]);
	    }
	    printf("\n\n");
	}
	printf("\n\n\n\n\tMatrix (B) [%d X %d]",r2,c2);
	printf("\n\n\n");
	for(i=0; i<=r2-1; i++){
	    for(j=0; j<=c2-1; j++){
		printf("\t  %2d  ",arr2[i][j]);
	    }
	    printf("\n\n");
	}
	//-----Perform Addition-----//
	printf("\n\n\n\n\tThe Addition of Matrix A & B is:");
	for(i=0; i<r1; i++){
	    for(j=0; j<c1; j++){
		arr3[i][j]=arr1[i][j]+arr2[i][j];
	    }
	}
	printf("\n\n\n");
	for(i=0; i<=r2-1; i++){
	    for(j=0; j<=c2-1; j++){
		printf("\t  %2d  ",arr3[i][j]);
	    }
	    printf("\n\n");
	}
	printf("\n\n\n\tPress Any Key to go to Main Menu..!");
    }
    else {
	clrscr();
        printf("\n\n\n\t\tYou have entered order of matrices are not same..!!");
        printf("\n\n\n\t\t\tAddition is not possible..!!");
        printf("\n\n\n\t\t     Press Any Key to go to Main Menu..!");
    }
    getch();
}
void doSubtraction(){
    int arr1[10][10];
    int arr2[10][10];
    int arr3[10][10];
    int r1,r2,c1,c2,option,i,j;
    clrscr();
    gotoxy(30,4);
    printf("SUBTRACTION OF MATRIX");
    printf("\n\n\n\n\n\t  Matrix A");
    printf("\n\n\n\n  Enter No. of Rows:     ");
    scanf("%d",&r1);
    printf("\n\n\n  Enter No. of columns:  ");
    scanf("%d",&c1);
    printf("\n\n\n\n\t  Matrix B");
    printf("\n\n\n\n  Enter No. of Rows:     ");
    scanf("%d",&r2);
    printf("\n\n\n  Enter No. of columns:  ");
    scanf("%d",&c2);
    if (r1==r2 && c1==c2){
	clrscr();
	printf("\n\n\n\n\n\n\t\t\tInput values of Matrix(A)");
	printf("\n\n\n");
	for(i=0; i<r1; i++){
	    for (j=0; j<c1; j++){
		printf("\n\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arr1[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\n\n\n\t\t\tInput values of Matrix(B)");
	printf("\n\n\n");
	for (i=0; i<r2; i++){
	    for(j=0; j<c2; j++){
		printf("\n\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
	        scanf("%d",& arr2[i][j]);
            }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\n\n\n\n\t\t\t\t1. A - B");
	printf("\n\n\n\n\t\t\t\t2. B - A");
	printf("\n\n\n\n\t\t\t    Enter Your Choice:  ");
	scanf("%d",&option);
	clrscr();
	printf("\n\n\n\n\tMatrix (A) [%d X %d]",r1,c1);
	printf("\n\n\n");
	for(i=0; i<=r1-1; i++){
	    for(j=0; j<=c1-1; j++){
		printf("\t  %2d  ",arr1[i][j]);
	    }
	    printf("\n\n");
	}
	printf("\n\n\n\n\tMatrix (B) [%d X %d]",r2,c2);
	printf("\n\n\n");
	for(i=0; i<=r2-1; i++){
	     for(j=0; j<=c2-1; j++){
		 printf("\t  %2d  ",arr2[i][j]);
	     }
	     printf("\n\n");
	}
	if(option==1) {
	    printf("\n\n\n\n\tThe Subtraction of Matrices A - B is:");
	    for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
		    arr3[i][j]=arr1[i][j]-arr2[i][j];
		}
	    }
	    printf("\n\n\n");
	    for(i=0; i<=r2-1; i++){
		for(j=0; j<=c2-1; j++){
		    printf("\t  %2d  ",arr3[i][j]);
		}
		printf("\n\n");
	    }

	}
	if(option==2){
	    printf("\n\n\n\tThe Subtraction of Matrices B - A is:");
	    for(i=0; i<r1; i++){
		for(j=0; j<c1; j++){
		    arr3[i][j]=arr2[i][j]-arr1[i][j];
		}
	    }
	    printf("\n\n");
	    for(i=0; i<=r2-1; i++){
		for(j=0; j<=c2-1; j++){
		    printf("\t  %2d  ",arr3[i][j]);
		}
		printf("\n\n");
	    }
	}
    }
    else {
	printf("\n\n\n\tYou have entered order of matrices are not same..!!");
	printf("\n\n\n\tSubtraction is not possible..!!");
    }
    printf("\n\n\n\tPress any key to go Main Menu..!");
    getch();
}
void doScalarMultiplication(){
    int arr1[3][3]={2,4,3,4,2,3,6,7,4};
    int arr2[10][10];
    int i,j,r,c,s;
    clrscr();
    gotoxy(30,4);
    printf("SCALAR MULTIPILICATION");
    printf("\n\n\n\n\n\tLet A be any square Matrix\n\n\t   ");
    printf("\n\n\t   ");
    for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	    printf("%d  ",arr1[i][j]);
	}
	printf("\n\n\t   ");
    }
    printf("\n\n\n\n\tLet 5 is a Scalar which multipily with Matrix A\n\n\t   ");
    printf("\n\n\t   ");
    for(i=0; i<3; i++){
	for(j=0; j<3; j++){
	    printf("%d  ",5*arr1[i][j]);
	}
	printf("\n\n\t   ");
    }
    printf("\n\n\n\n\tWhose order is 3X3 is a Scalar Diagonal Matrix.");
    printf("\n\n\n\n\n\tPress any key to perform Scalar Multiplication.");
    getch();
    clrscr();
    gotoxy(30,4);
    printf("SCALAR MULTIPILICATION");
    printf("\n\n\n\n\n\n\n\t    Matrix A");
    printf("\n\n\n\n    Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n\n    Enter No. of Columns:    ");
    scanf("%d",&c);
    clrscr();
    printf("\n\n\n\n\n\n\t\t\tInput the value of Matrix(A)");
    printf("\n\n\n");
    for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	    printf("\n\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
	    scanf("%d",& arr2[i][j]);
	}
	printf("\t\t");
    }
    clrscr();
    printf("\n\n\n\n\tMatrix (A) [%d X %d]",r,c);
    printf("\n\n\n");
    for(i=0; i<=r-1; i++){
	for(j=0; j<=c-1; j++){
	    printf("\t  %2d  ",arr2[i][j]);
	}
	printf("\n\n\n");
    }
    printf("\n\n\n\n\tNow Enter Any Scalar Value:  ");
    scanf("%d",&s);
    printf("\n\n\n\n\tThe value of Matix(A) after Multiplication is:");
    printf("\n\n\n");
    for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	    printf("\t  %2d  ",s*arr2[i][j]);
	}
	printf("\n\n\n");
    }
    printf("\n\n\n\n\n\n\n\n\t\t    Press Any key to go Main Menu..!");
    getch();
}
void doMultiplication(){
    int res[10][10];
    int arr1[10][10];
    int arr2[10][10];
    int arr3[10][10];
    int r1,r2,c1,c2,i,j,k,l;
    int m=1;
    int f=1;
    int msum=0;
 //   int marraylim=0;
    int maltval[1000];
    int acol[10];
    char chk;
    str:
    clrscr();
    gotoxy(30,4);
    printf("MULTIPLICATION OF MATRIX");
    printf("\n\n\n\n\n\n\tMatrix A");
    printf("\n\n\n\n\nEnter No. of Rows:     ");
    scanf("%d",&r1);
    printf("\n\n\n\n\nEnter No. of columns:  ");
    scanf("%d",&c1);
    printf("\n\n\n\n\n\n\tMatrix B");
    printf("\n\n\n\n\nEnter No. of Rows:     ");
    scanf("%d",&r2);
    printf("\n\n\n\n\nEnter No. of columns:  ");
    scanf("%d",&c2);
    if (c1==r2){
	clrscr();
	printf("\n\n\n\n\t\t\tInput values of Matrix A");
	printf("\n\n\n\n");
	for(i=0; i<=r1-1; i++){
	    for(j=0; j<=c1-1; j++){
		printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arr1[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\n\t\t\tInput values of Matrix B");
	printf("\n\n\n\n");
	for(i=0; i<=r2-1; i++){
	    for(j=0; j<=c2-1; j++){
		printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arr2[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	//marraylim=((c1*r1)*c2);
	printf("\n\n\n\n\tMatrix (A) [%d X %d]",r1,c1);
	printf("\n\n\n");
	for(i=0; i<=r1-1; i++){
	    for(j=0; j<=c1-1; j++){
		printf("\t  %d  ",arr1[i][j]);
	    }
	    printf("\n\n");
	}
	printf("\n\n\n\n\tMatrix (B) [%d X %d]",r2,c2);
	printf("\n\n\n");
	for(i=0; i<=r2-1; i++){
	    for(j=0; j<=c2-1; j++){
		printf("\t  %d  ",arr2[i][j]);
	    }
	    printf("\n\n");
	}
	// Main Logic Multiplication
	for(i=0; i<=r1-1; i++){
	    for(j=0; j<=c1-1; j++){
		acol[j]=arr1[i][j];
	    }
	    for(k=0; k<=c2-1; k++){
		for(l=0; l<=r2-1; l++){
		    maltval[m]=acol[l]*arr2[l][k];
		    m++;
		}
	    }
	}
	for(i=0; i<=r1-1; i++){
	    for(j=0; j<=c2-1; j++){
		for(k=0; k<=r2-1; k++){
		    msum+=maltval[f];
		    f++;
		}
		res[i][j]=msum;
		msum=0;
	    }
	}
	printf("\n\n\n\n\tMatrix (A X B) [%d X %d]",r1,c2);
	printf("\n\n\n");
	for(i=0; i<=r1-1; i++){
	    for(j=0; j<=c2-1; j++){
		printf("\t  %d  ",res[i][j]);
	    }
	    printf("\n\n");
	}
    printf("\n\n\n\n\n\n\n\n\t\t    Press Any key to go Main Menu..!");

    }

    else{
	clrscr();
	printf("\n\n\n\n\n     No. of Columns of Matrix(A) Must be Equal to No. of Rows of Matrix(B)");
	printf("\n\n\n\t\t\tPress '0' for try Again");
	printf("\n\n\n\t\t\tPress Any key to go Main Menu");
	chk=getche();
	if (chk=='0'){
	    goto str;
	}
	else {
	    goto end;
	}
    }
    getch();
    end:
}
void doTranspose(){
    int i,j,r,c;
    int arr1[10][10];
    clrscr();
    gotoxy(30,4);
    printf("TRANSPOSE OF MATRIX");
    printf("\n\n\n\n\n\n\t  Matrix A");
    printf("\n\n\n\n\n   Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n\n   Enter No. of columns:    ");
    scanf("%d", &c);
    clrscr();
    printf("\n\n\n\n\n\n\t\t\tInput the value of Matrix(A)");
    printf("\n\n\n");
    for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	    printf("\n\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
	    scanf("%d",& arr1[i][j]);
	}
	printf("\t\t");
    }
    clrscr();
    printf("\n\n\n\n\tMatrix (A) [%d X %d]",r,c);
    printf("\n\n\n");
    for(i=0; i<=r-1; i++){
	for(j=0; j<=c-1; j++){
	    printf("\t  %2d  ",arr1[i][j]);
	}
	printf("\n\n\n");
    }
    printf("\n\n\n\n\n\tThe Transpose of Matrix (A) is:");
    printf("\n\n\n");
    for(i=0; i<c; i++){
	for(j=0; j<r; j++)
	printf("\t  %2d  ", arr1[j][i]);
	printf("\n\n\n");
    }
    printf("\n\n\n\n\tPress any key to go to Main Menu.!");
    getch();
}
void doSymmetric(){
    int i,j,r,c;
    int arrA[10][10];
    int arrB[10][10];
    int arr2[2][2]={2,3,3,5};
    clrscr();
    printf("\n\n\n A Square Matrix is said to be symmetric,");
    printf("\n\n\n\n\tIf A(transpose) = A");
    printf("\n\n\n\n\n\n\tLet A be any Matrix");
    printf("\n\n\n\n\tA =  ");
    for (i=0; i<2; i++){
	for (j=0; j<2; j++){
	    printf("%d  ",arr2[i][j]);
	}
	printf("\n\n\t     ");
    }
    printf("\n\n\n\n\n\tTranspose of Matrix A will be");
    printf("\n\n\n\n\tA(t) =  ");
    for(i=0; i<2; i++){
	for (j=0; j<2; j++){
	    printf("%d  ",arr2[j][i]);
	}
	printf("\n\n\t        ");
    }
    printf("\n\n\n\n\tNow you can try! Press Enter...");
    getch();
    clrscr();
    gotoxy(30,4);
    printf("SYMMETRIC MATRIX");
    printf("\n\n\n\n\n\n\n\n\t  Matrix A");
    printf("\n\n\n\n\n    Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n\n    Enter No. of columns:    ");
    scanf("%d", &c);
    if (r==c){
	clrscr();
	printf("\n\n\n\n\n\t\t\tInput the value of Matrix(A)");
	printf("\n\n\n\n");
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		printf("\n\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arrA[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\n\tMatrix (A) [%d X %d]",r,c);
	printf("\n\n\n");
	for(i=0; i<=r-1; i++){
	    for(j=0; j<=c-1; j++){
		printf("\t  %2d  ",arrA[i][j]);
	    }
	    printf("\n\n\n");
	}
	printf("\n\n\n\n\tThe Transpose of Matrix (A) is:");
	printf("\n\n\n");
	for(i=0; i<c; i++){
	    for(j=0; j<r; j++)
		printf("\t  %2d  ", arrA[j][i]);
		printf("\n\n\n");
	}
	//cheking symmetric//
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		arrB[j][i]=arrA[i][j];
	    }
	}
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		if(arrB[i][j]==arrA[i][j])
		    continue;
		else{
		    printf("\n\n\n\n\tA != A(transpose)");
		    printf("\n\n\n\t=>This is Non-Symmetric Matrix");
		    printf("\n\n\n\n\nPress any key to go Main Menu.!");
		    goto label;
		}
	    }
	}
	printf("\n\n\n\n\tA = A(transpose)");
	printf("\n\n\n\t=>This is Symmetric Matrix");
	printf("\n\n\n\n\nPress any key to go Main Menu.!");
    }
    else{
        printf("\n\n\n\n\t\t\tThis is a Non-square Matrix");
        printf("\n\n\nPress any key to go Main Menu.!");
    }
    label:
    getch();
}
void doSkewSymmetric(){
    int i,j,r,c;
    int arrA[10][10];
    int arrB[10][10];
    int arr2[3][3]={0,1,2,-1,0,-3,-2,3,0};
    clrscr();
    printf("\n\n\n\n A Square Matrix is said to be Skew-Symmetric,");
    printf("\n\n\n\n\tIf A(transpose) = -A");
    printf("\n\n\n\n\tLet A be any Matrix");
    printf("\n\n\n\tA =  ");
    for (i=0; i<3; i++){
	for (j=0; j<3; j++){
	    printf("%2d ",arr2[i][j]);
	}
	printf("\n\n\t     ");
    }
    printf("\n\n\n\n\n\tTranspose of Matrix A will be");
    printf("\n\n\n\n\tA(t) =  ");
    for (i=0; i<3; i++){
	for (j=0; j<3; j++){
	    printf("%2d  ",arr2[j][i]);
	}
	printf("\n\n\t        ");
    }
    printf("\n\n\n\n\tNow you can try! Press Enter...");
    getch();
    clrscr();
    gotoxy(30,4);
    printf("SKEW-SYMMETRIC MATRIX");
    printf("\n\n\n\n\n\n\n\t  Matrix A");
    printf("\n\n\n\n\n      Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n\n      Enter No. of columns:    ");
    scanf("%d", &c);
    if (r==c){
	clrscr();
	printf("\n\n\n\n\n\n\n\t\t\tInput the value of Matrix(A)");
	printf("\n\n\n");
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		printf("\n\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
		scanf("%d",& arrA[i][j]);
	    }
	    printf("\t\t");
	}
	clrscr();
	printf("\n\n\n\n\tMatrix (A) [%d X %d]",r,c);
	printf("\n\n\n");
	for(i=0; i<=r-1; i++){
	    for(j=0; j<=c-1; j++){
		printf("\t  %2d  ",arrA[i][j]);
	    }
	    printf("\n\n");
	}
	printf("\n\n\n\n\tThe Transpose of Matrix (A) is:");
	printf("\n\n\n");
	for(i=0; i<c; i++){
	    for(j=0; j<r; j++)
		printf("\t  %2d  ", arrA[j][i]);
		printf("\n\n");
	}
	//cheking skew-symmetric
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		arrB[j][i]=arrA[i][j]*-1;
	    }
	}
	for(i=0; i<r; i++){
	    for(j=0; j<c; j++){
		if(arrB[i][j]==arrA[i][j])
		    continue;
		else{
		    printf("\n\n\n\n\n\tA != -A(transpose)");
		    printf("\n\n\n\t=>This is Non Skew-Symmetric Matrix");
		    printf("\n\n\n\n\n\nPress any key to go Main Menu.!");
		    goto label;
		}
	    }
	}
	printf("\n\n\n\n\n\tA = -A(transpose)");
	printf("\n\n\n\t=>This is Skew-Symmetric Matrix");
	printf("\n\n\n\n\nPress any key to go Main Menu.!");
    }
    else{
        printf("\n\n\n\n\t\t\tThis is Non-square Matrix");
        printf("\n\n\nPress any key to go Main Menu.!");
    }
    label:
    getch();
}
void doValidation(){
    int r,c,i,j;
    int arr[10][10];
    int arrt[10][10];
    int arrtt[10][10];
    int aces= -1;
    int aces2= -1;
    int aces3= -1;
    clrscr();
    gotoxy(30,4);
    printf("MARTRIX VALIDATION");
    printf("\n\n\n\n\n\n\n\n\t   Matrix(A)");
    printf("\n\n\n\n\n\n      Enter No. of Rows:      ");
    scanf("%d",&r);
    printf("\n\n\n\n\n      Enter No. of Columns:   ");
    scanf("%d",&c);
    clrscr();
    printf("\n\n\n\n\n\t\t\t Input Values in Matrix(A)");
    printf("\n\n\n\n");
    for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	    printf("\n\n\n\t\tInput Value of Row No.%d and Column No.%d:  ",i+1,j+1);
	    scanf("%d",&arr[i][j]);
	}
	printf("\t\t");
    }
    printf("\n\n\n\n\n\n\t\t    Press Any Key to Show the Validation");
    getch();
    clrscr();
    printf("\n\n\n\n\n\tMatrix(A) [%d X %d]",r,c);
    printf("\n\n\n\n      ");
    for(i=0; i<r; i++){
	for(j=0;j<c; j++){
	    printf("   %2d   ",arr[i][j]);
	}
	printf("\n\n      ");
    }
    printf("\n");
    if (r==c){
	printf("\n\n\tMatrix A is a Square Matrix.");
    }
    else
	printf("\n\n\tMatrix A is a Rectangular Matrix.");
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
	printf("\n\n\n\n\tMatrix A is a Non-Diagonal Matrix.");
    else{
	printf("\n\n\n\n\tMatrix A is a Diagonal Matrix.");
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
	printf("\n\n\n\n\tMatrix A is a Non-Scalar Diagonal.");
    else{
	printf("\n\n\n\n\tMatrix A is Scalar Diagonal.");
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
	printf("\n\n\n\n\tMatrix A is a Non-Unitary Matrix.");
    else{
	printf("\n\n\n\n\tMatrix A is Unitary Matrix.");
    }
	//End of Unitary
	// Checking Symmetric
    for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	    arrt[j][i]=arr[i][j];
	}
    }
    for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	    if(arrt[i][j]==arr[i][j])
		continue;
	    else{
		printf("\n\n\n\n\tA != A(transpose)");
		printf("\n\n\n\t => This is Non-Symmetric Matrix.");
		goto label4;
	    }
	}
    }
    printf("\n\n\n\n\tA = A(transpose)");
    printf("\n\n\n\t => This is Symmetric Matrix.");
    label4:
	 //End of Symmetric
	  //Cheking Skew-symmetric
    for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	    arrtt[j][i]=arr[i][j]*-1;
	}
    }
    for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	    if(arrtt[i][j]==arr[i][j])
		continue;
	    else{
		printf("\n\n\n\n\tA != -A(transpose)");
		printf("\n\n\n\t => This is Non Skew-Symmetric Matrix.");
		goto label5;
	    }
	}
    }
    printf("\n\n\n\n\tA = -A(transpose)");
    printf("\n\n\n\t => This is Skew-Symmetric Matrix.");
    label5:
	//End of Skew-Symmetric
    printf("\n\n\n\nPress Any key to go Main Menu..!");
    getch();
}