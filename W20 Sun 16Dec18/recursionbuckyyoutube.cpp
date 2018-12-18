#include <iostream>

using namespace std;


int  factorialFinder(int x){
	//basecase; ending;
	if(x==1){
		return 1; //basecase
	}else{
		return x*factorialFinder(x-1);
	}
}
//base case; ending;

int main(){
	
	cout << factorialFinder(5) << endl;
}
