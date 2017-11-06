#include "stdio.h"
#include "conio.h"

void InsertionArray();
void DeletionArray();
void SearchingArray();
void SortingAscArray();
void SortingDscArray();


void main(){
 clrscr();
 int i,op,length, forLoop;

 char *ch[]={"INSERTION",
	     "DELETION",
	     "SEARCHING",
	     "SORTING ASCENDING",
	     "SORTING DESCENDING",
	    };

 do{
   clrscr();
   gotoxy(25,2);
   printf("DATA STRUCTURE");
   gotoxy(9,6);
   printf("Selection Menu for the Data Structure");

   length=sizeof(ch)/sizeof(int);
   for(forLoop=0; forLoop<length; forLoop++)
   printf("\n\n\t%d. %s", (forLoop+1), ch[forLoop]);
   printf("\n\n\t%d. EXIT", forLoop+1);

   printf("\n\n\tEnter your Selection: ");
   scanf("%d", &op);

   switch(op){
     case 1:
	InsertionArray();
     break;

     case 2:
	DeletionArray();
     break;

     case 3:
	SearchingArray();
     break;

     case 4:
	SortingAscArray();
     break;

     case 5:
	SortingDscArray();
     break;

     default:
	printf("\n\nEntered choice is Invalid !!!");
     break;
   }
 }while(op!=6);

// getch();
}


void InsertionArray(){
    int A[20],b,a,n;
    clrscr();

    gotoxy(25,2);
    printf("INSERTION ARRAY");

    printf("\n\nNumber of elements you want to enter: ");
    scanf("%d",&n);

    A[n];
	//	Entering values
    printf("\n\nEnter values:");
    for(a=0; a<n; a++){
       printf("\nA[%d] = ",a);
       scanf("%d",&A[a]);
    }

    printf("\n\nEnter any value in above array: ");
    scanf("%d", &b);

    for(a=n; a>=0; a--){
	A[a+1]=A[a];
    }
    A[0]=b;

    printf("\n\n");
    for(a=0; a<=n; a++){
	printf("A[%d] : %d\n", a, A[a]);
    }
    gotoxy(25,40);
    printf("Press any key to enter");
 getch();
}	//	End of InsertionArray


void DeletionArray(){
    clrscr();
    gotoxy(25,2);
    printf("DELETION ARRAY");

    int A[]={1, 2, 3, 4, 5};
    int del, b=1;
    printf("\n\n");
    for(int i=0; i<5; i++) {
	printf("A[%d] = %d", i, A[i]);
	printf("\n");
    }

    printf("\n\n\tEnter any value to delete: ");
    scanf("%d", &del);

    for(i=0; i<5; i++)
    if(A[i]==del) {
	for(int k=i; k<5; k++)
	A[k]=A[k+1];

	for(i=0; i<5-1; i++)
	printf("A[%d] = %d\n", i, A[i]);
	b=0;
    }                  // End of if

    if(b)
    printf("\n\n\tEntered value is not found!");
 gotoxy(25,40);
 printf("Press any key to enter");
 getch();
}	//	End of DeletionArray


void SearchingArray(){
    int num[]={1, 20, 3, 2, 1};

    int search;
    int b=1;
    clrscr();
    gotoxy(25,2);
    printf("SEARCHING ARRAY");

    printf("\n\n");
    for(int i=0; i<=4;i++){
	printf("Num[%d] = %d\n", i, num[i]);
    }// end loop


    printf("\nEnter Element For Search Loction:");
    scanf("%d", &search);

    for( i=0; i<=4;i++){
	if(num[i]==search){
	    printf("\n\nYour Element %d Found on Array Location %d", search, i);
	    b=0;
	}
    }// end outer

    if(b)
    printf("\n\nYour Element %d Not Found In Array", search);
 gotoxy(25,40);
 printf("Press any key to enter");
 getch();
}	//	End of SearchingArray


void SortingAscArray(){
 clrscr();
 gotoxy(25,2);
 printf("ASCENDING SORT");

 int A[]={500,700,200,100,300};
 int b;

	printf("\nBefore Sorting\n\n");

	for(int j=0; j<5; j++)
	  printf("A[%d] = %d\n",j,A[j]);

	printf("\n\n");

	for(int i=1; i<=5; i++)
	  for(j=0; j<5-1; j++) {
	     if(A[j+1]<A[j]) {
		b=A[j];
		A[j]=A[j+1];
		A[j+1]=b;
	     } 		// End of if
	  }      // End of Inner for

	printf("\nAfter Sorting\n\n");

	for(j=0; j<5; j++)
	  printf("A[%d] = %d\n",j,A[j]);
 gotoxy(25,40);
 printf("Press any key to enter");
 getch();
}	//	End of SortingArray



void SortingDscArray(){
		//	DESCENDING SORT
 clrscr();
 int C[5]={2,8,4,1,3};
 int b;

 gotoxy(25,2);
 printf("DESCENDING SORT");

	printf("\nBefore Sorting\n\n");

	for(int j=0; j<5; j++)
	  printf("A[%d] = %d\n",j,C[j]);

	printf("\n\n");

	for(int i=1; i<=5; i++)
	  for(j=0; j<5-1; j++) {
	     if(C[j]<C[j+1]) {
		b=C[j];
		C[j]=C[j+1];
		C[j+1]=b;
	     }
	  }

	printf("\nAfter Sorting\n\n");

	for(j=0; j<5; j++)
	  printf("A[%d] = %d\n",j,C[j]);
 gotoxy(25,40);
 printf("Press any key to enter");
 getch();
}	//	End of SortingDscArray
