 #include <conio.h>
 #include <iostream.h>

 void main () {

  clrscr();

  int op,op1,op2;

	cout <<"\n\t\tCONVERTOR\n";

	cout <<"\n\n\t1. Weight";
	cout <<"\n\n\t2. Length";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op;

	switch (op) {


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
	cin >>op1;

	 switch (op1) {	// Start of inner switch

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
	cin >>op2;

	switch (op2) {  	// Start of inner switch 

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


getche();

}
