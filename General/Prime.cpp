
#include <conio.h>
#include <iostream.h>

 void main () {

     clrscr();

    for (int i=2; i<=50; i++)   {
    int a=0;
      for (int j=1; j<=i; j++) {
        if (i%j==0)
        a+=1;
      }

      if (a==2)
    cout <<i <<" is prime number\n\n";
       }

    getche();

}