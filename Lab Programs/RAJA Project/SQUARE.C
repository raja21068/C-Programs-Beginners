void main(){
    int arr[2][2]={3,3,5,5};
    int i,j;
    clrscr();
    gotoxy(30,2);
    printf("Square MATRIX");
    printf("\n\n\n\t A Square Matrix is a matrix whose number of rows will\n");
    printf("\n\t always be equal to number of columns.\n\n");
    printf("\n\t => No. of rows = No. of columns");
    printf("\n\n\n\t Let A be any matrix");
    printf("\n\n\n\t A =");

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
	    printf(" %d ", arr[i][j]);
	}
	printf("\n\t    ");
    }
    printf("\n\n\t Whose order is 2X2 is a Square matrix.");
    printf("\n\n\n Press any key to go Main Menu!");

    getch();
}