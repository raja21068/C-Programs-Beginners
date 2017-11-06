
#include <conio.h>
#include <iostream.h>

 class simple {

     private:
     int v1, v2;

     public:
     void getValue(int v1, int v2) {
       /*	v1=n1;
	v2=n2;
	 */
	cout<<endl<<"value of v1: "<<v1;
	cout<<endl<<"value of v2: "<<v2;
     }
 };

 void main () {
    clrscr();

       simple ob,ob2;
       ob.getValue(20,10);
       ob2.getValue(50,40);

    getche();
 }
