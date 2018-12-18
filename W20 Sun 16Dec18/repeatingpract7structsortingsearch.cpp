//rewriting programming practicumm vii sorting and search
#include <iostream>
#include <string >
using namespace std;

struct siswa {
	string name;
	int nisn;
	int value;
};

siswa data[100];

int main(){
	data[0].name = "Handi Ramadhan";
	data[0].nisn = 699;
	data[0].value = 90;
	
	data[1].name = "Rio alfandra";
	data[1].value = 90;
	data[1].nisn = 682;
	
	data[2].name = "Ronaldo Valentino";
	data[2].nisn = 962;
	data[2].value = 80;
	
	data[3].name = "Achmad";
	data[3].nisn = 750;
	data[3].value = 60;
	
	data[4].name = "Alivia";
	data[4].nisn = 945;
	data[4].value = 70;
	
	data[5].name = "Ari";
	data[5].nisn = 180;
	data[5].value = 65;
	
	data[6].name = "Arief";
	data[6].nisn = 989;
	data[6].value = 60;
	
	int temp, temp3, min;
	string temp2;
	
	
	
	for (int i=0; i<7; i++ ){
		min = i;
		for (int j=i+1; j<7; j++){
			if (data[j].nisn < data[min].nisn)
				min = j;
		}
		
		swap(data[min].nisn, data[i].nisn);
//		temp = data[i].nisn;
//		data[i].nisn = data[min].nisn;
//		data[min].nisn = temp;
		
	}
	
	for (int k=0; k<7; k++){
		cout << data[k].nisn << " " << data[k].name << " " << data[k].value << endl;
		
	}
	
	//binary search;
	
int i=0, j=6, k;
	int query = 962;
	bool found = false;
	
	//search algorithm;
	cout << endl;
	
	while(!found&&i<=j){
		k = (i+j)/2;
		if(data[k].nisn < query)
		{
		i = k+1; 
		}else if(data[k].nisn == query)
		{
			found = true;
		}else 
		{
			j= k-1;
		}
	}
	//print 
	if(!found){
		cout << " Tidak ditemukan";
		
	}else {
		cout << "Ditemukan";
	}
}
