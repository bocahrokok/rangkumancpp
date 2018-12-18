#include <iostream>
using namespace std;

int main ()
{
    int n;
    for (n=10; n>0; n--) 
    {
    	//BREAK IN LOOP
       cout << n << ", ";
       if (n==3)
       {
          cout << "countdown aborted!";
          break;
       }
    }
    cout << "nilai n = " << n;
    return 0;
}
