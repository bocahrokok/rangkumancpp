#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main () {
int input, min, sec;
char boole;

cout << "Insert time: ";
cin >> input;
min = input / 60;
sec = input % 60;

cout << min << "." << sec << endl;

cout << "Start countdown (Y/N):";

cin >> boole;

if (boole == 'y'){
for (int j=min; j>=0; j--){
	for (int i=sec; i>=0; i--)
	cout << j << "." << i << endl;
}
}
else if (boole=='n'){
	cout << "DOne";
}


}
