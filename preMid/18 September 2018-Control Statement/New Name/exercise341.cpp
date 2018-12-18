//import library
#include <iostream>
using namespace std;

int main(){
	//varibale initialization
	int input;
	//variable input
	cout << "Masukan Nilai anda;";
	cin >> input;
	
	// process starting
	if (input>84 && input<=100) {
		cout << "dapet a";
	}
	else if (input>69 && input <=84) { 
		cout << "dapet b";
	}
	else if (input>39 && input <=69){
		cout << "dapet c";
	}
	else if (input>19 && input <40) {
		cout << "dapet d";
	}
	else if (input<=19){
		cout << "Dapet E";
	}
	return 0;
}
