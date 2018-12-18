#include <iostream> 
using namespace std;
enum BOOLEAN { FALSE, TRUE };
int main() 
{
    int C = 0;
    while (TRUE)
    {
       cout<<C+1<<endl;
       if (C == 6)
        { goto MyLabel;    // Meloncat ke label MyLabel
        }
       C++;
    }
MyLabel:  cout<<"HotDog"; // Lokasi yang akan dituju
return 0;
}
