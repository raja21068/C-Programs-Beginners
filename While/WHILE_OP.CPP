
#include <conio.h>
#include <iostream.h>

 void main () {             // WHILE OPPOSITE TRIANGLE

    clrscr();
    int i=1;

        while(i<=10) {      // Outer While
          int j=1, k=1;
          while(j<=10-i) {  
            cout <<" ";
            j++;
       }                    
        
          
          while(k<=i)  {        
            cout <<"*";
            k++;
       }
          cout <<"\n";
          i++;

    }                   // End of Outer While       

    getche();

}