
#include <conio.h>
#include <iostream.h>

 void main () {

     clrscr();
     int i=2;

    while (i<=50)  {
    int a=0, j=1;
      while (j<=i) {
	if (i%j==0)
	a+=1;
	j++;

      }

      if (a==2)
    cout <<i <<" is prime number\n\n";
      i++;
       }

    getche();

}