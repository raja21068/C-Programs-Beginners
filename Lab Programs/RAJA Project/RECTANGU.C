void main(){
    int arr[3][4]={3,3,3,3,5,5,5,5,7,7,7,7};
    int i,j;
    clrscr();
    gotoxy(30,2);
    printf("RECTANGULAR MATRIX");
    printf("\n\n\n\n\t A Rectangular Matrix is a matrix whose number of rows will\n");
    printf("\n\t never be equal to number of columns.\n\n");
    printf("\n\t => No. of rows != No. of columns");
    printf("\n\n\n\t Let A be any matrix");
    printf("\n\n\n\t A =");
    for (i=0; i<3; i++){
       for (j=0; j<4; j++){
          printf(" %d ", arr[i][j]);
       }
       printf("\n\t    ");
    }
    printf("\n\n\t Whose order is 3X4 is a Rectangular matrix.");
    printf("\n\n Press any key to go back!");

    getch();
}





