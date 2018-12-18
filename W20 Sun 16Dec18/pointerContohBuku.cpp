#include <iostream>
using namespace std;

int main(){
	int vint = 55;
	int *pint;
	
	pint = &vint;
	
	cout << "&vint= " << &vint << endl;
	cout << "*pint= " << *pint << endl;
	
}
