#include <iostream>
using namespace std;
int main ()
{
    for (int n=10; n>0; n--)
    {
    	//at n equal to 5, it will jump; not take the cout<< n<< ",";
        if (n==5) continue;
        cout << n << ", ";
    }
    cout << "Done!";
    return 0;
}
