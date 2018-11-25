#include <iostream>

using namespace std;

int main()
{
	
	int data [] = {5,3,7,2,0,9,4,1,8,6};
	int datasize = sizeof(data)/sizeof(data[0]);
	int temp;
	
	for (int j=0; j < datasize -1 ; j++){
		for (int i = 0; i< datasize-1; i++){
		if (data[i] <  data[i+1]){ //descending 
		temp = data[i];
		data[i] = data[i+1];
		data[i+1] = temp;		
		}		
		}
	}
	
	for (int k = 0; k < datasize; k++){
		cout<< data[k]<< " ";
		
	}
}
