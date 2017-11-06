#include<constream.h>
class substraction
	{
	public:
		void sub_integer(int a,int b)
		 {
		 int sum;
		 sum=a-b;
		 cout<<"\nSubstraction of "<<a<<"-"<<b<<" is = "<<sum<<endl;
		 }

		 void sub_floating(float a,float b)
		 {
		 float sum;
		 sum=a-b;
		 cout<<"Substraction of "<<a<<"-"<<b<<" is = "<<sum<<endl;
		 }
	};


class addition
	{
	public:
		void add_integer(int a,int b)
		 {
		 int sum;
		 sum=a+b;
		 cout<<"addition of "<<a<<"-"<<b<<" is = "<<sum<<endl;
		 }

		 void add_floating(float a,float b)
		 {
		 float sum;
		 sum=a+b;
		 cout<<"addition of "<<a<<"-"<<b<<" is = "<<sum<<endl;
		 }
	};


class multiplication
	{
	public:
		void mul_integer(int a,int b)
		 {
		 int sum;
		 sum=a*b;
		 cout<<"multiplication of "<<a<<"-"<<b<<" is = "<<sum<<endl;
		 }

		 void mul_floating(float a,float b)
		 {
		 float sum;
		 sum=a*b;
		 cout<<"multiplication of "<<a<<"-"<<b<<" is = "<<sum<<endl;
		 }
	};


class division
	{
	public:
		void div_integer(int a,int b)
		 {
		 int sum;
		 sum=a/b;
		 cout<<"division of "<<a<<"-"<<b<<" is = "<<sum<<endl;
		 }

		 void div_floating(float a,float b)
		 {
		 float sum;
		 sum=a/b;
		 cout<<"division of "<<a<<"-"<<b<<" is = "<<sum<<endl;
		 }
	};


void main()
{
int s,t,c,d;
float e,f;
char key;
begin:
clrscr();
substraction ob1;
addition ob2;
multiplication ob3;
division ob4;

cout<<"Calculator\n";
cout<<"Substracion    [1]\n";
cout<<"Addition       [2]\n";
cout<<"Multiplication [3]\n";
cout<<"Division       [4]\n\n\n\n\n";
cout<<"Please Enter case number for given Task:";
cin>>s;
switch(s)
{
case 1:
	cout<<"\nWelcome to Substraction Wall";
	cout<<"\nFor integer  [1]";
	cout<<"\nFor floating [2]";
	cout<<"\nPlease Enter:";
	cin>>t;
	if (t==1)
	{
	cout<<"\nWelcome to Integer wall\n\n";
	cout<<"\nPlease Enter value for sum:";
	cin>>c;
	cout<<"\nPlease Enter another value for sum:";
	cin>>d;
	ob1.sub_integer(c,d);
	cout<<"\n\npress any key......";
	getch();
	goto middle;
	}
	else if (t==2)
	{
	cout<<"\nWelcome to Floating wall\n\n";
	cout<<"\nPlease Enter value for sum:";
	cin>>e;
	cout<<"\nPlease Enter another value for sum:";
	cin>>f;
	ob1.sub_floating(e,f);
	cout<<"\n\npress any key......";
	getch();
	goto middle;
	}
	else
	cout<<"Invalid number";
break;

case 2:
	cout<<"\nWelcome to Addition Wall";
	cout<<"\nFor integer  [1]";
	cout<<"\nFor floating [2]";
	cout<<"\nPlease Enter:";
	cin>>t;
	if (t==1)
	{
	cout<<"\nWelcome to Integer wall\n\n";
	cout<<"\nPlease Enter value for sum:";
	cin>>c;
	cout<<"\nPlease Enter another value for sum:";
	cin>>d;
	ob2.add_integer(c,d);
	cout<<"\n\npress any key......";
	getch();
	goto middle;
	}
	else if (t==2)
	{
	cout<<"\nWelcome to Floating wall\n\n";
	cout<<"\nPlease Enter value for sum:";
	cin>>e;
	cout<<"\nPlease Enter another value for sum:";
	cin>>f;
	ob2.add_floating(e,f);
	cout<<"\n\npress any key......";
	getch();
	goto middle;
	}
	else
	cout<<"Invalid number";
break;


case 3:
	cout<<"\nWelcome to Multiplication Wall";
	cout<<"\nFor integer  [1]";
	cout<<"\nFor floating [2]";
	cout<<"\nPlease Enter:";
	cin>>t;
	if (t==1)
	{
	cout<<"\nWelcome to Integer wall\n\n";
	cout<<"\nPlease Enter value for sum:";
	cin>>c;
	cout<<"\nPlease Enter another value for sum:";
	cin>>d;
	ob3.mul_integer(c,d);
	cout<<"\n\npress any key......";
	getch();
	goto middle;
	}
	else if (t==2)
	{
	cout<<"\nWelcome to Floating wall\n\n";
	cout<<"\nPlease Enter value for sum:";
	cin>>e;
	cout<<"\nPlease Enter another value for sum:";
	cin>>f;
	ob3.mul_floating(e,f);
	cout<<"\n\npress any key......";
	getch();
	goto middle;
	}
	else
	cout<<"Invalid number";
break;

case 4:
	cout<<"\nWelcome to Division Wall";
	cout<<"\nFor integer  [1]";
	cout<<"\nFor floating [2]";
	cout<<"\nPlease Enter:";
	cin>>t;
	if (t==1)
	{
	cout<<"\nWelcome to Integer wall\n\n";
	cout<<"\nPlease Enter value for sum:";
	cin>>c;
	cout<<"\nPlease Enter another value for sum:";
	cin>>d;
	ob4.div_integer(c,d);
	cout<<"\n\npress any key......";
	getch();
	goto middle;
	}
	else if (t==2)
	{
	cout<<"\nWelcome to Floating wall\n\n";
	cout<<"\nPlease Enter value for sum:";
	cin>>e;
	cout<<"\nPlease Enter another value for sum:";
	cin>>f;
	ob4.div_floating(e,f);
	cout<<"\n\npress any key......";
	getch();
	goto middle;
	}
	else
	cout<<"Invalid number";
break;
default:
cout<<"Invalid number";
}
middle:
cout<<"\n\nto continue...[Y/N]:";
key=getche();
if (key=='y' || key=='Y')
goto begin;
getch();
}