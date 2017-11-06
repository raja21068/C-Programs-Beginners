#include<stdio.h>
   #include<conio.h>
   void read(int *,int);
   void dis(int *,int);
  
   void main()
   {
    int a[5],b[5],c[5],i;

    printf("Enter the elements of first list \n");
    read(a,5);
    printf("The elements of first list are \n");
    dis(a,5);
   }

   void read(int c[],int i)
   {
    int j;
    for(j=0;j<i;j++)
      scanf("%d",&c[j]);
    fflush(stdin);
   }

   void dis(int d[],int i)
   {
    int j;
    for(j=0;j<i;j++)
    printf("%d ",d[j]);
    printf("\n");
   }