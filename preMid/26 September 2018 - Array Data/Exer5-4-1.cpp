//import library
#include <iostream>
#include <string.h>
using namespace std;

//start programm 

int main(){
	int sum, index, b, arr[100];
	
	cout << "Masukan index angka : ";
	cin >> index;
	
	for(int i = 0; i <index; i++ ){
	cout<<"masukan angka ke-" << i << ": "; 
	cin >> b ;
	sum += b;
	arr[b]++;
	}	
	cout<< sum ;
	}
// Exercise 5.4.1`

