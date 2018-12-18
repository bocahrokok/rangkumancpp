//import library
#include <iostream>
#include <string.h>
using namespace std;

int main(){

	char kata1[6];
	char kata2[] = "BELAJAR";
	char kata3[15];
	
	cout<< "Masukan suatu kata dengan panjang 6 = ";
	cin >>kata1 ;
	cout << "Berikut insert kata1: " << kata1;
	strncpy(kata3, kata1, 3);
	cout<<"\n" << "3 Kata yg dicopy: " << kata3 << endl;
	cout << "comparness kata3 vs kata1: "<< strncmp(kata3, kata1, 3) << endl;
	cout << "Panjang kata 2 adalah = " << strlen(kata3);	 
	return 0;
}
// Figure 5.7 FINAL in chapter V

