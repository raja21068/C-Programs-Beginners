#include <conio.h>
#include <iostream.h>

   struct ArrayApp {

	void Insertion () {

	int A[5]={1,2,3,4,5},b,a ;
	    clrscr();

	    gotoxy(25,2);
	     cout<<"INSERTION";

	    cout<<"\n";
	    for(a=0; a<5; a++)
	      cout<<"A["<<a<<"] = "<<A[a]<<endl;


	    cout<<"\nEnter Value: ";
	    cin>>b;


	    for(a=4; a>=0; a--)
	      A[a+1]=A[a];

	    A[0]=b;

	    cout<<"\n\n";
	    for(a=0; a<=5; a++)
	      cout<<"A["<<a<<"] = "<<A[a]<<endl;

	    cout<<"\n\n\t\tPRESS ANY KEY TO GO BACK!";

	    getche();
	    }  		// End of Insertion Method


	void Deletion () {

	clrscr();

	int A[]={1,2,3,4,5};
	int del, b=1;

	  gotoxy(25,2);
	    cout<<"DELETION";

	  cout<<"\n";
	  for(int i=0; i<5; i++)
	    cout <<"A["<<i<<"] = "<<A[i]<<endl;

	  cout <<"\n\n\tEnter any value to delete: ";
	  cin >>del;

	  for(i=0; i<5; i++)
	    if(A[i]==del) {
	      for(int k=i; k<5; k++)
		A[k]=A[k+1];

	      for(i=0; i<5-1; i++)
		cout <<"A["<<i<<"] = "<<A[i]<<endl;
		b=0;
	    }                    // End of if

	  if(b)
	    cout <<"\n\n\tEntered value is not found!";

	  cout<<"\n\n\t\tPRESS ANY KEY TO GO BACK!";

	  getche();

	}        // End of Deletion Method


	void SortingAsc () {

				// ASCENDING SORTING
	 clrscr();

	int A[]={500,700,200,100,300};
	int b;

	gotoxy(25,2);
	  cout<<"SORTING ASCENDING";

	cout<<"\n";
	cout<<"\nBefore Sorting\n\n";

	for(int j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

	cout<<"\n\n";

	for(int i=1; i<=5; i++)
	  for(j=0; j<5-1; j++) {
	     if(A[j+1]<A[j]) {
		b=A[j];
		A[j]=A[j+1];
		A[j+1]=b;
	     } 		// End of if
	  }      // End of Inner for

	cout<<"\nAfter Sorting\n\n";

	for(j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

	cout<<"\n\n\t\tPRESS ANY KEY TO GO BACK!";

	getche();


	} 	// End of SortingAsc Method


	void SortingDesc () {

				// DESCENDING SORTING
	clrscr();

	int A[]={2,8,4,1,3};
	int b;

	gotoxy(25,2);
	  cout<<"SORTING DESCENDING";

	cout<<"\n";
	cout<<"\nBefore Sorting\n\n";

	for(int j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

	cout<<"\n\n";

	for(int i=1; i<=5; i++)
	  for(j=0; j<5-1; j++) {
	     if(A[j]<A[j+1]) {
		b=A[j];
		A[j]=A[j+1];
		A[j+1]=b;
	     }   // End of If
	  }      // End of for

	cout<<"\nAfter Sorting\n\n";

	for(j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

	cout<<"\n\n\t\tPRESS ANY KEY TO GO BACK!";

	getche();

	}  	// End of SortingDesc Method


	void Searching () {

	clrscr();

	int A[]={1,2,3,4,5};
	int src, b=1;

	gotoxy(25,2);
	  cout<<"SEARCHING";

	cout<<"\n";
	for(int i=0; i<5; i++)
	  cout <<"A["<<i<<"] = "<<A[i]<<endl;

	cout <<"\n\n\tEnter any value to search: ";
	cin >>src;

	for(i=0; i<5; i++)
	  if(A[i]==src) {
	    cout <<"\nA["<<i<<"] = "<<A[i]<<endl;
	    b=0;
	  }                    // End of if

	if(b)
	  cout <<"\n\n\tEntered value not found!";

	cout<<"\n\n\t\tPRESS ANY KEY TO GO BACK!";

	getche();

	} 	// End of Searching Method
   };      // End of Structure


 void main () {

   int op, op2;
   ArrayApp ob1;


  do {
   clrscr();

   cout <<"\n\n\t\tMAIN MENU\n";
   cout <<"\n\t1. INSERTION";
   cout <<"\n\t2. DELETION";
   cout <<"\n\t3. SORTING";
   cout <<"\n\t4. SEARCHING";
   cout <<"\n\t5. EXIT";

   cout <<"\n\n\tEnter your choice: ";
   cin >>op;


   switch(op) {

     case 1:		// INSERTION

	  ob1.Insertion();
	  break;

     case 2:    		// DELETION
	  ob1.Deletion();
	  break;

     case 3:
       do {			// SORTING
	  clrscr();
	  cout <<"\n\n\t1. ASCENDING SORTING";
	  cout <<"\n\t2. DESCENDING SORTING";
	  cout <<"\n\t3. BACK";

	  cout <<"\nEnter Choice: ";
	  cin>>op2;

	  switch (op2) {

	  case 1:
	       ob1.SortingAsc();
	       break;

	  case 2:
	       ob1.SortingDesc();
	       break;

	  }
       } while(op2!=3);
       break;

     case 4:			// SEARCHING
	  ob1.Searching();
	  break;

     case 5:                    // EXIT
	  break;

     }
   } while(op!=5);

 }  // End of Main Method