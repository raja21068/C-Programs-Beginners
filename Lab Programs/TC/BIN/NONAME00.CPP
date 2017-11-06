#include<constream.h>
class it{
public:
void first()
{
cout<<"we are in 1 of it";
}

void second()
{
cout<<"we are in 2 of it";
}

void third()
{
cout<<"we are in 3 of it";
}

void fourth()
{
cout<<"we are in 4 of it";
}
};


class softeng{

public:
void first()
{
cout<<"we are in 1 of softeng";
}

void second()
{
cout<<"we are in 2 of softeng";
}

void third()
{
cout<<"we are in 3 of softeng";
}

void fourth()
{
cout<<"we are in 4 of softeng";
}
};

 class elect{
 public:
void first()
{
cout<<"we are in 1 of elect";
}

void second()
{
cout<<"we are in 2 of elect";
}

void third()
{
cout<<"we are in 3 of elect";
}

void fourth()
{
cout<<"we are in 4 of elect";
}
};

void main()
{
clrscr();

it b1;
softeng b2;
elect b3;

b1.first();
b1.second();
b1.third();
b1.fourth();

b2.first();
b2.second();
b2.third();
b2.fourth();

b3.first();
b3.second();
b3.third();
b3.fourth();
getch();
}