 #include <iostream.h>
 #include <conio.h>

 void main (){

 clrscr();                  // Measurement of Feet into Meter

 int op;

 cout <<"\n\n\t\tSoftware for Conversion of Feet & Meter";

 cout <<"\n\n\t1. Feet into Meter";
 cout <<"\n\n\t2. Meter into Feet";
 cout <<"\n\n\t3. Exit";

 cout <<"\n\n\n\tEnter the case no. for desired conversion:";
 cin >>op;

 switch (op) {

 case 1:
 float feet, meter;

 clrscr();
 cout <<"\n\n\t\tConversion of Feet into Meter";

 cout <<"\n\n\n\tEnter the value in feet = ";
 cin >>feet;

 meter=(feet*0.3048);

 cout <<"\n\n\tThe given Feet is equal to ";
 cout <<meter;
 cout <<" Meter";
 cout <<"\n\n\tPress Enter to Exit";


 break;

			    // Measurement of Meter into Feet
 case 2:
 float meter2, feet2;

 clrscr();
 cout <<"\n\n\t\tConversion of Meter into Feet";

 cout <<"\n\n\n\tEnter the value in meter = ";
 cin >>meter2;

 feet2=(meter2/0.3048);

 cout <<"\n\n\tThe given Meter is equal to ";
 cout <<feet2;
 cout <<" Feet";
 cout <<"\n\n\tPress Enter to Exit";

 break;

 case 3:
 break ;

 default:
 cout <<"\n\n\t\tInvalid Case...";
 cout <<"\n\n\n\tPress Enter to Exit";

 }
 getche();

 }