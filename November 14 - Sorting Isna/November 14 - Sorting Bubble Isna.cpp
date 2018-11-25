#include <iostream>
using namespace std;

int main(){
	int data[] = {14,2,10,5,1,3,17,7, 22, 23, 44, 55,1,3,67,100,66,54,51};
	int dataSize = sizeof(data)/sizeof(data[0]) , temp, min;
	for (int i = 0; i < dataSize; i++){
		for(int j=0; j< dataSize-1;j++){
			if(data[j]>data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
				
			}
		}
	}
	for (int i = 0; i< dataSize;i++){
		cout << data[i]<< " ";
	}
}
