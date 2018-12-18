#include <iostream>

using namespace std;

int r, h, result ;
int volume(int rr, int hh){
	int volu = 3.14*rr*rr*hh;
	return volu;
	
}
int main(){
	cout << "Insert r: ";
	cin >> r;
	cout << "Insert h: ";
	cin>> h; 
	
	result = volume(r, h);
	cout << "The result is : "<< result << endl;
	
	
	
}
