#include<conio.h>
#include<iostream.h>


 void main (){

     int bin[9];
     int dec;
     int count;

	clrscr();

	cout<<"Enter any decimal value: ";
	cin>>dec;

	for(int i=8;i>=0;i--) {
	   bin[i]=(dec%2);
	   dec=(dec/2);
	}

	cout<<"\n\nDecimal to binary is: ";
	for(i=0;i<=8;i++)
	  cout<<" "<<bin[i];

   getche();
 }

