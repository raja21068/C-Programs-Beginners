#include<iostream.h>
#include<conio.h>

class Test{
 public:
 void operator ++(){
 cout<<"I am increament operator\n";
 }
 void operator --(){
 cout<<"I am decreament operator\n";
 }
 void add(int a, int b){
 cout<<"Addition is "<<a+b;
 }
};
void main(){
 clrscr();
 Test ob;
 ob++;
 ob--;
 ob.add(10,5);
 getch();
}