
 #include<conio.h>
 #include<iostream.h>


   /// nested loop loop inside loop

 void main(){
 int outer=1;
     clrscr();
      for(; outer<=4; outer++){
	  cout<<endl<<"value of Outer Loop..........."<<outer<<endl;
       for(int inner=1; inner<=4; inner++){
	      cout<<"value of Inner loop.. .."<<inner<<endl;
       }//end inner loop

       }//end outer loop

	  getche();

     }
