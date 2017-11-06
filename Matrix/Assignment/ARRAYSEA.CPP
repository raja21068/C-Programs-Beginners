 #include<conio.h>
#include<stdio.h>



void main (){


    int num[]={1, 20, 3, 2, 1};

    int search;
    int b=1;
    clrscr();

    for(int i=0; i<=4;i++){
        printf("Num[%d] = %d\n", i, num[i]);
    }// end loop


    printf("\nEnter Element For Search Loction:");
    scanf("%d", &search);

    for( i=0; i<=4;i++){
        if(num[i]==search){
            printf("Your Element : %d :Found Array Location: %d", search, i);
            b=0;
        }
    }// end outer

    if(b)
    printf("Your Element : %d Not :Found In Array", search);

    getch();
}
