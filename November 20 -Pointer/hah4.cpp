#include <iostream>
#include <stdio.h>
using namespace std;

int r,q = 8;
int spesial(int*,int*);
main() {
	int *ptr1 =&q; //address of q
	int *ptr2 =&q; // address of q
	r = spesial(ptr2,ptr1); //ptr is variable q = 8
	printf("q=%d,r=%d,*ptr1=%d,*ptr2=%d\n",q,r,*ptr1,*ptr2);
	ptr1 = &r; //adddress of r
	//cout << r << endl; // 15
	//cout << ptr1 << endl; //ptr addreess 
	spesial(ptr1,ptr2); //return *p1*3 
	printf("q=%d,r=%d,*ptr1=%d,*ptr2=%d\n",q,r,*ptr1,*ptr2);
	cout << endl;
}
int spesial(int *p1, int *p2)
{
	int x = 5;
	r=12;
	*p2=*p1*2; //p1 is variable 
	p1=&x; //p1 address the *p1 is variable
	return *p1*3; //*p1 is variable 
}
