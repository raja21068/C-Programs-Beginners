 #include <conio.h>
 #include <iostream.h>
 #include <stdio.h>

 void main () {

 int obtmarks, maths, eng, comp, c_lang, j_lang;
 float tmarks, per;

 clrscr();

  cout <<endl <<endl <<"MARKSHEET";

  cout <<endl <<endl <<"Enter total marks: ";
  cin >>tmarks;

  cout <<endl <<endl <<"Enter subject marks: ";

  cout <<endl <<endl <<"1. Maths: ";
  cin >>maths;

  cout <<endl <<endl <<"2. English: ";
  cin >>eng;

  cout <<endl <<endl <<"3. Computer: ";
  cin >>comp;

  cout <<endl <<endl <<"4. C Language: ";
  cin >>c_lang;

  cout <<endl <<endl <<"5. Java Language: ";
  cin >>j_lang;

  obtmarks=(maths+eng+comp+c_lang+j_lang);
  cout <<endl <<endl <<"Obtained marks: ";
  cout <<obtmarks;

  per=(obtmarks/tmarks)*100.0;
  cout <<endl <<endl <<"Percentage (%): ";
  cout <<per;

  getche();

}


