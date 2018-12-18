//import library
#include <iostream>
using namespace std;

int main(){
	//variable initialization
	int input;
	//input variable
	cout << "Masukan hari ke- = ";
	cin >> input;
	
	//process statement and output
	switch(input){
		case 1 : cout << "Minggu ";
		case 2 : cout << "senin ";
		case 3 : cout << "selasa ";
		case 4 : cout << "rabu ";
		case 5 : cout << "kamis ";
		case 6 : cout << "jumat ";
		case 7 : cout << "sabtu ";
		default : cout << " bukan input hari/salah masukan";
	}
	return 0;}
