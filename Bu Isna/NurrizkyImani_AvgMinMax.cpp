#include <iostream>
using namespace std;

int main()
{
	//Nurrizky Imani 18/429294/PA/18685
    int n, i, Max, Min;
    float num[100], sum=0.0, average;
	//AVERAGE OF ARRAY
    cout << "Enter the numbers of data: ";
    cin >> n;
    //ENTERING the N 
    while (n > 100 || n <= 0)
    {
        cout << "hrs antara 1-100." << endl;
        cout << "Enter the NUM again: ";
        cin >> n;
    }
    //Entering the Number 
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ".Enter NUM: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    
	// MAX ARRAY
    for(i=0; i < n ; ++i){
    	//Change < to > 
    	if(num[0] < num[i]){
    		num[0] = num[i];
    		Max = num[0];
    		
		}
	}
	
	//MIN ARRAY 
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
