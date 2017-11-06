
#include <conio.h>
#include <iostream.h>

 void main () {         // PRIME NOS IN WHILE

     clrscr();
     int i=2;

    while(i<=50)  {     // Outer While
    int a=0, j=1;
      while(j<=i) {
        if(i%j==0)
          a+=1;
        j++;

    }   

       if(a==2)
       cout <<i <<" is prime number\n\n";
       i++;
    }   // End of outer While

    getche();

}