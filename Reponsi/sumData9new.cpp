#include <iostream>
using namespace std; 

int main(){
	
int sum, n, b, arr[100], min=0;
	
cout << "Enter the amount of input : ";	
cin>> n;

for (int i=0; i< n;i++)
{
	cout << "Enter number " << i+1 << ": ";
	cin >> b;
	sum +=b;
	arr[b]++;
}

cout <<sum;
for (int i=0; i< n;i++)
{
	if (arr[i]<min)
	{
	min = arr[i];
	}
}

cout << endl << min;

}
