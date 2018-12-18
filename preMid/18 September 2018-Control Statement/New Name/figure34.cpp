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
		case 1 : cout << "Minggu";
		break;
		case 2 : cout << "senin";
		break;
		case 3 : cout << "selasa";
		break;
		case 4 : cout << "rabu";
		break;
		case 5 : cout << "kamis";
		break;
		case 6 : cout << "jumat";
		break;
		case 7 : cout << "sabtu";
		break;
		default : cout << "bukan input hari/salah masukan";
		break;
	}
	return 0;
}
