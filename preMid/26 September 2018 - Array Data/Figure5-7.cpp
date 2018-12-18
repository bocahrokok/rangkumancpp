//import library
#include <iostream>
#include <string.h>
using namespace std;

//start programm 

int main(){
	//declare variable
	char kata1[6];
	char kata2[] = "BELAJAR";
	char kata3[15];
	
	cout<< "Masukan suatu kata dengan panjang 6 = ";
	cin >> kata1 ;
	cout << kata1;
	
	strncpy(kata3, kata1, 3);
	cout<< "\n" << kata3 << endl;
	cout << strncmp(kata3, kata1,3) << endl;
	cout << "Panjang kata 2 adalah = " << strlen(kata3);
	system("pause");	 
	return 0;
}
// Figure 5.7 FINAL in chapter V

