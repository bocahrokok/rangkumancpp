//import library
#include <iostream>
using namespace std;

int main(){
	
	//variable initialization 
	int x = 10;
	int y = 33;
	
	//variable addition init 
	int z = 0;
	
	cout << "initialization"<< endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	//changing x into z;
	z =  x ;
	cout << "first changing from x ke z" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;	
	
	// changing var y to x
	x = y ;
	cout << "second changin var y to x" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	
	// changing var z to y
	y = z ;
	cout << "third changin var z to y" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	return 0;
}


