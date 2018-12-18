#include <iostream>

using namespace std;

char papan[3][3];

void cetakPapan(){
	system("clear");
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			cout << papan[i][j] << " ";
			
		}
		cout << endl;
	}
}

bool cekSeri(){
	bool seri = true;
	
	for(int i=0; i<3; i++){
		for(int j=0;j<3;j++){
			if(papan[i][j] == '-'){
				seri = false;
			}
		}
	}
	return seri;
	
void pemainMenang(char c){
	cetakPapan();
	if(c='0'){
		cout << endl << "Pemain 1 menang!" << endl;
	}else{
		cout << endl << "Pemain 2 menang!" << endl;
	}
}
bool masihMain(){
	for( int i=0; i<3 ; i++){
		if(papan[i][0] == papan[i][1] && papan[i][0] == papan[i][2] && papan[i][0] != '-'){
			pemainMenang(papan[i][0]);
			return false;
		}
		
		//vertikal;
		if(papan[i][0] == papan[i][1] && papan[0][i]== papan[2][1] && papan[0][i] != '-' ){
			pemainMenang(papan[0][i]);
			return false;
		}
		
	}
}
}
