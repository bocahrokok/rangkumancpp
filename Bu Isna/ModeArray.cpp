#include <iostream>
using namespace std;

int a,b,tmp=0,index,arr[100];
int main()
{
 cout << "Masukin jumlah N : ";
 cin >> a;
 for (int i=0;i<a;i++)
 {
 	cout<<"Nilai anda: "; 
	cin >> b;
	arr[b]++;
	if (tmp<=arr[b])
  {
   tmp=arr[b];
   index=b;
  }
 }
 cout << "so the mode is: " << index <<endl;
}
