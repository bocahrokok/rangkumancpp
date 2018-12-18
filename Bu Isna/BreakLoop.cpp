#include <iostream>
using namespace std;

int main ()
{
    int n;
    for (n=10; n>0; n--){
    	//print nilai n, then decrement with 1;
    	cout<< n << "," ;
    	//stoping until n; because it is break; 
		if (n==3){
          cout << endl<< "countdown aborted!" << endl;
          break;
		  }
    }
    //print nilai n at the last is how much : 3;
    cout << "nilai n = " << n;
    return 0;
}


