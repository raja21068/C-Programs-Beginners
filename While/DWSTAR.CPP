 #include <conio.h>
 #include <iostream.h>

 void main () {

  clrscr();
  int i=1;

	do {
	int j=0;

	do{

	cout <<"*";
	j++;
	}while(j<i);

	cout<<endl;
	i++;
	}while (i<10);

	getch();

	}

