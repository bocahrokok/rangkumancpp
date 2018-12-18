#include <iostream>
using namespace std;

int main()
{
    int n, i, Max, Min;
    float num[100], sum=0.0, average;
	//AVERAGE OF ARRAY
    cout << "Enter the numbers of data: ";
    cin >> n;
    while (n > 100 || n <= 0)
    {
        cout << "hrs antara 1-100." << endl;
        cout << "Enter the NUM again: ";
        cin >> n;
    }
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ".Enter NUM: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    
    for(i=0; i < n ; ++i){
    	//Change < to > 
    	if(num[0] < num[i]){
    		num[0] = num[i];
    		Max = num[0];
    		
		}
	}
	for(i=0; i < n ; ++i){
    	//Change < to > 
    	if(num[0] > num[i]){
    		num[0] = num[i];
    		Min = num[0];
		}
	}
    //Print ALL
    cout << "Max = " << Max << endl ;
	cout << "Average = " << average << endl;
	cout << "Min  = " << Min ;
    return 0;
}
