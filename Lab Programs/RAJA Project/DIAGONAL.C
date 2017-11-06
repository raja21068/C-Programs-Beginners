void main(){
    int ar[3][3]={1,0,0,0,2,0,0,0,3};
    int arr[10][10];
    int i,j,r,c,temp=0;
    clrscr();
    gotoxy(30,2);
    printf("DIAGONAL MATRIX");
    printf("\n\n\n\n\t A Diagonal Matrix will always be a square matrix whose all\n");
    printf("\n\t elements are zero expect the diagonal elements.\n\n");
    printf("\n\n\n\t Let D be any matrix");
    printf("\n\n\n\t D =");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf(" %d ", ar[i][j]);
        }
        printf("\n\t    ");
    }
    printf("\n\n\tWhose order is 3X3 is a Diagonal matrix.");
    printf("\n\n\n\tNow you can try! press Enter...");

    getch();
    clrscr();

    printf("\n\t\t\t    DIAGONAL MATRIX");
    printf("\n\n\n\n\tMatrix D");

    printf("\n\n\n\nEnter No. of Rows:       ");
    scanf("%d",&r);

    printf("\n\n\n\nEnter No. of Columns:    ");
    scanf("%d",&c);

    if(r==c){
        clrscr();
        printf("\n\n\n\t\t\tInput the value of Matrix(D)");
        printf("\n\n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
                scanf("%d",& arr[i][j]);
            }
	    printf("\t\t");
        }
        clrscr();

        printf("\n\tMatrix (D) [%d X %d]",r,c);
        printf("\n\n");
        for(i=0; i<=r-1; i++){
            for(j=0; j<=c-1; j++){
	        printf("\t  %2d  ",arr[i][j]);
            }
	    printf("\n\n");
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
            printf("\n\n\tHmmmm.. It's a Diagonal Matrix. \n\n\n\tPress any key to go Main Menu!");
        else
            printf("\n\n\tOoh! It's a Non-Diadonal Matrix. \n\n\n\tPress any key to go Main Menu!");
    }
    else{
        printf("\n\n\n\n\n\n\t\tOoh! It's a Non-Square Matrix\n\n\nPress any key to go Main Menu!");
    }
    getch();
}