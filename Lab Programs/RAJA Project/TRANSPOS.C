void main()
{
int i,j,r,c;
int arr1[10][10];
 clrscr();
    gotoxy(30,4);
     printf("TRANSPOSE OF MATRIX");
     printf("\n\n\n\n\n\t  Matrix A");
     printf("\n\n\n\n   Enter No. of Rows:       ");
      scanf("%d",&r);
     printf("\n\n\n\n   Enter No. of columns:    ");
      scanf("%d", &c);
 clrscr();
    printf("\n\n\n\t\t\tInput the value of Matrix(A)");
    printf("\n\n");
  for(i=0; i<r; i++){
    for(j=0; j<c; j++){
      printf("\n\n\t\tEnter value of Row No.%d and Column No.%d: ",i+1,j+1);
       scanf("%d",& arr1[i][j]);
    }
      printf("\t\t");
  }
 clrscr();
    printf("\n\tMatrix (A) [%d X %d]",r,c);
    printf("\n\n");
  for(i=0; i<=r-1; i++){
    for(j=0; j<=c-1; j++){
      printf("\t  %2d  ",arr1[i][j]);
    }
      printf("\n\n");
  }
    printf("\n\n\n\tThe Transpose of Matrix (A) is:");
    printf("\n\n");
  for (i=0; i<c; i++){
    for (j=0; j<r; j++)
      printf("\t  %2d  ", arr1[j][i]);
      printf("\n\n");
  }
    printf("\n\n\n\tPress any key to go to Main Menu.!");
 getch();
}