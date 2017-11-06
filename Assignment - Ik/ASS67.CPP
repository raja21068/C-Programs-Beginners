#include <conio.h>
#include <stdio.h>


struct Volume{
 float x, y, z;
};


void main () {
 clrscr();

 Volume distance;

 distance.x=2.5;
 distance.y=8.9;
 distance.z=5.5;

 float volume = (distance.x*distance.y*distance.z);
 printf("The volume of a room is %.1f",volume);

 getch();
 }