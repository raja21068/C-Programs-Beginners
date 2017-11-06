 #include <conio.h>
 #include <iostream.h>

  void main () {

  clrscr();

  int units,bill;

  cout <<"\n\n\t\tELECTRICITY BILL CALCULATOR";
  cout <<"\n\n\n\nEnter the consumed units: ";
  cin  >>units;

  if (units <=100) {
   bill=(units*2);
   cout <<"\nThe total bill is Rs: ";
   cout <<bill;
   }

  else if (units >100 && units<=200) {
   bill=(units*4);
   cout <<"\nThe total bill is Rs: ";
   cout <<bill;
   }

  else if (units >200 && units<=300) {
   bill=(units*6);
   cout <<"\nThe total bill is Rs: ";
   cout <<bill;
   }

  else if (units >300 && units<=400) {
   bill=(units*8);
   cout <<"\nThe total bill is Rs: ";
   cout <<bill;
   }

  else if (units >400 && units<=500) {
   bill=(units*10);
   cout <<"\nThe total bill is Rs: ";
   cout <<bill;
   }

  else if (units >500 && units<=1000) {
   bill=(units*12);
   cout <<"\nThe total bill is Rs: ";
   cout <<bill;
   }

  else
   cout <<"\nElectricity is being consumed on commercial level !";

  getche();

  }
