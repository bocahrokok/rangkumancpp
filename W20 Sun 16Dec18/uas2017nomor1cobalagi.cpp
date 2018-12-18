#include <iostream>
#include <string>

using namespace std;

int main(int arc, char const *argv[]){
	int n;
	cout << "Masukan jumlah kata : ";
	cin >> n;
	string listKataAwal[n];
	string listKataUnik[n];
	int frekuensi[n];
	for (int i=0; i<n; i++){
		cout << "Masukan kata : ";
		cin >> listKataAwal[i];
	}
	int j = 0;; 
	for(int i=0; i<n; i++)
	{
		for(j; j<n; j++)
		{	
			if(listKataAwal[i] == listKataUnik[j])
			{
				frekuensi[i]++;
				
			}
			else 
			{
				listKataUnik[i] = listKataAwal[i];
				frekuensi[i] = 1;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout << listKataUnik[i] << " frekuensi : " <<  frekuensi[i] << " ";
	}
	
	}
