#include "stdio.h"
#include "conio.h"

    void main(){

	clrscr();
	int data[13]={11,22,30,33,40,44,55,60,66,77,80,88,99};
	int item=40, index;

	int beg=0, end = 13-1;

	int mid = (beg + end) / 2;

	while(beg <= end && data[mid] != item){
	    if(item < data[mid])
		end = mid - 1;
	    else
		beg = mid + 1;

	    mid=(beg + end) / 2;
	}
	if(data[mid]==item)
	    index=mid;
	else index=-1;

	printf("\nloc: %d",index);
	getch();
    }
