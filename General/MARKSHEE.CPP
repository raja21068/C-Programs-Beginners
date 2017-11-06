 #include <conio.h>
 #include <iostream.h>
 #include <stdio.h>

 void main () {

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

	getch();

	}

