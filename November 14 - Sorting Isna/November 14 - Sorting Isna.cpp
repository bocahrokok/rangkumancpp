#include <iostream>

using namespace std;

int main(){
	int data[] = {14,2,10,5,1,3,17,7};
	int dataSize = sizeof(data)/sizeof(data[0]) , temp, min;
	for(int i=0; i < dataSize-1; i++){
		min = i; // min is also zero
		//j must one step more than i; yeah, start from 1 not 0.
		for(int j=i+1; j < dataSize; j++){
			if(data[j] < data[min]){
				min = j;
				//once min is i, i is before j, it turns out j is lower 
				//than i, then we announce min is j right now,
				
			}
		}
		//hey i, you will put in here; temp
		temp = data[i];
		//hey data inside min, you will put in the i, address i; 
		data[i] = data[min] ;
		//hey data of i, comeback to min, 
		data[min] = temp;
		//it repeat as min become i again, not the temp. 
	}
	//print for all, notice we use data[i]
	for (int i = 0; i < dataSize; i++){
		cout << data[i]<< " ";
	}
	
	return 0;
		
	}
	
