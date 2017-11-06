#include <conio.h>
#include <iostream.h>
#include <dos.h>

void main () {
                        // DIAMOND 1
    clrscr();
    int a, b;

    for(int i=1; i<=19; i++) {
        for(int j=1; j<=21; j++)
        cout<<"*";
        cout<<"\n";
    }
                        // DIAMOND 2
    delay(2000);
    clrscr();

    a=1;
    for(i=1; i<=10; i++) {

      for(int j=1; j<=11-i; j++)
        cout<<"*";
      for(int k=1; k<=a; k++)
        cout<<" ";
      for(int l=1; l<=11-i; l++)
        cout<<"*";

      for(int m=1; m<=11-i; m++)
        cout<<" ";
      for(int n=1; n<=a; n++)
        cout<<"*";
      for(int o=1; o<=11-i; o++)
        cout<<" ";
      cout<<"\n";
      a+=2;
    }

    a=18;
    for(i=1; i<=9; i++) {
      for(int j=1; j<=(i+1); j++)
        cout<<"*";
      for(int k=1; k<=a-i; k++)
        cout<<" ";
      for(int l=1; l<=(i+1); l++)
        cout<<"*";

      for(int m=1; m<=(i+1); m++)
        cout<<" ";
      for(int n=1; n<=a-i; n++)
        cout<<"*";
      for(int o=1; o<=(i+1); o++)
        cout<<" ";
      cout<<"\n";
      a--;
    }
    
                    // DIAMOND 3
    delay(2000);
    clrscr();

    a=1, b=32;
    for(i=1; i<=10; i++) {
      for(int j=1; j<=11-i; j++)
        cout<<"*";
      for(int k=1; k<=a; k++)
        cout<<" ";
      for(int l=1; l<=11-i; l++)
        cout<<"*";

      for(int m=1; m<=b-i; m++)
        cout<<" ";
      for(int n=1; n<=a; n++)
        cout<<"*";
      for(int o=1; o<=11-i; o++)
        cout<<" ";
      cout<<"\n";
      a+=2;
    }

    a=18, b=22;
    for(i=1; i<=9; i++) {
      for(int j=1; j<=(i+1); j++)
        cout<<"*";
      for(int k=1; k<=(a-i); k++)
        cout<<" ";
      for(int l=1; l<=(i+1); l++)
        cout<<"*";

      for(int m=1; m<=(b+i); m++)
        cout<<" ";
      for(int n=1; n<=(a-i); n++)
        cout<<"*";
      for(int o=1; o<=(i+1); o++)
        cout<<" ";
      cout<<"\n";
      a--;
    }
    
                    // DIAMOND 4
    delay(2000);
    clrscr();
    
    a=1, b=48;
    for(i=1; i<=10; i++) {
      for(int j=1; j<=11-i; j++)
        cout<<"*";
      for(int k=1; k<=a; k++)
        cout<<" ";
      for(int l=1; l<=11-i; l++)
        cout<<"*";

      for(int m=1; m<=b-i; m++)
        cout<<" ";
      for(int n=1; n<=a; n++)
        cout<<"*";
      for(int o=1; o<=11-i; o++)
        cout<<" ";
      cout<<"\n";
      a+=2;
    }

    a=18, b=38; 
    for(i=1; i<=9; i++) {
      for(int j=1; j<=(i+1); j++)
        cout<<"*";
      for(int k=1; k<=(a-i); k++)
        cout<<" ";
      for(int l=1; l<=(i+1); l++)
        cout<<"*";

      for(int m=1; m<=(b+i); m++)
        cout<<" ";
      for(int n=1; n<=(a-i); n++)
        cout<<"*";
      for(int o=1; o<=(i+1); o++)
        cout<<" ";
      cout<<"\n";
      a--;
    }

                    // BELOW DIAMOND 1
    
    delay(2000);
    clrscr();

    a=1;    
    for(i=1; i<10; i++) {
      for(int j=1; j<=11-i; j++)
        cout <<"*";
      for(int k=1; k<=a; k++)
        cout <<" ";
      for(int l=1; l<=11-i; l++)
        cout <<"*";
      cout <<"\n";
      a+=2;
    }

    a=19;   
    for(i=0; i<=9; i++) {
      for(int j=1; j<=(i+1); j++)
        cout <<"*";
      for(int k=1; k<=(a-i); k++)
        cout <<" ";
      for(int l=1; l<=(i+1); l++)
        cout <<"*";
      cout <<"\n";
      a--;
    }
    
    cout<<"\n";

    a=1;    
    for(i=1; i<=10; i++) {
      for(int j=1; j<=68-i; j++)
        cout<<" ";
      for(int k=1; k<=a; k++)
        cout<<"*";
      for(int l=1; l<=11-i; l++)
        cout<<" ";
      cout<<"\n";
      a+=2;
    }

    a=18;   
    for(i=1; i<=9; i++) {
      for(int j=1; j<=(58+i); j++)
        cout<<" ";
      for(int k=1; k<=(a-i); k++)
        cout<<"*";
      for(int l=1; l<=(i+1); l++)
        cout<<" ";
      cout<<"\n";
      a--;
    }

                        // BELOW DIAMOND 2
    
    delay(2000);
    clrscr();

    a=1;    
    for(i=1; i<10; i++) {
      for(int j=1; j<=11-i; j++)
        cout <<"*";
      for(int k=1; k<=a; k++)
        cout <<" ";
      for(int l=1; l<=11-i; l++)
        cout <<"*";
      cout <<"\n";
      a+=2;
    }

    a=19;   
    for(i=0; i<=9; i++) {
      for(int j=1; j<=(i+1); j++)
        cout <<"*";
      for(int k=1; k<=(a-i); k++)
        cout <<" ";
      for(int l=1; l<=(i+1); l++)
        cout <<"*";
      cout <<"\n";
      a--;
    }
    cout<<"\n";

    a=1;
    for(i=1; i<=10; i++) {
      for(int j=1; j<=53-i; j++)
        cout<<" ";
      for(int k=1; k<=a; k++)
        cout<<"*";
      for(int l=1; l<=11-i; l++)
        cout<<" ";
      cout<<"\n";
      a+=2;
    }

    a=18;   
    for(i=1; i<=9; i++) {
      for(int j=1; j<=(43+i); j++)
        cout<<" ";
      for(int k=1; k<=(a-i); k++)
        cout<<"*";
      for(int l=1; l<=(i+1); l++)
        cout<<" ";
      cout<<"\n";
      a--;
    }

                        // BELOW DIAMOND 3
    
    delay(2000);
    clrscr();

    a=1;
    for(i=1; i<10; i++) {
      for(int j=1; j<=11-i; j++)
        cout <<"*";
      for(int k=1; k<=a; k++)
        cout <<" ";
      for(int l=1; l<=11-i; l++)
        cout <<"*";
      cout <<"\n";
      a+=2;
    }

    a=19;
    for(i=0; i<=9; i++) {
      for(int j=1; j<=(i+1); j++)
        cout <<"*";
      for(int k=1; k<=(a-i); k++)
        cout <<" ";
      for(int l=1; l<=(i+1); l++)
        cout <<"*";
      cout <<"\n";
      a--;
    }
    cout<<"\n";

    a=1;
    for(i=1; i<=10; i++) {
      for(int j=1; j<=33-i; j++)
        cout<<" ";
      for(int k=1; k<=a; k++)
        cout<<"*";
      for(int l=1; l<=11-i; l++)
        cout<<" ";
      cout<<"\n";
      a+=2;
    }

    a=18;
    for(i=1; i<=9; i++) {
      for(int j=1; j<=(23+i); j++)
        cout<<" ";
      for(int k=1; k<=(a-i); k++)
        cout<<"*";
      for(int l=1; l<=(i+1); l++)
        cout<<" ";
      cout<<"\n";
      a--;
    }

                        // BELOW DIAMOND 4
    
    delay(2000);
    clrscr();

    a=1;
    for(i=1; i<10; i++) {
      for(int j=1; j<=11-i; j++)
        cout <<"*";
      for(int k=1; k<=a; k++)
        cout <<" ";
      for(int l=1; l<=11-i; l++)
        cout <<"*";
      cout <<"\n";
      a+=2;
    }

    a=19;
    for(i=0; i<=9; i++) {
      for(int j=1; j<=(i+1); j++)
        cout <<"*";
      for(int k=1; k<=(a-i); k++)
        cout <<" ";
      for(int l=1; l<=(i+1); l++)
        cout <<"*";
      cout <<"\n";
      a--;
    }
    cout<<"\n";

    a=1;
    for(i=1; i<=10; i++) {
      for(int j=1; j<=11-i; j++)
        cout<<" ";
      for(int k=1; k<=a; k++)
        cout<<"*";
      for(int l=1; l<=11-i; l++)
        cout<<" ";
      cout<<"\n";
      a+=2;
    }

    a=18;
    for(i=1; i<=9; i++) {
      for(int j=1; j<=(i+1); j++)
        cout<<" ";
      for(int k=1; k<=a-i; k++)
        cout<<"*";
      for(int l=1; l<=(i+1); l++)
        cout<<" ";
      cout<<"\n";
      a--;
    }

                    // LAST DIAMOND
    
    delay(2000);
    clrscr();

    for(i=1; i<=19; i++) {
      for(int j=1; j<=21; j++)
        cout<<"*";
        cout<<"\n";
    }

    cout<<"\t\t\tPROGRAMMED BY: SHAIKH MUHAMMAD SALMAN";
    delay(3000);

}