 #include <conio.h>
 #include <iostream.h>
 #include <stdio.h>
 #include <dos.h>


 void main () {
 int op,op1,op2,op3,op4;

			  // Start of Main while
  clrscr();

	cout <<"\n\t\tOPTIONAL SOFTWARE\n";

	cout <<"\n\n\t1. Simple";
	cout <<"\n\n\t2. If Else";
	cout <<"\n\n\t3. For Loop";
	cout <<"\n\n\t4. Exit";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op;

	while (op!=4) {

	switch (op) {

	case 1:
	    clrscr();
		 cout <<"\n\n\tWELCOME TO SIMPLE PROGRAMS";

	cout <<"\n\n\t1. Amount";
	cout <<"\n\n\t2. Salary";
	cout <<"\n\n\t3. Area";
	cout <<"\n\n\t4. Marksheet";
	cout <<"\n\n\t5. Equation";
	cout <<"\n\n\t6. Back";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op1;

	while (op1!=6) {

	switch (op1) { 		// Start of inner Switch
		clrscr();
	case 1:
		cout <<"\n\n\tWELCOME TO AMOUNT PROGRAM";

	int amnt, fth, th, fhd, hd, fty, tty, ten, five, two, one;

	  clrscr();

	  cout <<"Enter amount in Rs: ";
	  cin >> amnt;

	  fth=amnt/5000;
	  cout <<endl <<"Rs. 5000 = " <<fth;

	amnt=amnt%5000;
	  th=amnt/1000;
	cout <<endl <<endl <<"Rs. 1000 = " <<th;

	th=amnt%1000;
	fhd=th/500;
	cout <<endl <<endl <<"Rs. 500 = " <<fhd;

	fhd=th%500;
	hd=fhd/100;
	cout <<endl <<endl <<"Rs. 100 = " <<hd;

	hd=fhd%100;
	fty=hd/50;
	cout <<endl <<endl <<"Rs. 50 = " <<fty;

	fty=hd%50;
	tty=fty/20;
	cout <<endl <<endl <<"Rs. 20 = " <<tty;

	tty=fty%20;
	ten=tty/10;
	cout <<endl <<endl <<"Rs. 10 = " <<ten;

	ten=tty%10;
	five=ten/5;
	 cout <<endl <<endl <<"Rs. 5 = " <<five;

	five=ten%5;
	two=five/2;
	cout <<endl <<endl <<"Rs. 2 = " <<two;

	two=five%2;
	one=two/1;
	cout <<endl <<endl <<"Rs. 1 = " <<one;
	break;

	case 2:

	clrscr();

		cout <<"\n\n\tWELCOME TO SALARY PROGRAM";

	int salary, hr, md, con, edu, bon, gross, tax, zak;

	clrscr();

	  cout <<"Enter Basic Salary in 	       Rs:";
	  cin >> salary;

	  hr=salary/100*10;
	  cout <<endl <<"House Rent 10% 			Rs:" <<hr;

	  md=salary/100*8;
	  cout <<endl <<endl <<"Medical Allowance 8% 		Rs:" <<md;

	  con=salary/100*10;
	  cout <<endl <<endl <<"Convance Allowance 10% 		Rs:" <<con;

	  edu=salary/100*10;
	  cout <<endl <<endl <<"Educational Allowance 10% 	Rs:" <<edu;

	  bon=salary/100*5;
	  cout <<endl <<endl <<"Bonus 5% 		       +Rs:" <<bon;

	  gross=(salary+hr+md+con+edu+bon);
	  cout <<endl <<endl <<"Gross Salary 			Rs:" <<gross;

	  tax=salary/100*5;
	  cout <<endl <<endl <<endl <<endl <<"Tax 5%				Rs:" <<tax;

	  zak=salary/100*5;
	  cout <<endl <<endl <<"Zakat 5%		       -Rs:" <<zak;

	  int net=(gross-tax-zak);
	  cout <<endl <<endl <<"Net Income 			Rs:" <<net;
	  break;


	case 3:
	 clrscr();
		cout <<"\n\n\tWELCOME TO AREA PROGRAM";

	 float area, radius, pie=3.14;
	clrscr();

	 printf("\n\nCalculating the Area of a Circle...");
	 printf("\n\n\t\tãrý");

	 printf("\n\nã is constant and equal to = 3.14");


	 printf("\n\n\n\tEnter Radius = ");
	 scanf("%f",&radius);

	 area=pie*(radius*radius);

	 printf("\n\n\n        => The area of the circle is %.1f meter",area);
	 break;

	case 4:

	clrscr();
	  int maths, eng, comp, c_lang, j_lang;
	  float obtmarks,tmarks, per;


	  cout <<endl<<endl<<"\t\t\tMarksheet" ;

	  cout <<endl<<endl<<"\t\tEnter total marks:		" ;
	  cin >>tmarks;

	  cout <<endl<<endl<<"\t\tNow enter marks for the following Subjects" ;

	  cout <<endl<<endl<<"\t\t	1. Maths:		" ;
	  cin >>maths;

	  cout <<endl<<"\t\t        2. English:		" ;
	  cin >>eng;

	  cout <<endl<<"\t\t        3. Computer:		" ;
	  cin >>comp;

	  cout <<endl<<"\t\t	4. C Language:		" ;
	  cin >>c_lang;

	  cout <<endl<<"\t\t	5. Java Language:	" ;
	  cin >>j_lang;

	  obtmarks=(maths+eng+comp+c_lang+j_lang);
	  cout <<endl<<"\t\t	Obtain Marks:		" ;
	  cout <<obtmarks;

	  cout <<endl<<"\t\t	Total Marks:		" ;
	  cout <<tmarks;


	  per=(obtmarks*100)/tmarks;
	  cout <<endl <<endl <<"\t\t	Percentage:		" ;
	  cout <<per ;

	  if (per>=80 && per<100)
	  cout<<endl <<endl <<"\t\t	Grade: A1";

	 if (per>=70 && per<80)
	  cout<<endl <<endl <<"\t\t	Grade: A";

	  if (per>=60 && per<70)
	  cout<<endl <<endl <<"\t\t	Grade: B";

	  if (per>=50 && per<60)
	  cout<<endl <<endl <<"\t\t	Grade: C";

	  if (per>=40 && per<50)
	  cout<<endl <<endl <<"\t\t	Grade: D";

	  if (per<40)
	  cout<<endl <<endl <<"\t\t	Grade: FAIl";

	  if (per>100)
	 cout <<endl <<endl <<endl <<"\t\t	Invalid Percentage !";
	 break;

	case 5:
	 clrscr();

	 int a,b,c,x,y;

	 printf("\n\n\t\tSolving Equation X=++a + b*c \n\n\t\t Y=a++ +b*c");

	 printf("\n\n\t\tEnter value for a = ");
	 scanf("%d",&a);

	 printf("\n\n\t\tEnter value for b = ");
	 scanf("%d",&b);

	 printf("\n\n\t\tEnter value for c = ");
	 scanf("%d",&c);

	 x=++a + b*c;
	 y=a++ +b*c;

	 printf("\n\n\t\tThe X= ++a + b*c = %d ",x);
	 printf("\n\n\t\tThe Y= a++ + b*c = %d ",y);
	 break;

	default:
	cout <<"\n\n\tInvalid choice !";
	break;

	} 	// End of Inner Switch
	 getche();

	clrscr();
		 cout <<"\n\n\tWELCOME TO SIMPLE PROGRAMS";

	cout <<"\n\n\t1. Amount";
	cout <<"\n\n\t2. Salary";
	cout <<"\n\n\t3. Area";
	cout <<"\n\n\t4. Marksheet";
	cout <<"\n\n\t5. Equation";
	cout <<"\n\n\t6. Back";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op1;

	}  // End of While
	break;

	case 2:
	clrscr();
		 cout <<"\n\n\tWELCOME TO IF ELSE PROGRAMS";

	cout <<"\n\n\t1. Electricity Bill";
	cout <<"\n\n\t2. EvenOdd";
	cout <<"\n\n\t3. PositiveNegative Value";
	cout <<"\n\n\t4. Simple IF";
	cout <<"\n\n\t5. Back";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op2;

	while (op2!=5) {

	switch (op2) {

	case 1:

	 clrscr();

	  int units,bill;

	  cout <<"\n\n\t\tELECTRICITY BILL CALCULATOR";
	  cout <<"\n\n\n\nEnter the consumed units: ";
	  cin  >>units;

	  if (units <=100) {
	   bill=(units*2);
	   cout <<"\nThe total bill is Rs: ";
	   cout <<bill;
	   }

	  else if (units >100 && units<=200) {
	   bill=(units*4);
	   cout <<"\nThe total bill is Rs: ";
	   cout <<bill;
	   }

	  else if (units >200 && units<=300) {
	   bill=(units*6);
	   cout <<"\nThe total bill is Rs: ";
	   cout <<bill;
	   }

	  else if (units >300 && units<=400) {
	   bill=(units*8);
	   cout <<"\nThe total bill is Rs: ";
	   cout <<bill;
	   }

	  else if (units >400 && units<=500) {
	   bill=(units*10);
	  cout <<"\nThe total bill is Rs: ";
	   cout <<bill;
	  }

	  else if (units >500 && units<=1000) {
	   bill=(units*12);
	   cout <<"\nThe total bill is Rs: ";
	   cout <<bill;
	   }

	 else
	 cout <<"\nElectricity is being consumed on commercial level !";
	 break;

	case 2:

	clrscr();
		cout <<"\n\n\tODD EVEN PROGRAM";
	int num;


	cout <<endl<<endl<<"\t\tEnter Number: " ;
	cin >>num;

	if (num%2==0)
	cout <<endl<<endl<<"\t\tEVEN NUMBER";

	else
	cout <<endl<<endl<<"\t\tODD NUMBER";
	break;

	case 3:
	clrscr();
	//int num;
		cout <<"\n\n\tPOSITIVE NEGATIVE";

	cout <<endl<<endl<<"\t\tEnter Number: " ;
	cin >>num;

	if (num>0)
	  cout <<endl<<endl<<"\t\tPOSTIVE NUMBER";

	else
	  cout <<endl<<endl<<"\t\tNEGATIVE NUMBER";
	break;

	case 4:
	 clrscr();
	int pass;


	cout <<endl<<endl<<"\t\tEnter Password: " ;
	cin >>pass;

	if (pass==10 || pass==16 || pass==30)
	  cout <<endl<<endl<<"\t\tWELCOME...";

	else
	  cout <<endl<<endl<<"\t\tOUTSIDERS NOT ALLOWED !";
	break;

	default:

	cout <<"\n\n\tINVALID CHOICE !";
	break;

	} 	// End of Switch
	getche();

	clrscr();
		 cout <<"\n\n\tWELCOME TO IF ELSE PROGRAMS";

	cout <<"\n\n\t1. Electricity Bill";
	cout <<"\n\n\t2. EvenOdd";
	cout <<"\n\n\t3. PositiveNegative Value";
	cout <<"\n\n\t4. Simple IF";
	cout <<"\n\n\t5. Back";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op2;

	} 	// End of While
	break;

	case 3:

	clrscr();
		cout <<"\n\n\tFOR LOOP PROGRAM";

	cout <<"\n\n\t1. For";
	cout <<"\n\n\t2. For Table";
	cout <<"\n\n\t3. For Range";
	cout <<"\n\n\t4. Table Range";
	cout <<"\n\n\t5. Time";
	cout <<"\n\n\t6. Back";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op3;

	while (op3!=6) {

	switch(op3) {

	case 1:

	clrscr();

	  int i;

	for (i=1; i<=10; i++)

	  if (i%2==0)
	  cout << i <<" is Even\n\n";

	  else
	  cout << i <<" is Odd\n\n";
	break;

	case 2:

	clrscr();

	int a,b,t;

	cout <<"\n\nEnter the Table no: ";
	cin >>t;

	cout <<"\n\nEnter the starting range for table: ";
	cin >>a;

	cout <<"\n\nEnter the Ending range for table: ";
	cin >>b;


	for (i=a; i<=b; i++)

	  cout <<"\n\n" <<t << " X " <<i << " = " << i*t;
	break;

	case 3:

	clrscr();

	cout <<"\n\nEnter the starting range of loop: ";
	cin >>a;

	cout <<"\n\nEnter the Ending range of loop: ";
	cin >>b;


	for (i=a; i<=b; i++)

	  cout <<endl << i <<"\n";
	break;

	case 4:

	clrscr();

	cout <<"\n\n\tEnter number of tables you want: ";
	cin >>a;

	  for (i=2; i<=a; i++) {
	   cout <<"\n\n";
	     for (int j=1; j<=10; j++)  {
		delay(100);
		cout <<endl<<i<<" X "<<j<<" = "<<i*j;

		}
	     }
	 break;

	case 5:

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
	break;

	default:

	cout <<"\n\n\tINVALID CHOICE !";
	break;

	} 	// End of Switch
	getche();

	clrscr();
		cout <<"\n\n\tFOR LOOP PROGRAMS";

	cout <<"\n\n\t1. For";
	cout <<"\n\n\t2. For Table";
	cout <<"\n\n\t3. For Range";
	cout <<"\n\n\t4. Table Range";
	cout <<"\n\n\t5. Time";
	cout <<"\n\n\t6. Back";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op3;

	} 	// End of While
	break;

	default:
	cout<<"\n\n\tINVALID CHOICE !";
	break;

	} 	// End of Main Switch

	 clrscr();

	cout <<"\n\t\tOPTIONAL SOFTWARE\n";

	cout <<"\n\n\t1. Simple";
	cout <<"\n\n\t2. If Else";
	cout <<"\n\n\t3. For Loop";
	cout <<"\n\n\t4. Exit";

	cout <<"\n\n\tEnter your choice: ";
	cin >>op;

	}	// End of While


}