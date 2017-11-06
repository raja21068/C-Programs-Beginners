 #include<conio.h>
#include<iostream.h>



void main (){


  int num[]={1,20,3,2,1};

      int search;
       int b=1;
	clrscr();

	    for(int i=0; i<=4;i++){
	    cout<<"Num["<<i<<"]="<<num[i]<<endl;

	}//end loop


	cout<<"Enter Element For Search Loction:";
	cin>>search;
       for( i=0; i<=4;i++){
       if(num[i]==search){
	cout<<endl<<"Your Element :"<<search<<":Found Array Location:"<<i<<endl;
	b=0;
	}
	 }//end outer

	 if(b)
	cout<<endl<<"Your Element :"<<search<<" Not :Found In Array";

	getch();
	}

