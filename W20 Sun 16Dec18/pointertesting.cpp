#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float A[6] = {1.0, 2.0, 1.0, 0.5, 3.0, 2.0};
	float *theMin = &(A[0]);
	float *walker = &(A[1]);
	
	cout << *theMin << endl;
	cout << *walker << endl;

	cout << theMin << endl;
	cout << walker << endl;
	
	while (walker < &(A[6]))
	{
		if (*walker < *theMin)
		{
			theMin = walker;
		}
		walker = walker + 1;
	}
	
	cout << *theMin << endl;
	cout << *walker + 2 * 3 << endl;
}
