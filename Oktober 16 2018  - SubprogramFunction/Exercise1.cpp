#include <iostream>

using namespace std;

int addition(int x, int y){
	int sum ;
	sum = x + y;
	return sum;
}
int difference(int x, int y){
	int inter ;
	inter = x - y;

	return inter;
}

int main(){
	int x , y;
	cout << "Enter  x : ";
	cin>> x ;
	cout << "Enter  y : ";
	cin>> y ;
	
	cout << "The result " << addition(x,y)<< endl;
	cout << "The result " << difference(x,y)<< endl;
	return 0;}

