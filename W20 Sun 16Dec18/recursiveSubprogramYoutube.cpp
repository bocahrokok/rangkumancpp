#include <iostream>

using namespace std;

int sum(int num){
	
	if (num!=0) // if num is NOT zero
		return (num + sum(num-1));
	else 
		return num;
				
}

int main() {
	int n;
	cout<< "Enter number till which you want the sum of natural: ";
	cin>> n;
	int total = sum(n);
	cout << "Sum of natural numbers from 1 to  " << n << " are: " << total<< endl;
	return 0;
	 
}
