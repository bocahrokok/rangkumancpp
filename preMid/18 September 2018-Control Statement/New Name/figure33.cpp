//import library
#include <iostream>
using namespace std;

int main(){
	//varibale initialization
	int input;
	//variable input
	cout << "Masukan hari ke- = ";
	cin >> input;
	
	// process starting
	if (input == 1){
		cout << "Anda memasuki hari minggu";
	}
	else if (input == 2){
		cout << "Anda memasuki hari senin";
	}
	else if (input == 3){
		cout << "Anda memasuki hari selasa";
	}
	else if (input == 4){
		cout << "Anda memasuki hari rabu";
	}
	else if (input == 5){
		cout << "Anda memasuki hari kamis";
	}
	else if (input == 6){
		cout << "Anda memasuki hari jumat";
	}
	else if (input == 7){
		cout << "Anda memasuki hari sabtu";
	}
	else {
		cout << "Bukan input hari/salah masukan";
	}
	return 0;
}


