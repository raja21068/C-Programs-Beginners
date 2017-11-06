 #include <conio.h>
 #include <stdio.h>


 void main () {
 int op,op1,op2,op3,op4;

			  // Start of Main while
  clrscr();

		printf("\n\t\tE-BOOKS SOFTWARE\n");

	printf("\n\n\t1. BS-Mathematics");
	printf("\n\n\t2. BS-Computer Science");
	printf("\n\n\t3. BS-Information Technology");
	printf("\n\n\t4. Exit");

	printf("\n\n\tEnter your choice: ");
	scanf("%d",&op);

	while (op!=4) {

	switch (op) {

	case 1:
	    clrscr();
		printf("\n\n\tWELCOME TO MATHEMATICS E-BOOKS");

	printf("\n\n\t1. English I");
	printf("\n\n\t2. Pakistan Studies");
	printf("\n\n\t3. Mathematics I");
	printf("\n\n\t4. Physics");
	printf("\n\n\t5. Environmental Sciences");
	printf("\n\n\t6. Applied Mathematics");
	printf("\n\n\t7. Exit");

	printf("\n\n\tEnter your choice: ");
	scanf("%d",&op1);

	while (op1!=7) {

	switch (op1) { 		// Start of inner Switch

	case 1:
	clrscr();
		printf("\n\n\t\t\tWELCOME TO ENGLISH I\n\n");

	printf("\n\n\t\tEnglish the basic and most important subject of all\n\n");
	printf("\n\n\t\tStudents must take it as a compulsory subject");
	break;

	case 2:
	clrscr();
		printf("\n\n\t\t\tWELCOME TO PAKISTAN STUDIES\n\n");

	printf("\n\n\t\tPakistan studies is also a very vital subject.\n\n");
	printf("\n\n\t\tIts very beneficial for you in the future");
	break;

	case 3:
	clrscr();
		printf("\n\n\t\t\tWELCOME TO MATHEMATICS I\n\n");

	printf("\n\n\t\tMathematics is of course is the best of all\n\n");
	printf("\n\n\t\tHave a great luck with it.");
	break;

	case 4:
	clrscr();
		printf("\n\n\t\t\tWELCOME TO PHYSICS\n\n");

	printf("\n\n\t\tPhysics is a very interesting subject.\n\n");
	printf("\n\n\t\tDo take interest in it.");
	break;

	case 5:
	clrscr();
		printf("\n\n\t\t\tWELCOME TO ENVIRONMENTAL SCIENCES\n\n");

	printf("\n\n\t\tIt wiuld really be a new subject to you.\n\n");
	printf("\n\n\t\tWe hope you would like it.");
	break;

	case 6:
	clrscr();
		printf("\n\n\t\t\tWELCOME TO APPLIED MATHEMATICS\n\n");

	printf("\n\n\t\tIts your key subject.\n\n");
	break;

	default:
	printf("\n\n\tInvalid choice !");
	break;

	} 	// End of Inner Switch
	 getche();

	clrscr();
		printf("\n\n\tWELCOME TO MATHEMATICS E-BOOKS");

	printf("\n\n\t1. English I");
	printf("\n\n\t2. Pakistan Studies");
	printf("\n\n\t3. Mathematics I");
	printf("\n\n\t4. Physics");
	printf("\n\n\t5. Environmental Sciences");
	printf("\n\n\t6. Applied Mathematics");
	printf("\n\n\t7. Exit");
	printf("\n\n\tEnter your choice: ");
	scanf("%d",&op1);

	}  // End of While

	break;

	case 2:
	clrscr();
		printf("\n\n\tWELCOME TO COMPUTER SCIENCE E-BOOKS");


	 printf("\n\n\t1. Remedial English I");
	 printf("\n\n\t2. Pakistan Studies");
	 printf("\n\n\t3. Basic Electronics");
	 printf("\n\n\t4. Introduction to Computer");
	 printf("\n\n\t5. C Language");
	 printf("\n\n\t6. Calculus and Analytical Geometry");
	 printf("\n\n\t7. Back");


	printf("\n\n\n\tEnter the case no. for desired conversion: ");
	scanf("%d",&op2);


	while (op2!=7) {

	switch (op2) {

	 clrscr();
	 case 1:

	 clrscr();
		printf("\n\n\t\t\tWELCOME TO REMEDIAL ENGLISH I\n\n");

	printf("\n\n\t\tEnglish the basic and most important subject of all\n\n");
	printf("\n\n\t\tStudents must take it as a compulsory subject");
	break;

	 case 2:

	 clrscr();
		 printf("\n\n\t\t\tWELCOME TO PAKISTAN STUDIES\n\n");

	printf("\n\n\t\tPakistan studies is also a very vital subject.\n\n");
	printf("\n\n\t\tIts very beneficial for you in the future");
	break;

	 case 3:

	 clrscr();
		printf("\n\n\t\t\tWELCOME TO BASIC ELECTRONICS\n\n");

	printf("\n\n\t\tPhysics is a very interesting subject.\n\n");
	printf("\n\n\t\tDo take interest in it.");
	break;

	 case 4:

	  clrscr();
		printf("\n\n\t\t\tWELCOME TO INTRODUCTION TO COMPUTERS\n\n");

	printf("\n\n\tThis Subject gives you the real basic information regarding Computers.\n\n");
	printf("\n\n\t\tIt would really be helpful for you.");
	break;

	 case 5:

	 clrscr();
		printf("\n\n\t\t\tWELCOME TO C LANGUAGE\n\n");

	printf("\n\n\t\tThis Subject gives you the basic concepts of the programming.\n\n");
	printf("\n\n\t\tIt would really be helpful for you.");
	break;

	 case 6:

	 clrscr();
	 printf("\n\n\t\tWELCOME TO CALCULUS AND ANALYTICAL GEOMETRY\n\n");

	printf("\n\n\t\tMathematics is of course is the best of all\n\n");
	printf("\n\n\t\tHave a great luck with it.");
	break;


	default:
	printf("\n\n\tInvalid choice !");
	 break;

	} 	// End of Switch
	getche();

	clrscr();
		printf("\n\n\tWELCOME TO COMPUTER SCIENCE E-BOOKS");


	 printf("\n\n\t1. Remedial English I");
	 printf("\n\n\t2. Pakistan Studies");
	 printf("\n\n\t3. Basic Electronics");
	 printf("\n\n\t4. Introduction to Computer");
	 printf("\n\n\t5. C Language");
	 printf("\n\n\t6. Calculus and Analytical Geometry");
	 printf("\n\n\t7. Back");

	printf("\n\n\n\tEnter the case no. for desired conversion: ");
	scanf("%d",&op2);


	} 	// End of While
	break;

	case 3:

	clrscr();
		printf("\n\n\tWELCOME TO INFORMATION TECHNOLOGY E-BOOKS");


	 printf("\n\n\t1. English Composition & Comprehension");
	 printf("\n\n\t2. Pakistan Studies");
	 printf("\n\n\t3. Basic Electronics");
	 printf("\n\n\t4. Introduction to Information Technology");
	 printf("\n\n\t5. Programming Fundamentals");
	 printf("\n\n\t6. Calculus and Analytical Geometry");
	 printf("\n\n\t7. Back");


	printf("\n\n\n\tEnter the case no. for desired conversion: ");
	scanf("%d",&op3);

	while (op3!=7) {

	switch(op3) {

	 clrscr();
	 case 1:

	 clrscr();
		printf("\n\n\t\t\tWELCOME TO ENGLISH COMPOSITION\n\n");

	printf("\n\n\t\tEnglish the basic and most important subject of all\n\n");
	printf("\n\n\t\tStudents must take it as a compulsory subject");
	break;

	 case 2:

	 clrscr();
		 printf("\n\n\t\t\tWELCOME TO PAKISTAN STUDIES\n\n");

	printf("\n\n\t\tPakistan studies is also a very vital subject.\n\n");
	printf("\n\n\t\tIts very beneficial for you in the future");
	break;

	 case 3:

	 clrscr();
		printf("\n\n\t\t\tWELCOME TO BASIC ELECTRONICS\n\n");

	printf("\n\n\t\tPhysics is a very interesting subject.\n\n");
	printf("\n\n\t\tDo take interest in it.");
	break;

	 case 4:

	  clrscr();
		printf("\n\n\t\t\tWELCOME TO INTRODUCTION TO INFORMATION TECHNOLOGY\n\n");

	printf("\n\n\tThis Subject gives you the real basic information regarding Information Technology.\n\n");
	printf("\n\n\t\tIt would really be helpful for you.");
	break;

	 case 5:

	 clrscr();
		printf("\n\n\t\t\tWELCOME TO  PROGRAMMING FUNDAMENTALS\n\n");

	printf("\n\n\t\tThis Subject gives you the basic concepts of the programming.\n\n");
	printf("\n\n\t\tIt would really be helpful for you.");
	break;

	 case 6:

	 clrscr();
	 printf("\n\n\t\t\tWELCOME TO CALCULUS AND ANALYTICAL GEOMETRY\n\n");

	printf("\n\n\t\tMathematics is of course is the best of all\n\n");
	printf("\n\n\t\tHave a great luck with it.");
	break;


	default:
	printf("\n\n\tInvalid choice !");
	 break;

	} 	// End of Switch
	getche();

		clrscr();
		printf("\n\n\tWELCOME TO INFORMATION TECHNOLOGY E-BOOKS");


	 printf("\n\n\t1. English Composition & Comprehension");
	 printf("\n\n\t2. Pakistan Studies");
	 printf("\n\n\t3. Basic Electronics");
	 printf("\n\n\t4. Introduction to Information Technology");
	 printf("\n\n\t5. Programming Fundamentals");
	 printf("\n\n\t6. Calculus and Analytical Geometry");
	 printf("\n\n\t7. Back");


	printf("\n\n\n\tEnter the case no. for desired conversion: ");
	scanf("%d",&op3);


	} 	// End of While
	break;

	default:
	printf("\n\n\tINVALID CHOICE !");
	break;

	} 	// End of While
  clrscr();

		printf("\n\t\tE-BOOKS SOFTWARE\n");

	printf("\n\n\t1. BS-Mathematics");
	printf("\n\n\t2. BS-Computer Science");
	printf("\n\n\t3. BS-Information Technology");
	printf("\n\n\t4. Exit");

	printf("\n\n\tEnter your choice: ");
	scanf("%d",&op);

}
	}	// End of Main


