 #include <iostream.h>
 #include <conio.h>

 void main () {

  int amnt, fth, th, fhd, hd, fty, tty, ten, five, two, one;

  clrscr();

  cout <<"Enter amount in Rs: ";
  cin >> amnt;    // 4950

  fth=amnt/5000;  // 0
  cout <<endl <<"Rs. 5000 = " <<fth;

  amnt=amnt%5000;
  th=amnt/1000;   // 4
  cout <<endl <<endl <<"Rs. 1000 = " <<th;

  th=amnt%1000;       // 950
  fhd=th/500;         // 1
  cout <<endl <<endl <<"Rs. 500 = " <<fhd;

  fhd=th%500;         // 450
  hd=fhd/100;         // 4
  cout <<endl <<endl <<"Rs. 100 = " <<hd;

  hd=fhd%100;        // 50
  fty=hd/50;	     // 1
  cout <<endl <<endl <<"Rs. 50 = " <<fty;

  fty=hd%50;        // 0
  tty=fty/20;	    // 0
  cout <<endl <<endl <<"Rs. 20 = " <<tty;

  tty=fty%20;	    // 0
  ten=tty/10;       // 0
  cout <<endl <<endl <<"Rs. 10 = " <<ten;

  ten=tty%10;        // 0
  five=ten/5;	     // 0
  cout <<endl <<endl <<"Rs. 5 = " <<five;

  five=ten%5;        // 0
  two=five/2;	     // 0
  cout <<endl <<endl <<"Rs. 2 = " <<two;

  two=five%2;        // 0
  one=two/1;	     // 0
  cout <<endl <<endl <<"Rs. 1 = " <<one;

  getche();

  }

