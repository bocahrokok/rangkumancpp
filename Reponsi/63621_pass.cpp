#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int main(){
   string pass ="";
   char ch;
   cout << "Enter a password: ";
   ch = _getch();
  
   while(ch != 13)
   {//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   
	cout << endl << "The password is: " << pass;
}
