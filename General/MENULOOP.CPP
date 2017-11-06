#include<conio.h>
#include<iostream.h>




 void main(){

 int op,art;
   clrscr();

   cout<<"1:Arthmatic :"<<endl;
   cout<<"2:IF :"<<endl;
   cout<<"3:Exit :"<<endl;
   cin>>op;

     while(op!=3){


      clrscr();

	switch(op){

	 case 1: cout<<"Arthmatic.........."<<endl;
	 cout<<"1:cal :"<<endl;
	 cout<<"2:Back :"<<endl;
	 cin>>art;

	      while(art!=2){

	switch(art){
	 case 1: cout<<"cal.........."<<endl;
		break;
		default:
	     cout<<"INVALIED ....."<<endl;
	     }//end inner switch
	      clrscr();
	      cout<<"Arthmatic.........."<<endl;
	 cout<<"1:cal :"<<endl;
	 cout<<"2:Back :"<<endl;
	 cin>>art;


	    }//end inner loop

	 break;
		default:
	     cout<<"INVALIED ....."<<endl;


	  }//end switch

	     clrscr();
	     cout<<"1:Arthmatic :"<<endl;
	     cout<<"2:IF :"<<endl;
	     cout<<"3:Exit :"<<endl;
	     cin>>op;

       }//end outer loop
	  }//end main
