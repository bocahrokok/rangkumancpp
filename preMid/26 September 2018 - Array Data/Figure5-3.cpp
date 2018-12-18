//import library
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char kata1[5];
	char kata2[] = {'B', 'E', 'L', 'A', 'J', 'A', 'R'};
	
	for (int i = 0; i<5; i++){
		// inserting A,B,C into kata1 with index
		kata1[i] = 'A'+i; 
		cout<<kata1[i];
	}
	cout<<endl;
	for (int i=0; i<7; i++){
		//print kata2 per index;

		cout<< kata2[i];
	}
		cout<< endl;
	return 0;
}
// Figure 5.3




