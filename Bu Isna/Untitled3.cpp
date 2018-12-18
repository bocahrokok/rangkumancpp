
#include <iostream> 
using namespace std; 
  
int main() { 
    int a;
    cout << "Input limit " << endl;
    cin >> a;

    int b ;
    int c ;
    
    for (b = 1 ; b<= a ; b++) 
	{	
	    for (c = 0 ; c<= b ; c++ )
	    {
	    	cout << " " ;
		}
		for (c = 0 ; c<= (a-b)-1 ; c++ )
	    {
			cout << "* ";
	    }
	cout << endl;
    }

    return 0;
}


