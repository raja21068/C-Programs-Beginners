 #include <process.h>
 #include <conio.h>

 #include <iostream.h>

 void main () {
  int op,op1,op2,op3,op4,op5;
  main: //label

  clrscr();


	cout <<"\n\t\tE-BOOKS SOFTWARE\n";

	cout <<"\n\n\t1. BS-Mathematics";
	cout <<"\n\n\t2. BS-Computer Science";
	cout <<"\n\n\t3. BS-Information Technology";
	cout <<"\n\n\t4. Exit";


	cout <<"\n\n\tEnter your choice: ";
	cin >>op;

	switch (op) {


	case 1:

	clrscr();

	int a,b;


	 cout <<"\n\n\tWELCOME TO MATHEMATICS E-BOOKS";

	cout <<"\n\n\t1. English I";
	cout <<"\n\n\t2. Pakistan Studies";
	cout <<"\n\n\t3. Mathematics I";
	cout <<"\n\n\t4. Physics";
	cout <<"\n\n\t5. Environmental Sciences";
	cout <<"\n\n\t6. Applied Mathematics";
	cout <<"\n\n\tEnter your choice: ";
	cin >>op1;

	switch (op1) { 		// Start of inner Switch

	case 1:

	clrscr();
		cout <<"\n\n\tWELCOME TO ADDITION";

	cout <<"\n\n\tEnter 1st value: ";
	cin >>a;

	cout <<"\n\n\tEnter 2nd value: ";
	cin >>b;

	cout <<"\n\n\tThe Addition is: " <<a+b;

	goto main;

	break;

	case 2:

	clrscr();
		cout <<"\n\n\tWELCOME TO SUBTRACTION";

	cout <<"\n\n\tEnter 1st value: ";
	cin >>a;

	cout <<"\n\n\tEnter 2nd value: ";
	cin >>b;

	cout <<"\n\n\tThe Subtraction is: " <<a-b;

	break;

	case 3:

	clrscr();
		cout <<"\n\n\tWELCOME TO MULTIPLICATION";

	cout <<"\n\n\tEnter 1st value: ";
	cin >>a;

	cout <<"\n\n\tEnter 2nd value: ";
	cin >>b;

	cout <<"\n\n\tThe Multiplication is: " <<a*b;

	break;

	case 4:

	clrscr();
		cout <<"\n\n\tWELCOME TO DIVISION";

	cout <<"\n\n\tEnter 1st value: ";
	cin >>a;

	cout <<"\n\n\tEnter 2nd value: ";
	cin >>b;

	cout <<"\n\n\tThe Division is: " <<a/b;

	break;

	case 5:

	clrscr();
		cout <<"\n\n\tWELCOME TO REMAINDER";

	cout <<"\n\n\tEnter 1st value: ";
	cin >>a;

	cout <<"\n\n\tEnter 2nd value: ";
	cin >>b;

	cout <<"\n\n\tThe Remainder is: " <<a%b;

	break;

	default:

	cout <<"\n\n\tInvalid choice !";
	break;

	} // End of Inner Switch

	break;

	case 2:
	clrscr();

		cout <<"\n\t\tCONVERTOR\n";

	cout <<"\n\n\t1. Weight";
	cout <<"\n\n\t2. Length";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op2;

	switch (op2) {


	case 1:

	clrscr();

	float gm, kg, pd;
			 cout <<"\n\n\tWEIGHT CONVERTOR";

	cout <<"\n\n\t1. Gram into Kilogram";
	 cout <<"\n\n\t2. Kilogram into Gram";
	 cout <<"\n\n\t3. Pounds into Kilogram";
	 cout <<"\n\n\t4. Kilogram into Pounds";
	 cout <<"\n\n\t5. Gram into Pounds";
	 cout <<"\n\n\t6. Pounds into Gram";

	cout <<"\n\n\n\tEnter your choice: ";
	cin >>op3;

	 switch (op3) {	// Start of inner switch

	 case 1:

	 clrscr();
	 cout <<"\n\n\t\tConversion of Gram into Kilogram";

	 cout <<"\n\n\n\tEnter the value in Grams = ";
	 cin >>gm;

	 kg=(gm*0.001);

	 cout <<"\n\n\tThe given Grams are equal to ";
	 cout <<kg;
	 cout <<" Kilograms";

	 break;

	 case 2:

	 clrscr();
	 cout <<"\n\n\t\tConversion of Kilogram into Gram";

	 cout <<"\n\n\n\tEnter the value in Kilograms = ";
	 cin >>kg;

	 gm=(kg*1000);

	 cout <<"\n\n\tThe given Kilograms are equal to ";
	 cout <<gm;
	 cout <<" Grams";

	 break;

	 case 3:

	 clrscr();
	 cout <<"\n\n\t\tConversion of Pounds into Kilogram";

	 cout <<"\n\n\n\tEnter the value in Pounds = ";
	 cin >>pd;

	 kg=(pd*0.45359237);

	 cout <<"\n\n\tThe given Pounds are equal to ";
	 cout <<kg;
	 cout <<" Kilograms";

	 break;


	 case 4:

	 clrscr();
	 cout <<"\n\n\t\tConversion of Kilogram into Pounds";

	 cout <<"\n\n\n\tEnter the value in Kilograms = ";
	 cin >>kg;

	 pd=(kg*2.20462262);

	 cout <<"\n\n\tThe given Kilograms are equal to ";
	 cout <<pd;
	 cout <<" Pounds";

	 break;

	 case 5:

	 clrscr();
	 cout <<"\n\n\t\tConversion of Gram into Pounds";

	 cout <<"\n\n\n\tEnter the value in Grams = ";
	 cin >>gm;

	 pd=(gm*0.00220462262);

	 cout <<"\n\n\tThe given Grams are equal to ";
	 cout <<pd;
	 cout <<" Pounds";

	 break;

	 case 6:

	 clrscr();
	 cout <<"\n\n\t\tConversion of Pounds into Gram";

	 cout <<"\n\n\n\tEnter the value in Pounds = ";
	 cin >>pd;

	 gm=(pd*453.59237);

	 cout <<"\n\n\tThe given Pounds are equal to ";
	 cout <<gm;
	 cout <<" Grams";

	 break;

	default:
	cout <<"\n\n\tInvalid choice !";
	break;

	} // End of inner switch

	break;

	case 2:
	float feet, meter;

	clrscr();
		cout <<"\n\n\t\tWELCOME TO LENGTH CONVERTOR";
	cout <<"\n\n\t1. Feet into Meter";
	cout <<"\n\n\t2. Meter into Feet";

	cout <<"\n\n\tEnter your Choice: ";
	cin >>op4;

	switch (op4) {  	// Start of inner switch 

	case 1:
		cout <<"\n\n\t\tFeet into Meter Convertor";
	cout <<"\n\n\tEnter value in feet: ";
	cin >>feet;

	cout <<"\n\n\tThe given feet in meter is: " <<feet*0.3048;
	break;

	case 2:
		cout <<"\n\n\t\tMeter into Feet Convertor";
	cout <<"\n\n\tEnter value in meter: ";
	cin >>meter;

	cout <<"\n\n\tThe given meter in feet is: " <<meter/0.3048;

	break;

	default:
	cout <<"\n\n\tInvalid choice !";
	break;

	}
	break;

	default:

	cout <<"\n\n\tInvalid choice !";

	}	// End of Inner Switch
	
	break;

	case 3:

	clrscr();

	float c,f,k;

	cout <<"\n\t\tWELCOME TO TEMPERATURE CONVERTOR\n";

	cout <<"\n\t1. Celsius into Fahrenhiet";
	cout <<"\n\t2. Fahrenhiet into Celsius";
	cout <<"\n\t3. Kelvin into Celsius";
	cout <<"\n\t4. Celsius into Kelvin";
	cout <<"\n\t5. Kelvin into Fahrenhiet";
	cout <<"\n\t6. Fahrenhiet into Kelvin";

	cout <<"\n\nEnter any choice: ";
	cin >>op5;

	switch (op5) { 	// Start of Inner Switch

	case 1:

	clrscr();
	cout <<"\n\n\tCelsius into Fahrenhiet Convertor";

	cout <<"\n\nEnter temperature in øC: ";
	cin >> c;

	f = (c*9/5)+32;

	cout <<"\n\tThe given temperature in Fahrenhiet is: ";
	cout << f;
	cout << "øF";
	break;

	case 2:

	clrscr();
	cout <<"\n\tFahrenhiet into Celsius Convertor";

	cout <<"\n\nEnter temperature øF: ";
	cin >> f;

	c = (f*5/9)-32;

	cout <<"\n\tThe given temperature in Celsius is: ";
	cout << c;
	cout << "øC";
	break;

	case 3:

	clrscr();
	cout <<"\n\tKelvin into Celsius Convertor";

	cout <<"\n\nEnter temperature in øK:";
	cin >> k;

	c = (k-273.15);

	cout <<"\n\tThe given temperature in Celsius is: ";
	cout << c;
	cout << "øC";
	break;

	case 4:

	clrscr();
	cout <<"\n\tCelsius into Kelvin Convertor";

	cout <<"\n\nEnter temperature in øC: ";
	cin >> c;

	k = (c+273.15);

	cout <<"\n\tThe given temperature in Kelvin is: ";
	cout << k;
	cout << "øK";
	break;

	case 5:

	clrscr();
	cout <<"\n\tKelvin into Fahrenhiet Convertor";

	cout <<"\n\nEnter temperature in øK: ";
	cin >> k;

	f = ((k - 273) * 9/5 ) + 32;

	cout <<"\n\tThe given temperature in Fahrenhiet is: ";
	cout << f;
	cout << "øF";
	break;

	case 6:

	clrscr();
	cout <<"\n\tFahrenhiet into Kelvin Convertor";

	cout <<"\n\nEnter temperature in øF: ";
	cin >> f;

	k = (5/9*(f - 32) + 273);

	cout <<"\n\tThe given temperature in Kelvin is: ";
	cout << k;
	cout << "øK";
	break;

	default:
	cout <<"\n\tInvalid choice !";
	break;

	}	// End of inner Switch

	case 4: exit(1);

	default:

	cout <<"\n\n\t\tINVALID CHOICE !";


	}
	getche();

  }
