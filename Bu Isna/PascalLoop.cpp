#include <iostream>
#include <conio.h>
using namespace std;

long fact(int);
int main(){
	int i, n, c;
	cout << "Upto how many line (Enter number of rows) : ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(c=0; c<=(n-i-2); c++)
		{
			cout<<" ";
		}
		for(c=0; c<=i; c++)
		{
			cout<<fact(i)/(fact(c)*fact(i-c));
			cout<<" ";
		}
		cout<<"\n";
	 }
	 getch();
}
