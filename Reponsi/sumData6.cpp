#include <iostream>

using namespace std; 

int sum, n, b, arr[100];

int main(){
	
	cout << "Enter the amount of input : ";
	cin>> n;
	
	for (int i=0; i< n;i++){
		cout << "Enter number " << i+1 << ": ";
		cin >> b;
		sum +=b;
		arr[b]++;
	}
	cout <<sum;
}
