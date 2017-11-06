 #include <iostream.h>
 #include <conio.h>

 void main() {

  clrscr();

  int a,b,i;

    cout <<"\n\nEnter the starting range of loop: ";
    cin >>a;

    cout <<"\n\nEnter the Ending range of loop: ";
    cin >>b;


	for (i=a; i<=b; i++)

	  cout <<endl << i <<"\n";


  getch();
 }