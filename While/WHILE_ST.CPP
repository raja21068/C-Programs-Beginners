
#include <conio.h>
#include <iostream.h>

 void main () {             // STAR TRIANGLE IN WHILE

    clrscr();
    int i=1;

        while(i<=10) {      // Outer While
           int j=1;
           while(j<=i) {
             cout <<"*";
             j++;
          }         
            cout <<"\n";

            i++;

        }           // End of Outer While
        
    getche();

}