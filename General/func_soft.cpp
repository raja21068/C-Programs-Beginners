 #include <conio.h>
 #include <iostream.h>
 #include <stdio.h>
 #include <salman.h>
 #include <main.h>

 void main () {
 int op,op1,op2,op3,op4;

			  // Start of Main while
  clrscr();

	cout <<"\n\t\tOPTIONAL SOFTWARE\n";

	Main1();

	cout <<"\n\n\tEnter your choice: ";
	cin >>op;

	while (op!=4) {

	switch (op) {

	case 1:
	    clrscr();
		 cout <<"\n\n\tWELCOME TO SIMPLE PROGRAMS";

	Main2();

	cout <<"\n\n\tEnter your choice: ";
	cin >>op1;

	while (op1!=6) {

	switch (op1) { 		// Start of inner Switch
		clrscr();
	case 1:
	Amount();
	break;

	case 2:
	Salary();
	break;

	case 3:
	 Area();
	 break;

	case 4:
	 Marksheet();
	 break;

	case 5:
	 Equation();	
	 break;

	default:
	cout <<"\n\n\tInvalid choice !";
	break;

	} 	// End of Inner Switch
	 getche();

	clrscr();
		 cout <<"\n\n\tWELCOME TO SIMPLE PROGRAMS";

	Main2();

	cout <<"\n\n\tEnter your choice: ";
	cin >>op1;

	}  // End of While
	break;

	case 2:
	clrscr();
		 cout <<"\n\n\tWELCOME TO IF ELSE PROGRAMS";

	Main3();

	cout <<"\n\n\tEnter your choice: ";
	cin >>op2;

	while (op2!=5) {

	switch (op2) {

	case 1:

	 clrscr();
	 EBC();	  
	 break;

	case 2:
	OddEven();
	break;

	case 3:
	PosNeg();
	break;

	case 4:
	Pass();
	break;

	default:

	cout <<"\n\n\tINVALID CHOICE !";
	break;

	} 	// End of Switch
	getche();

	clrscr();
		 cout <<"\n\n\tWELCOME TO IF ELSE PROGRAMS";

	Main3();

	cout <<"\n\n\tEnter your choice: ";
	cin >>op2;

	} 	// End of While
	break;

	case 3:

	clrscr();
		cout <<"\n\n\tFOR LOOP PROGRAM";

	Main4();

	cout <<"\n\n\tEnter your choice: ";
	cin >>op3;

	while (op3!=6) {

	switch(op3) {

	case 1:
	For();
	break;

	case 2:
	Table();	
	break;

	case 3:
	Range();
	break;

	case 4:
	TabRange();	
	 break;

	case 5:
	Time();
	break;

	default:

	cout <<"\n\n\tINVALID CHOICE !";
	break;

	} 	// End of Switch
	getche();

	clrscr();
		cout <<"\n\n\tFOR LOOP PROGRAMS";

	Main4();

	cout <<"\n\n\tEnter your choice: ";
	cin >>op3;

	} 	// End of While
	break;

	default:
	cout<<"\n\n\tINVALID CHOICE !";
	break;

	} 	// End of Main Switch

	 clrscr();

	cout <<"\n\t\tOPTIONAL SOFTWARE\n";

	Main1();

	cout <<"\n\n\tEnter your choice: ";
	cin >>op;

	}	// End of While


}