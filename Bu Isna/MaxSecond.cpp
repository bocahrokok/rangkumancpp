#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float arr[100];

    cout << "Antara (1 to 100): ";
    cin >> n;
    cout << endl;

    // Store number the user
    for(i = 0; i < n; ++i)
    {
       cout << "ANGKA"<< i + 1 << " : ";
       cin >> arr[i];
    }

    // Loop largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
       // Change < to > : smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "MAX " << arr[0];

    return 0;
}
