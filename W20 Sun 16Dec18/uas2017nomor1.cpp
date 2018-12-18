#include <iostream>
#include <string>

using namespace std;

int main(int arc, char const *argv[]){
	int jumlahKata;
	cout << "Masukan jumlah kata";
	cin >> jumlahKata;
	string daftarKata[jumlahKata];
	cout << "Masukan" << jumlahKata << "Kata: " << endl;
	
	for (int i; i<jumlahKata; i++){
		cin >> daftarKata[i];
	}
	
	//kata dalam lsiting tidak boleh duplikat karena
	//kita ingin menghitung jumlah kemunculan kata tsb.
	
	string listingKata[jumlahKata];
	
	//array ini untuk menyimpan banyaknya kemunculan
	//kata pada indeks ke indeksKata di listing
	
	int banyakKata[jumlahKata];
	int indeksKata = 0;
	
	//boolean ini sebagai checking apakah sudah ada kata 
	//tersebut di listing atau merupakan kata baru
	bool adaDiListing;
	
	for (int i=0; i< jumlahKata; i++){
		adaDiListing = false;
		
		for(int j=0; j < indeksKata; j++){
			if (daftarKata[i] == listingKata[j]){
			
			banyakKata[j]++;
			
			adaDiListing = true;
			
			break;
			}		
		}
		
		if(!adaDiListing){
			listingKata[indeksKata] =daftarKata[i];
			banyakKata[indeksKata] = 1;
			indeksKata++;
		}
		
	}
	
	for (int i=0; i<indeksKata;i++){
		for(int j=0; j< indeksKata-1; j++){
			
			if(listingKata[j][0]> listingKata[j+1][0]){
				swap(listingKata[j], listingKata[j+1]);
				
				swap(banyakKata[j], banyakKata[j+1]);
				
			}
		}
	}
	
	for(int i =0; i<indeksKata; i++){
		cout << listingKata[i] << "\t" << banyakKata[i] << endl;
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
