 #include <iostream.h>
 #include <conio.h>

 void main () {

 int salary, hr, md, con, edu, bon, gross, tax, zak;

  clrscr();

  cout <<"Enter Basic Salary in 	       Rs:";
  cin >> salary;    // 5000

  hr=salary/100*10;  // 500
  cout <<endl <<"House Rent 10% 			Rs:" <<hr;

  md=salary/100*8;   // 400
  cout <<endl <<endl <<"Medical Allowance 8% 		Rs:" <<md;

  con=salary/100*10;  // 500
  cout <<endl <<endl <<"Convance Allowance 10% 		Rs:" <<con;

  edu=salary/100*10;  // 500
  cout <<endl <<endl <<"Educational Allowance 10% 	Rs:" <<edu;

  bon=salary/100*5;        // 50
  cout <<endl <<endl <<"Bonus 5% 		       +Rs:" <<bon;

  gross=(salary+hr+md+con+edu+bon);
  cout <<endl <<endl <<"Gross Salary 			Rs:" <<gross;

  tax=salary/100*5;
  cout <<endl <<endl <<endl <<endl <<"Tax 5%				Rs:" <<tax;

  zak=salary/100*5;
  cout <<endl <<endl <<"Zakat 5%		       -Rs:" <<zak;

  int net=(gross-tax-zak);
  cout <<endl <<endl <<"Net Income 			Rs:" <<net;

  getche();

  }

