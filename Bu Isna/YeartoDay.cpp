#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main ()
{
    double amount;
    int twenty, five, one, half_dollar, quarter, dime, nickel, penny; 

    cout <<"Please enter amount: ";
    cin >> amount;
    cout <<"You will need ";

    if (amount >= 20)
    {
        twenty = (amount/20);
        amount = (amount-(20*twenty));
        if (twenty > 0)
        {
            cout << twenty << " $20 bill(s). ";
        }        
    }

    if (amount >= 5 )
    {
        five = (amount/5);
        amount = (amount-(5*five));
        if (five > 0)
        {
            cout << five << " $5 bill(s). ";
        }    
    }

    if (amount >= 1 )
    {
        one = (amount/1);
        amount = (amount-(1*one));
        if (one > 0)
        {
            cout << one << " $1 bill(s). ";
        }        
    }

    if (amount >= 0.50)
    {        
        half_dollar = (amount/0.50);
        amount = (amount-(0.50*half_dollar));
        if (half_dollar > 0)
        {
            cout << half_dollar << " 50c coin(s). ";
        }        
    }

    if (amount >= 0.25 )
    {       
        quarter = (amount/0.25);
        amount = (amount-(0.25*quarter));
        if (quarter > 0)
        { 
            cout << quarter << " 25c coin(s). ";
        }
    }

    if (amount >= 0.10 )
    {                    
        dime = (amount/0.10);
        amount = (amount-(0.10*dime));
        if (dime > 0)
        {
            cout << dime << " 10c coin(s). ";
        }
    }

    if (amount >= 0.05 )
    {      
        nickel = (amount/0.05);
        amount = (amount-(0.05*nickel));
        if (nickel > 0)
        {
            cout << nickel << " 5c coin(s). ";
        }
    }

    if (amount >= 0.01)
    {                     
        penny = (amount/0.01);             
        amount = (amount-(0.01*penny));        
        if (penny > 0)
        {
            cout << penny << " 1c coin(s).\n";
        }
    }

    system("pause");
    return 0;
} 
