 #include <iostream.h>
 #include <conio.h>

 void main (){

 clrscr();                  // Weight Convertor

 int op;
 float gm, kg, pd;

 cout <<"\n\n\t\tSoftware for Conversion of Weight";

 cout <<"\n\n\t1. Gram into Kilogram";
 cout <<"\n\n\t2. Kilogram into Gram";
 cout <<"\n\n\t3. Pounds into Kilogram";
 cout <<"\n\n\t4. Kilogram into Pounds";
 cout <<"\n\n\t5. Gram into Pounds";
 cout <<"\n\n\t6. Pounds into Gram";
 cout <<"\n\n\t7. Exit";

 cout <<"\n\n\n\tEnter the case no. for desired conversion:";
 cin >>op;

 switch (op) {

 case 1:

 clrscr();
 cout <<"\n\n\t\tConversion of Gram into Kilogram";

 cout <<"\n\n\n\tEnter the value in Grams = ";
 cin >>gm;

 kg=(gm*0.001);

 cout <<"\n\n\tThe given Grams are equal to ";
 cout <<kg;
 cout <<" Kilograms";
 cout <<"\n\n\tPress Enter to Exit";


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
 cout <<"\n\n\tPress Enter to Exit";

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
 cout <<"\n\n\tPress Enter to Exit";

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
 cout <<"\n\n\tPress Enter to Exit";

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
 cout <<"\n\n\tPress Enter to Exit";

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
 cout <<"\n\n\tPress Enter to Exit";

 break;

 case 7:

 cout <<"\n\n\n\tPress Enter to Exit";

 break;

 default:
 cout <<"\n\n\t\tInvalid Case...";
 cout <<"\n\n\n\tPress Enter to Exit";

 }

 getche();

 }