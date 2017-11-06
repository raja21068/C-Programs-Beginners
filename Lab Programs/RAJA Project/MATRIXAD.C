void main(){
    int arr1[10][10];
    int arr2[10][10];
    int arr3[10][10];
    int r1,r2,c1,c2,i,j;
    clrscr();
    gotoxy(30,2);
    printf("ADDITION OF MATRIX");
    printf("\n\n\n\n\t   Matrix A");
    printf("\n\n\n   Enter No. of Rows:     ");
    scanf("%d",&r1);
    printf("\n\n   Enter No. of columns:  ");
    scanf("%d",&c1);
    printf("\n\n\t   Matrix B");
    printf("\n\n\n   Enter No. of Rows:     ");
    scanf("%d",&r2);
    printf("\n\n   Enter No. of columns:  ");
    scanf("%d",&c2);
    if (r1==r2 && c1==c2){
        clrscr();
        printf("\n\n\n\t\t\tInput values of Matrix(A)");
        printf("\n\n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
                printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
	        scanf("%d",& arr1[i][j]);
            }
            printf("\t\t");
        }
        clrscr();
        printf("\n\n\n\t\t\tInput values of Matrix(B)");
        printf("\n\n");
        for(i=0; i<r2; i++){
            for(j=0; j<c2; j++){
                printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
	        scanf("%d",& arr2[i][j]);
            }
            printf("\t\t");
        }
        clrscr();
        printf("\n\tMatrix (A) [%d X %d]",r1,c1);
        printf("\n\n");
        for(i=0; i<=r1-1; i++){
            for(j=0; j<=c1-1; j++){
                printf("\t  %2d  ",arr1[i][j]);
            }
            printf("\n\n");
        }
        printf("\n\tMatrix (B) [%d X %d]",r2,c2);
        printf("\n\n");
        for(i=0; i<=r2-1; i++){
            for(j=0; j<=c2-1; j++){
                printf("\t  %2d  ",arr2[i][j]);
            }
            printf("\n\n");
        }
        //-----Perform Addition-----//
        printf("\n\n\tThe Addition of Matrix A & B is:");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++){
	        arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        printf("\n\n");
        for(i=0; i<=r2-1; i++){
            for(j=0; j<=c2-1; j++){
                printf("\t  %2d  ",arr3[i][j]);
            }
            printf("\n\n");
        }
        printf("\n\tPress Any Key to go to Main Menu..!");
    }
    else {
        clrscr();
        printf("\n\n\n\t\tYou have entered order of matrices are not same..!!");
        printf("\n\n\n\t\t\tAddition is not possible..!!");
        printf("\n\n\n\t\t     Press Any Key to go to Main Menu..!");
    }
    getch();
}