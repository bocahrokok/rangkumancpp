#include <iostream>

using namespace std;


int factorial (int x){
	int total = 1;
	
	while (x>0){
		total = total*x;
		x--;
	}
return total;
}

int main(){
	int x; int total;
	
	cout << "input the factorial number: "<< endl;
	cin>> x;
	
	cout<< "the factorial number is : " << factorial(x) << endl;
}



