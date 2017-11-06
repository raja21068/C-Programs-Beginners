void main(){
    int ar[3][3]={4,0,0,0,4,0,0,0,4};
    int arr[10][10];
    int i,j,r,c,a,b,temp=0;
    clrscr();
    gotoxy(30,2);
    printf("SCALAR DIAGONAL MATRIX");
    printf("\n\n\n\n\n\t A Scalar Diagonal Matrix will always be a diagonal matrix if and\n");
    printf("\n\t only if it's Diagonal element are same.\n\n");
    printf("\n\n\n\t Let S be any matrix");
    printf("\n\n\n\t S =");
    
    for(a=0; a<3; a++){
        for (b=0; b<3; b++){
            printf(" %d ", ar[a][b]);
        }
        printf("\n\t    ");
    }
    printf("\n\n\tWhose order is 3X3 is a Scalar Diagonal Matrix.");
    printf("\n\n\n\tNow you can try! press Enter...");
    getch();
    clrscr();
    gotoxy(30,2);
    printf("SCALAR DIAGONAL MATRIX");
    printf("\n\n\n\n\n\t   Matrix A ");
    printf("\n\n\n   Enter No. of Rows:       ");
    scanf("%d",&r);
    printf("\n\n\n\n   Enter No. of Columns:    ");
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
            printf("\n\n\tHmmmm.. It's a Scalar Diagonal Matrix.\n\n\n\tPress any key to go Main Menu..!");
        else
            printf("\n\n\n\n\tOoh! It's a Non-Scalar Diadonal Matrix.\n\n\n\tPress any key to go Main Menu..!");
    }
    else{
        printf("\n\n\n\n\n\n\t\tOoh! It's a Non-Square Matrix\n\n\nPress any key to go Main Menu..!");
    }
    getch();
}