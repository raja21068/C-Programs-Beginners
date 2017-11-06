#include <conio.h>
#include <iostream.h>
#include <strucapp.h>


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

      case 1:       // INSERTION
        ob1.Insertion();
        break;

      case 2:           // DELETION
        ob1.Deletion();
        break;

      case 3:
        do {            // SORTING
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

         } // End of Inner Switch op2
        } while(op2!=3);
      break;

     case 4:            // SEARCHING
       ob1.Searching();
       break;

     case 5:                    // EXIT
       break;

    } // End of Main Switch
   } while(op!=5);

 }  // End of Main Method