void main(){
    int arr1[3][3]={2,4,3,4,2,3,6,7,4};
    int arr2[10][10];
    int i,j,r,c,s;
    clrscr();
    gotoxy(30,3);
    printf("SCALAR MULTIPILICATION");
    printf("\n\n\n\tLet A be any square Matrix\n\n\t   ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d  ",arr1[i][j]);
        }
        printf("\n\t   ");
    }
    printf("\n\n\tLet 5 is a Scalar which multipily with Matrix A\n\n\t   ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d  ",5*arr1[i][j]);
        }
        printf("\n\t   ");
    }
    printf("\n\n\tWhose order is 3X3 is a Scalar Diagonal Matrix.");
    printf("\n\n\n\tPress any key to perform Scalar Multiplication.");
    getch();
    clrscr();
    gotoxy(30,4);
    printf("SCALAR MULTIPILICATION");
    printf("\n\n\n\n\n\n\t    Matrix A");
    printf("\n\n\n    Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n    Enter No. of Columns:    ");
    scanf("%d",&c);
    clrscr();
    printf("\n\n\n\t\t\tInput the value of Matrix(A)");
    printf("\n\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
            scanf("%d",& arr2[i][j]);
        }
        printf("\t\t");
    }
    clrscr();
    printf("\n\tMatrix (A) [%d X %d]",r,c);
    printf("\n\n");
    for(i=0; i<=r-1; i++){
        for(j=0; j<=c-1; j++){
            printf("\t  %2d  ",arr2[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\tNow Enter Any Scalar Value:  ");
    scanf("%d",&s);
    printf("\n\n\tThe value of Matix(A) after Multiplication is:");
    printf("\n\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("\t  %2d  ",s*arr2[i][j]);
        }
        printf("\n\n");
    }  
    printf("\n\n\n\tPress Any key to go Main Menu..!");
    getch();
}