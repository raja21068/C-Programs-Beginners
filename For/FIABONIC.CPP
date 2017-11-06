 #include <iostream.h>
 #include <conio.h>

 void main() {

  clrscr();

  int a=0,b=1,i;


	for (i=1; i<=10; i++)    {

	a=a+b;   //1,1,2,3,5,8,13,21,34,55,89

	b=a-b; //0,1,1,2,3,5,8,13,21,34

	cout <<endl<< b ;  //0,1,1,2,3,
	}

  getche();
 }