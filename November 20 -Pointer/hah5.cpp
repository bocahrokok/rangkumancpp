#include <iostream>
#include <stdio.h>
using namespace std;

main () {
	int var_x=273; //varibale 
	int *ptr1; //
	int **ptr2;
	ptr1= &var_x; // ptr is the address &var_x 
	ptr2= &ptr1; // the address pf &var_x
	printf("Nilai var_x=*ptr1=%d\n",*ptr1); //opposite of ptr1, the variable
	printf("Nilai var_x=**ptr2=%d\n\n",**ptr2); // opposite of ptr2, the var
	printf("ptr1 = &var_x=%\n",*ptr1); //
	printf("ptr2 = &ptr1=%p\n",*ptr1);
	printf("	&ptr2=%p\n",&ptr2);
}
