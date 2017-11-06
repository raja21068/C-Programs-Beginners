#include<constream.h>
class Rectangle{
public:
int x,y,width,height;
};
void main(){
clrscr();
Rectangle ob3;
Rectangle ob4;
ob3.x=5;
ob3.y=10;
ob3.width=100;
ob3.height=200;
ob4.x=10;
ob4.y=50;
ob4.width=50;
ob4.height=50;
cout<<"Addition is :"<<ob3.x+ob3.y+ob3.width+ob3.height<<endl;
cout<<"Subtraction is:"<<ob4.x-ob4.y-ob4.width-ob4.height<<endl;
getch();
}