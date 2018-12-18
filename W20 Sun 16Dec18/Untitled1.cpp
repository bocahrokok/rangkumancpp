#include <iostream>

using namespace std;


int main() {
	
	int *a;
	int b;
	a = &b; //alamat 
	b=10;
	
		
	cout << "Nilai b = " << b << endl;
	cout << "Nilai *a = " << *a << endl; // nilai alamatnya 
	cout << "Nilai a = " << a << endl;
	cout << "nilai &b = " << &b << endl;
	
	*a = 100;
	
	cout << "Nilai b = " << b << endl;
	cout << "Nilai *a = " << *a << endl; // nilai alamatnya 
	cout << "Nilai a = " << a << endl;
	cout << "nilai &b = " << &b << endl;
	
	
	
	
}
