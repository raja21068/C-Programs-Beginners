 #include <iostream.h>
 #include <conio.h>

 void main() {

  clrscr();

  int a,b,t,i;

    cout <<"\n\nEnter the Table no: ";
    cin >>t;

    cout <<"\n\nEnter the starting range for table: ";
    cin >>a;

    cout <<"\n\nEnter the Ending range for table: ";
    cin >>b;


	for (i=a; i<=b; i++)

	  cout <<"\n\n" <<t << " X " <<i << " = " << i*t;


  getch();
 }