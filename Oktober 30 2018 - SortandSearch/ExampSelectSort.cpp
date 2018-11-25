#include <iostream>

using namespace std;

int main()
{
	
	int data [] = {5,3,7,2,0,9,4,1,8,6};
	int datasize = sizeof(data)/sizeof(data[0]);
	int temp,min;
	
	cout << datasize<< endl;
	for (int j=0; j< datasize; j++)
	{
		min = j;
		
		for(int i = j+1; i < datasize; i++)
		{
			if (data [i] < data [min])
			{
				min = i;
			}
	
		}
		temp = data[j];
		data[j] = data [min];
		data[min] = temp;
	}
	
	
	for (int k = 0; k < datasize; k++){
		cout<< data[k]<< " ";
		
	}
}
