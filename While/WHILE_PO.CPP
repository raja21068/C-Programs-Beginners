
#include <conio.h>
#include <iostream.h>

 void main () {

    clrscr();
    long a,b;
    int i=2;

        cout <<"\n\n\tEnter any number: ";
        cin >>a;

        b=a;
           while(i<=10) {
             b*=a;
             cout <<"\n\n" <<a <<"^" <<i <<"=" <<b;
             i++;
        }
    
    getche();

}
