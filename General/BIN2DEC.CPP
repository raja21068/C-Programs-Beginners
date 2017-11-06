	#include<conio.h>
	#include<iostream.h>
	void main (){

	 char bin[]={'1','0','1','0','1'};
	      int dec=0;
	      int count=1;
	  clrscr();

	   for(int i=4;i>=0;i--){

	   if(bin[i]=='1')
	    {
	    dec=dec+count;

	    }
	   count=(count+count);
	     }

	     cout<<endl<<"Decimal "<<dec;

	getche();
	}

