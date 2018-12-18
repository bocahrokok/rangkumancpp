#include <iostream>

using namespace std;

int n; 
int main(){
	struct fullname {
		string firstname;
		string lastname;
	};
	struct studentrec {
		fullname name;
		string idNum;
		float gpa;
	};


studentrec thestudent[10];

cout << "Masukan n : " ;
cin >> n;

cout << endl << "Data mahasiswa"<< endl;

for (int i=0; i<n; i++){
	cout<< "Nama Depan:" << endl;
	cin>> thestudent[i].name.firstname;
	cout<< "Nama Belakang: "<< endl;
	cin >> thestudent[i].name.lastname;
	cout<< "NIM: "<< endl;
	cin >> thestudent[i].idNum;
	cout << "IPK : "<< endl;
	cin >> thestudent[i].gpa;
}

cout <<"Data mahasiswa"<< endl;

for(int i=0; i<n; i++){
	thestudent[i].name.firstname;
	thestudent[i].name.lastname;
	thestudent[i].idNum;
	thestudent[i].gpa;
}
}
