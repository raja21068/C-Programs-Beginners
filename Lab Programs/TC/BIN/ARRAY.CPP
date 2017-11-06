#include<constream.h>
void main()
{
int data[]={10,90,40,30,60};
int greater_item=data[0];
clrscr();
for(int i=1; i<=4; i++)
{
if(data[i]>greater_item) greater_item=data[i];
}
cout<<"the largest element is"<<greater_item<<endl;
getch();
}