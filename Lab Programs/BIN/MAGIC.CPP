#include"conio.h"
#include"stdio.h"
#include "dos.h"

void main(void){
 clrscr();
 int a=0;
 //first
 for(int b=1; b<=20; b++){
    for(int b1=1; b1<=20; b1++)
       printf("*");
    printf("\n");
 }  //Simple print of square (*)
 //getch();
 delay(2000);
 clrscr();
 //second
 for(int i=10; i>=1; i--){
    for(int i1 = i; i1 >= 1; i1--)
       printf("*");
    for(int i2 = 1; i2 <= a; i2++)
       printf(" ");
    for(int i3 = i; i3 >= 1; i3--)
       printf("*");

    for(int i4 = i; i4 >= 1; i4--)
       printf(" ");
    for(int i5 = 1; i5 <= a; i5++)
       printf("*");

    a+=2;
    printf("\n");
 }
 a-=2;
 for(int j=1; j<=10; j++){
    for(int j1 = 1; j1 <= j; j1++)
       printf("*");
    for(int j2 = a; j2 >= 1; j2--)
       printf(" ");
    for(int j3 = 1; j3 <= j; j3++)
       printf("*");

    for(int j4 = 1; j4 <= j; j4++)
       printf(" ");
    for(int j5 = a; j5 >= 1; j5--)
       printf("*");

    a-=2;
    printf("\n");
 }
 delay(2000);
 clrscr();
 //third
 a=0;
 for(int k=10; k>=1; k--){
    for(int k1 = k; k1 >= 1; k1--)
       printf("*");
    for(int k2 = 1; k2 <= a; k2++)
       printf(" ");
    for(int k3 = k; k3 >= 1; k3--)
       printf("*");
    k+=20;
    for(int k4 = k; k4 >= 1; k4--)
       printf(" ");
    for(int k5 = 1; k5 <= a; k5++)
       printf("*");
    a+=2;
    printf("\n");
    k-=20;
 }
 a-=2;
 for(int l=1; l<=10; l++){
    for(int l1 = 1; l1 <= l; l1++)
       printf("*");
    for(int l2 = a; l2 >= 1; l2--)
       printf(" ");
    for(int l3 = 1; l3 <= l; l3++)
       printf("*");
    l+=20;
    for(int l4 = 1; l4 <= l; l4++)
       printf(" ");
    for(int l5 = a; l5 >= 1; l5--)
       printf("*");
    a-=2;
    printf("\n");
    l-=20;
 }
 delay(2000);
 clrscr();
 //4th
 a=0;
 for(int m=10; m>=1; m--){
    for(int m1 = m; m1 >= 1; m1--)
       printf("*");
    for(int m2 = 1; m2 <= a; m2++)
       printf(" ");
    for(int m3 = m; m3 >= 1; m3--)
       printf("*");
    m+=40;
    for(int m4 = m; m4 >= 1; m4--)
       printf(" ");
    for(int m5 = 1; m5 <= a; m5++)
       printf("*");
    a+=2;
    printf("\n");
    m-=40;
 }
 a-=2;
 for(int n=1; n<=10; n++){
    for(int n1 = 1; n1 <= n; n1++)
       printf("*");
    for(int n2 = a; n2 >= 1; n2--)
       printf(" ");
    for(int n3 = 1; n3 <= n; n3++)
       printf("*");
    n+=40;
    for(int n4 = 1; n4 <= n; n4++)
       printf(" ");
    for(int n5 = a; n5 >= 1; n5--)
       printf("*");
    a-=2;
    printf("\n");
    n-=40;
 }
 delay(2000);
 clrscr();
 //5th
 a=0;
 for(int o=10; o>=1; o--){
    for(int o1 = o; o1 >= 1; o1--)
       printf("*");
    for(int o2 = 1; o2 <= a; o2++)
       printf(" ");
    for(int o3 = o; o3 >= 1; o3--)
       printf("*");
    a+=2;
    printf("\n");
 }
 a-=2;
 for(int p=1; p<=10; p++){
    for(int p1 = 1; p1 <= p; p1++)
       printf("*");
    for(int p2 = a; p2 >= 1; p2--)
       printf(" ");
    for(int p3 = 1; p3 <= p; p3++)
       printf("*");
    a-=2;
    printf("\n");
 }
 printf("\n\n\n\n\n\n");
 for(int q=10; q>=1; q--){
    q+=61;
    for(int q1 = q; q1 >= 1; q1--)
       printf(" ");
    for(int q2 = 1; q2 <= a; q2++)
       printf("*");

    a+=2;
    printf("\n");
    q-=61;
 }
 a-=2;
 for(int r=1; r<=10; r++){
    r+=61;
    for(int r1 = 1; r1 <= r; r1++)
       printf(" ");
    for(int r2 = a; r2 >= 1; r2--)
       printf("*");
    a-=2;
    printf("\n");
    r-=61;
 }
 delay(2000);
 clrscr();
 //6th
 a=0;
 for(int s=10; s>=1; s--){
    for(int s1 = s; s1 >= 1; s1--)
       printf("*");
    for(int s2 = 1; s2 <= a; s2++)
       printf(" ");
    for(int s3 = s; s3 >= 1; s3--)
       printf("*");
    a+=2;
    printf("\n");
 }
 a-=2;
 for(int t=1; t<=10; t++){
    for(int t1 = 1; t1 <= t; t1++)
       printf("*");
    for(int t2 = a; t2 >= 1; t2--)
       printf(" ");
    for(int t3 = 1; t3 <= t; t3++)
       printf("*");
    a-=2;
    printf("\n");
 }
 printf("\n\n\n\n\n\n");
 for(int u=10; u>=1; u--){
    u+=41;
    for(int u1 = u; u1 >= 1; u1--)
       printf(" ");
    for(int u2 = 1; u2 <= a; u2++)
       printf("*");

    a+=2;
    printf("\n");
    u-=41;
 }
 a-=2;
 for(int v=1; v<=10; v++){
    v+=41;
    for(int v1 = 1; v1 <= v; v1++)
       printf(" ");
    for(int v2 = a; v2 >= 1; v2--)
       printf("*");
    a-=2;
    printf("\n");
    v-=41;
 }
 delay(2000);
 clrscr();
 //7th
 a=0;
 for(int w=10; w>=1; w--){
    for(int w1 = w; w1 >= 1; w1--)
       printf("*");
    for(int w2 = 1; w2 <= a; w2++)
       printf(" ");
    for(int w3 = w; w3 >= 1; w3--)
       printf("*");
    a+=2;
    printf("\n");
 }
 a-=2;
 for(int x=1; x<=10; x++){
    for(int x1 = 1; x1 <= x; x1++)
       printf("*");
    for(int x2 = a; x2 >= 1; x2--)
       printf(" ");
    for(int x3 = 1; x3 <= x; x3++)
       printf("*");
    a-=2;
    printf("\n");
 }
 printf("\n\n\n\n\n\n");
 for(int y=10; y>=1; y--){
    y+=21;
    for(int y1 = y; y1 >= 1; y1--)
       printf(" ");
    for(int y2 = 1; y2 <= a; y2++)
       printf("*");

    a+=2;
    printf("\n");
    y-=21;
 }
 a-=2;
 for(int z=1; z<=10; z++){
    z+=21;
    for(int z1 = 1; z1 <= z; z1++)
       printf(" ");
    for(int z2 = a; z2 >= 1; z2--)
       printf("*");
    a-=2;
    printf("\n");
    z-=21;
 }
 delay(2000);
 clrscr();
 //8th
 a=0;
 for(int c=10; c>=1; c--){
    for(int c1 = c; c1 >= 1; c1--)
       printf("*");
    for(int c2 = 1; c2 <= a; c2++)
       printf(" ");
    for(int c3 = c; c3 >= 1; c3--)
       printf("*");
    a+=2;
    printf("\n");
 }
 a-=2;
 for(int d=1; d<=10; d++){
    for(int d1 = 1; d1 <= d; d1++)
       printf("*");
    for(int d2 = a; d2 >= 1; d2--)
       printf(" ");
    for(int d3 = 1; d3 <= d; d3++)
       printf("*");
    a-=2;
    printf("\n");
 }
 printf("\n\n\n\n\n\n");
 for(int e=10; e>=1; e--){
    for(int e1 = e+1; e1 >= 1; e1--)
       printf(" ");
    for(int e2 = 1; e2 <= a; e2++)
       printf("*");

    a+=2;
    printf("\n");
 }
 a-=2;
 for(int f=1; f<=10; f++){
    for(int f1 = 1; f1 <= f+1; f1++)
       printf(" ");
    for(int f2 = a; f2 >= 1; f2--)
       printf("*");
    a-=2;
    printf("\n");
 }
 delay(2000);
 clrscr();
 //9th
 for(int g=1; g<=20; g++){
    for(int g1=1; g1<=20; g1++)
       printf("*");
    printf("\n");
 }  //Simple print of square (*)
	printf("\t\t\tProgrammed BY: Yougeshwar Khatri");
 delay(2000);
}//End Main