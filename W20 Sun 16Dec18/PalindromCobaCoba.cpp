#include <iostream>

using namespace std;

	int n;
	bool palindrome = false;
	
int main(){
	
	
	
	cout << "Masukan jumlah huruf : " ;
	cin >> n;
	char kata[n];
	cout << "Masukan kata: ";
	cin>> kata;  
	

	
	for(int i=0; i < n/2; i++ )
	{
		for(int j=n-1; j>n/2; j--)
		{
			if(kata[i] == kata[j])
			{
				cout << "Palindrome";
			}
			else 
			{
			 	cout << "Not Palindrome";
			 	break;
			}
			break;
		}
	break;
	}
}
