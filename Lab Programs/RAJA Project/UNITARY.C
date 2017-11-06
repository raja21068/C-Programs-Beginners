void main(){
    int ar[3][3]={1,0,0,0,1,0,0,0,1};
    int arr[10][10];
    int i,j,r,c,temp=0;
    clrscr();
    gotoxy(30,2);
    printf("UNITRY MATRIX");
    printf("\n\n\n\n\n\tA Square Matrix Whose all elements except diagonal element\n");
    printf("\n\t are zero(0) and the diagonal elements are always '1'.\n\n");
    printf("\n\n\n\t Let U be any matrix");
    printf("\n\n\n\tU = ");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf(" %d ", ar[i][j]);
        }
        printf("\n\t    ");
    }
    printf("\n\n\tWhose order is 3X3 is a Unitary Matrix.");
    printf("\n\n\n\tNow you can try! press Enter...");
    getch();
    clrscr();
    gotoxy(30,3);
    printf("UNITRY MATRIX");
    printf("\n\n\n\n\n\n\t    Matrix A");
    printf("\n\n\n    Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n\n    Enter No. of Columns:    ");
    scanf("%d",&c);
    if(r==c){
        clrscr();
        printf("\n\n\n\t\t\tInput the value of Matrix(A)");
        printf("\n\n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
	        scanf("%d",& arr[i][j]);
            }
            printf("\t\t");
        }
        clrscr();
        printf("\n\tMatrix (A) [%d X %d]",r,c);
        printf("\n\n");
        for(i=0; i<=r-1; i++){
            for(j=0; j<=c-1; j++){
                printf("\t  %2d  ",arr[i][j]);
            }
            printf("\n\n");
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
            printf("\n\n\n\n\tHmmmm.. It's a Unitary Matrix.\n\n\n\tPress any key to go Main Menu..!");
        else
            printf("\n\n\n\n\tOoh! It's a Non-Unitary Matrix.\n\n\n\tPress any key to go Main Menu..!");
    }
    else{
        printf("\n\n\n\n\t\tOoh! It's a Non-Square Matrix\n\n\nPress any key to go Main Menu..!");
    }
    getch();
}