#include <conio.h>
#include <iostream.h>

   struct ArrayApp {

	void Insertion () {

	int A[5]={1,2,3,4,5},b,a ;
	    clrscr();

	    for(a=0; a<5; a++){
	      printf("A[%d] : %d\n",a,A[a]);
	    }

	    printf("Enter Value: ");
	    scanf("%d",&b);


	    for(a=4; a>=0; a--){
	      A[a+1]=A[a];
	    }
	    A[0]=b;

	    for(a=0; a<=5; a++){
	      printf("A[%d] : %d\n",a,A[a]);

	    getche();
	    }  		// End of Insertion Method


	void Deletion () {

	clrscr();

	int A[]={1,2,3,4,5};
	int del, b=1;

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

	  getche();

	}        // End of Deletion Method


	void SortingAsc () {

				// ASCENDING SORTING
	 clrscr();

	int A[]={500,700,200,100,300};
	int b;

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

	getche();


	} 	// End of SortingAsc Method


	void SortingDesc () {

				// DESCENDING SORTING
	clrscr();

	int A[]={2,8,4,1,3};
	int b;

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
	     }
	  }

	cout<<"\nAfter Sorting\n\n";

	for(j=0; j<5; j++)
	  cout <<"A["<<j<<"]="<<A[j]<<endl;

	getche();


	}  	// End of SortingDesc Method


	void Searching () {

	clrscr();

	int A[]={1,2,3,4,5};
	int src, b=1;

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

	getche();


	} 	// End of Searching Method

   };      // End of Structure


 void main () {

   clrscr();

   ArrayApp ob1;

   int op;

   cout <<"\n\n\t\tMAIN MENU\n";
   cout <<"\n\t1. INSERTION";
   cout <<"\n\t2. DELETION";
   cout <<"\n\t3. SORTING";
   cout <<"\n\t4. SEARCHING";
   cout <<"\n\t5. EXIT";

   cout <<"\n\n\tEnter your choice: ";
   cin >>op;

   do {

   switch(op) {

     case 1:		// INSERTION

	  ob1.Insertion();
	  break;

     case 2:    		// DELETION
	  ob1.Deletion();
	  break;

     case 3:			// SORTING

	  cout <<"\n\n\t1. ASCENDING SORTING";
	  cout <<"\n\n\t2. DESCENDING SORTING";
	  cout <<"\n\n\t3. BACK";

	  ob1.SortingAsc();
	  ob1.SortingDesc();
	  break;
     case 4:			// SEARCHING
	  ob1.Searching();
	  break;

     case 5:                    // EXIT
	  break;

     }
   } while (op!=5);
	  getche();

 }