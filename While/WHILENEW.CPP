 #include "stdio.h"
 #include "conio.h"

 void main () {
 float num1=1.0, num2=1.0;
 char op;

  clrscr();

 while (!(num1==0.0 &&  num2==0.0))
  {
	printf("\n\nType number, operator, number\n");
	scanf("%f %c %f",&num1, &op, &num2);

	if op {
		case '+':
		printf(" = %f",num1+num2);

		case '-':
		printf(" = %f",num1-num2);

		case '*':
		printf(" = %f",num1*num2);

		case '/':
		printf(" = %f",num1/num2);

		default:
		printf("Invalid character");

       }

       }
       getch();

       }