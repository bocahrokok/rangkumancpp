#include <iostream>
using namespace std;

int main(){
	
	int row, collumn, a, b ;
	//insert the row of the table 
	cout<< "Insert for the row : ";
	cin>> row;
	//insert the collumn of the table
	cout<< "Insert for the collumn: ";
	cin>> collumn;
	
	//initialize FL1 a=1, must be lower equal than INSERTING_ROW; increment
	for (a=1; a<=row; a++){
		//init b qual 1; lower than collumn ; increment b 
		for (b=1; b<=collumn; b++){
			cout << a*b << "\t" ;
		}
		// kalau sudah row1 (dikali 1 semua), lanjut row 2 (dikali 2 semua), 
		//row3 (dikali 3 semua);
		cout<<endl;
	}
}
