 #include <conio.h>
 #include <iostream.h>

 void main () {

  clrscr();
  int pass;


  cout <<endl<<endl<<"\t\tEnter Password: " ;
  cin >>pass;

	if (pass==10 || pass==16 || pass==30)
	  cout <<endl<<endl<<"\t\tWELCOME...";

	else
	  cout <<endl<<endl<<"\t\tOUTSIDERS NOT ALLOWED !";


	getch();

	}

