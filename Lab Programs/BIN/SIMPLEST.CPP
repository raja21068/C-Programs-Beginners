
#include <conio.h>
#include <iostream.h>

 struct Calculator {

     void add (int v1, int v2) {

       cout <<"\n\nAddition is: "<<v1+v2;

     }
 };

 void main () {

  clrscr();

   Calculator ob1, ob2;

   ob1.add(5,8);
   ob2.add(8,9);

  getche();
 }
