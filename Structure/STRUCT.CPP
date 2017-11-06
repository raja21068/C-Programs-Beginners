#include <conio.h>
#include <iostream.h>

struct BioData {

 char *name;
 char *rollno;
} ob1, ob2;



void main(void)
{
  clrscr();

  ob1.name="  Yougeshwar";
  ob1.rollno="2k10/CSE/86";

  cout <<"\n\nName: " <<ob1.name;
  cout <<"\nRollNo: " <<ob1.rollno;

  ob2.name="  Salman";
  ob2.rollno="2k10/CSE/73";

  cout <<"\n\nName: " <<ob2.name;
  cout <<"\nRollNo: " <<ob2.rollno;

  getche();

}