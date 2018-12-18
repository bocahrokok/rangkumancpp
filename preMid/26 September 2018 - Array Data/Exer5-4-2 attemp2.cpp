//import library
#include <iostream>
#include <string.h>
using namespace std;

//start programm 

int main(){
	int binaryNum[100], n;
	int i= 0;
	
	//insert n binary 
	cout<< "Masukan Decimal : ";
	cin >> n;
	
	while (n>0){
		binaryNum[i] = n % 2;
		n = n/2;
		i++;
	}
	
	//print the binary
	for (int j = i-1; j>= 0; j--){
		cout<< binaryNum[j];
	}
	}
// Exercise 5.4.2`

