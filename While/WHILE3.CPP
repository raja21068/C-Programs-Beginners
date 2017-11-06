 #include "stdio.h"
 #include "conio.h"

 void main () {

 int num1,num2,op;
  clrscr();


	printf("Enter number1: ");
	scanf("%d",&num1);

	printf("Enter number2: ");
	scanf("%d",&num2);

	printf("Enter case: ");
	scanf("%d",&op);

	switch (op) {
		case 1:
		printf(" = %d",num1+num2);
		break;

		case 2:
		printf(" = %d",num1-num2);
		break;

		case 3:
		printf(" = %d",num1*num2);
		break;

		case 4:
		printf(" = %d",num1/num2);
		break;

		default:
		printf("Invalid character");
	   }

       getch();

       }