#include<constream.h>

class Addition{
public:
       void add(int a,int b){
       cout<<"Addition "<<a+b<<endl;
       }
       void add(int a,int b,int c){
       cout<<"Addition "<<a+b+c<<endl;
       }
       void add(int a,int b,int c,int d){
       cout<<"Addition "<<a+b+c+d<<endl;
       }
       };

class Subtraction{
public:
       void sub(int a,int b){
       cout<<"Subtraction "<<a-b<<endl;
       }
       void sub(int a,int b,int c){
       cout<<"Subtraction "<<a-b-c<<endl;
       }
       void sub(int a,int b,int c,int d){
       cout<<"Subtraction "<<a-b-c-d<<endl;
       }
       };
class Multiplication{
public:
       void mul(int a,int b){
       cout<<"Multiplication "<<a*b<<endl;
       }
       void mul(int a,int b,int c){
       cout<<"Multiplication "<<a*b*c<<endl;
       }
       void mul(int a,int b,int c,int d){
       cout<<"Multiplication "<<a*b*c*d<<endl;
       }
       };
class Division{
public:
       void div(int a,int b){
       cout<<"Division "<<a/b<<endl;
       }
       void div(int a,int b,int c){
       cout<<"Division "<<a/b/c<<endl;
       }
       void div(int a,int b,int c,int d){
       cout<<"Division "<<a/b/c/d<<endl;
       }
       };

       void main(){
	   clrscr();
	   Addition ob1;
	   Subtraction ob2;
	   Multiplication ob3;
	   Division ob4;
	   ob1.add(10,20,30,40);
	   ob1.add(100,200);
	   ob1.add(500,300,200);
	   ob1.add(5,8,3,15);

	   ob2.sub(10,20,30,40);
	   ob2.sub(100,200);
	   ob2.sub(500,300,200);
	   ob2.sub(5,8,3,15);

	   ob3.mul(10,20,30,40);
	   ob3.mul(100,200);
	   ob3.mul(500,300,200);
	   ob3.mul(5,8,3,15);

	   ob4.div(10,20,30,40);
	   ob4.div(100,200);
	   ob4.div(500,300,200);
	   ob4.div(5,8,3,15);
	       getch();
	   }