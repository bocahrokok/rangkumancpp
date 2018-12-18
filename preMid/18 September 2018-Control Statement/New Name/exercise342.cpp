//import library
#include <iostream>
using namespace std;

int main(){
	//varibale initialization
	int a,b,c;
	cout << "Enter the 1st number:";
	cin >> a;
	cout << "Enter the 2nd number:";
	cin >> b;
	cout << "Enter the 3nd number:";
	cin >> c;
	
	if (a > b && a>c){
		
			cout << "the greatest number is : " << a << endl;
		
		
	}
	else if ( b > a && b > c)
	{cout << "the greatest number is : " << b<< endl;}
 else cout<<c;

	return 0;
	}
