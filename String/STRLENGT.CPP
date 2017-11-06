#include<conio.h>
#include<iostream.h>
#include<string.h>


 void main () {

    int leng, comp;
    char *name="SALMAN";
    char *name2="shaikh";
    char *name3="2K10/CSE/73";
    char *n,*up,*lowr, *cat, *dup_str, set;
    char *ptr, c = 'r', check;

    char *string="This is a String";
    char symbol = 'x';

    clrscr();

    cout<<"\nBefore strset(): \n"<< string<<endl;
    strset(string, symbol);
    cout<<"\nAfter strset():  \n"<< string<<endl;


    cout<<"\nName1 is: "<<name<<endl;
    cout<<"Name2 is: "<<name2<<endl;

    dup_str=strdup(name);
    cout<<"\n\nDuplicate of Name1: "<<dup_str<<endl;

    cout<<"\nLength of Name1 is: "<<strlen(name)<<endl;
    cout<<"Length of Name2 is: "<<strlen(name2)<<endl;

    cat=strcat(name, name2);
    cout<<"\nAfter Concatenation: "<<cat<<endl;

    comp=strcmp(name,name2);

    cout <<endl<<"After Comparision of Name1 and Name2 is: "<<comp;

    cout<<"\n\nOriginal case: "<<name<<endl;
    up=strupr(name);
    cout<<"String in upper case: "<<up<<endl;

    cout<<"\nOriginal case: "<<name3<<endl;
    lowr=strlwr(name3);
    cout<<"String in Lower case: "<<lowr;

    ptr = strchr(string, c);
    cout<<endl<<"\nThe Character "<<c<<" is at position: "<<ptr-string;

    check = strcoll(name, name2);
    if (check == 0)
      cout<<endl<<"\nThe strings are equal\n";
    if (check <  0)
      cout<<endl<<"\n"<<name2<<" comes before "<<name;
    if (check >  0)
      cout<<endl<<"\n"<<name<<" comes before "<<name2<<" \n";


    n=strrev(name);
    cout<<"\n\nAfter Reverse Name1: "<<n<<endl;

     getche();
 }
