#include<constream.h>
class calculator{
public:
void add(int a, int b){
cout<<"Addition is"<<a+b<<endl;
}
void sub(int a,int b){
cout<<"subtration is"<<a-b<<endl;
}
void mul(int a,int b){
cout<<"Multiplication is"<<a*b<<endl;
}
void div(int a, int b){
cout<<"division is "<<a/b<<endl;
}



};
void main(){
clrscr();
calculator calc;
calc.add(10,5);
calc.add(100,25);
calc.sub(5,3);
calc.mul(10,5);
calc.mul(5,6);
calc.div(10,2);
getch();



}



