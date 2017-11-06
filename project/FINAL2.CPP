#include <stdio.h>
#include <conio.h>
#include <group7.h>

 int r,c,r2,c2;

 void main () {

 char *ch[]={"RECTANGULAR MATRIX",
	     "SQUARE MATRIX",
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
	     "MATRIX VALIDATION"
	    };
  int length;
  int forLoop;
  int op;
    clrscr();
    gotoxy(25,20);
    printf("WELCOME TO MATRIX APPLICATION");
    printf("\n\n\n\t\t\t  PRESS ENTER TO CONTINUE...");
    getche();

   clrscr();

    gotoxy(26,15);
    printf("PROGRAMMERS' NOTE");

    gotoxy(5,20);
    printf("The Application is intended to solve and clear the basic concepts of Matrix\n\n    (plural Matrices).");

    printf("\n\n\n\n=>  This Matrix Application involves all the basic Matrix properties that are\n\n    required by the basic learners of Matrices. Moreover it defines each\n\n    property with an example.");
    printf(" GOOD LUCK !");

    gotoxy(25,40);
    printf("Press Enter to continue!");

    getche();


    do  {       // Start of DoWhile

    start();

	gotoxy(8,8);

	printf("Selection Menu for the Matrix");
	gotoxy(10,10);

	length=sizeof(ch)/sizeof(int);
	for(forLoop=0; forLoop<length; forLoop++)
	   printf("\n\n\t%d. %s",(forLoop+1), ch[forLoop]);
	printf("\n\n\t%d. EXIT",forLoop+1);

	printf("\n\n\tEnter your Selection: ");
	scanf("%d",&op);

	switch (op) {

	case 1:
	showRectangular();
	break;

	case 2:
	showSquare();
	break;

	case 3:
	showDiagonal(r, r2, c, c2);
	break;

	case 4:
	showScalarDiagonal(r, r2, c, c2);
	break;

	case 5:
	showUnitary(r, r2, c, c2);
	break;

	case 6:
	showAddition(r, r2, c, c2);
	break;

	case 7:
	showSubtraction(r, r2, c, c2);
	break;

	case 8:
	showScalarMultiplication(r, r2, c, c2);
	break;

	case 9:
	showMultiplication(r, r2, c, c2);
	break;

	case 10:
	showTranspose(r, r2, c, c2);
	break;

	case 11:
	showSymetric(r, r2, c, c2);
	break;

	case 12:
	showSkewSymetric(r, r2, c, c2);
	break;

	case 13:
	showMatrixValidation(r, r2, c, c2);
	break;

	case 14:
	break;

	default:
	break;
	}                   // End of Switch

    }while (op!=14);        // End of DoWhile
}                           // End of Main Method