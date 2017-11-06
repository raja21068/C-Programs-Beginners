 #include <conio.h>
 #include <iostream.h>
 #include <dos.h>

 void main () {

  clrscr();
  int a;

	cout <<"\n\n\tEnter number of tables you want: ";
	cin >>a;

	  for (int i=2; i<=a; i++) {
	   cout <<"\n\n";
	     for (int j=1; j<=10; j++)  {
		delay(100);
		cout <<endl<<i<<" X "<<j<<" = "<<i*j;

		}
	     }

	  getche();

	}
