 #include <conio.h>
 #include <iostream.h>

 void main () {

 clrscr();
 char op;
 int a,b, c;

  cout <<"\n\n\t\tCalculator";

  cout <<"\n\n\tCases:";
  cout <<"\n\nAddition '+'";
  cout <<"\n\nSubtraction '-'";
  cout <<"\n\nMultiplication '*'";
  cout <<"\n\nDivision '/'";
  cout <<"\n\nExit 'x'";

  cout <<"\n\nEnter any case: ";
  cin >>op;


  switch (op) {

  case '+':
	cout <<"\n\n\tWELCOME TO ADDITION";

	cout <<"\n\nEnter First number: ";
	cin >>a;

	cout <<"\n\nEnter Second number: ";
	cin >>b;

	c=(a+b);
	cout <<"\n\nThe Result is: ";
	cout <<c;

	break;

  case '-':
	cout <<"\n\n\tWELCOME TO SUBTRACTION";

	cout <<"\n\nEnter First number: ";
	cin >>a;

	cout <<"\n\nEnter Second number: ";
	cin >>b;

	c=(a-b);
	cout <<"\n\nThe Result is: ";
	cout <<c;

	break;

  case '*':
	cout <<"\n\n\tWELCOME TO MULTIPLICATION";

	cout <<"\n\nEnter First number: ";
	cin >>a;

	cout <<"\n\nEnter Second number: ";
	cin >>b;

	c=(a*b);
	cout <<"\n\nThe Result is: ";
	cout <<c;

	break;

   case '/':
	cout <<"\n\n\tWELCOME TO DIVISION";

	cout <<"\n\nEnter First number: ";
	cin >>a;

	cout <<"\n\nEnter Second number: ";
	cin >>b;

	c=(a/b);
	cout <<"\n\nThe Result is: ";
	cout <<c;

	break;

    case 'x':
	cout <<"\n\n\tPress Enter for Exit ";
	break;

    default:
	cout <<"\n\n\t\tINVALID OPTION !";
	cout <<"\n\n\t\tPress Enter for Exit";

	}

  getche();

  }

