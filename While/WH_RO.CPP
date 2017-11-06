
#include <conio.h>
#include <iostream.h>

 void main () {             // WHILE REVERSE OPPOSITE

    clrscr();
    int i=1;

        while(i<=10) {      // Outer While
          int j=1, k=1;
          while(j<=10-i) {  
            cout <<"*";
            j++;
       }                        
           
          cout <<"\n";
          
          while(k<=i)  {        
            cout <<" ";
            k++;
       }                        

          i++;

    }           // End of Outer While

    getche();

}               // End of main