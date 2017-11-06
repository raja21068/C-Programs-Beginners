
#include <conio.h>
#include <iostream.h>

 void main () {         // WHILE SQUARE STAR

    clrscr();
    int i=1;

        while(i<=10) {      //Outer While
          int j=1;
          while(j<=10) {
             cout <<"*";
             j++;
        }           
          cout <<"\n";

          i++;

      }             // End of Outer While

    getche();

}