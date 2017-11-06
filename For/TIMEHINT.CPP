
 #include<conio.h>
 #include<dos.h>

 #include<iostream.h>


   /// nested loop loop inside loop

 void main(){
     clrscr();



   for(int hour=0; hour<=0; hour++){
	   gotoxy(10,10); cout<<hour<<":";
      for(int min=0; min<=1; min++) {
	   gotoxy(12,10); cout<<min<<":";
	for (int sec=0; sec<=60; sec++) {
	     delay(150);
	     gotoxy(14,10); cout<<sec;

	   }
	}
   }
	  getche();


     }
