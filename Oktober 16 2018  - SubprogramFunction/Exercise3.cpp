#include <iostream>
using namespace std;

int hcf(int n1, int n2);

int main()
{
   int n1, n2;

   cout << "Enter two positive integers: ";
   cout<< endl << "First: ";
   cin >> n1 ;
   cout<< endl << "Second: ";
   cin>> n2;
   

   cout<<"Greatest Comm. Divisor "<<n1<<" Et "<< n2<<" is: "<<hcf(n1, n2);

   return 0;
}

int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}
