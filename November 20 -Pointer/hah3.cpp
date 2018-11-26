#include <iostream>
#include<stdio.h>
using namespace std;

int main () {
	int count=16, sum=17,*x,*y;
	x=&sum; //address of count 
	*x=27; //terbalik 
	y = x; //address 
	x=&count; //adress of count 
	*x=count; // 16 

	sum=*x/2*3;
	
	printf("count = %d, sum = %d, *x=%d, *y=%d\n",count,sum, *x, *y);
	return 0;
}
