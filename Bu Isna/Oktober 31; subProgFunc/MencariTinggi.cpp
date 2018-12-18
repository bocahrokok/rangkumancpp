#include <iostream>

using namespace std;

void input(int arr[],int n){
	for(int i= 0; i< n;i++){
		cout  << "Masukan array: ";
		cin >> arr[i];
	}
}


int maxima(int arr[], int n){
	int maxi= 0;
	for(int i = 0; i < n; i++){
		if(maxi < arr[i]){
		maxi = arr[i];
		}
			
	return maxi;
}
}
int modusfunc(int arr[], int n){
	int modus=0;
	int maxi = maxima(arr, n);
	for (int i =0 ; i < n; i++){
		if (arr[i] == maxi)modus++;
}
	return modus;
}

int main() {
	int n;
	cout<< "masukan n: ";
	cin >> n;
	int arr[n];
	input(arr, n);
	cout << modusfunc(arr, n);
	return 0; 
}

