void main()
 {
   int a,b;
   char op;
clrscr();
	  printf("Enter 1st value:");
	       scanf("%d",&a);
	  printf("Enter 2nd value:");
	       scanf("%d",&b);
	  printf("Now choose any operator(+,-,*,/...)");
	       scanf("%c",&op);
   if (op == '+')
	{
	 printf("Addition is");
	 printf("%d",a+b);
	}
else
   if (op == '-')
       {
	printf("Subtraction is is");
	printf("%d",a-b);
       }
else
   if (op == '*')
      {
       printf("Multiplication is");
       printf("%d",a*b);
      }
else
   if (op == '/')
      {
       printf("Division is");
       printf("%d",a/b);
      }
//else
//printf("invailid operator");
getch();
 }

