//import library
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char a = 'a';
	char n ;
	
	cout<< "Masukan input abjad : ";
	cin >> n;
	
	do{
		cout << a; 
		a++;
		}
	while (a <= n);
	getche();

return 0;
}
// Do while !!!

