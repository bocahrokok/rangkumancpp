#include <iostream>
using namespace std;

int main ()
{
    int n=10;
    loop:
    cout << n << ", ";
    n--;
    if (n>4) goto loop;
    cout << "FIRE!";
    return 0;

}
