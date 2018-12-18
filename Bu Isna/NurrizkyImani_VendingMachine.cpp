
//Nurrizky Imani 18/429294/PA/18685
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main ()
{
    double amount;
    int seratus, limapuluh , sepuluh, duapuluh, lima, satu;
	int seratusCoin = 10, limapuluhCoin = 10, duapuluhCoin = 10, sepuluhCoin = 10, limaCoin = 10, satuCoin = 10;
	int hargasoda = 5, hargatea = 2, hargacoffe = 4;
	int soda, tea, coffe;  
	int totalharga ;
	 
	 
    cout << "Harga soda = 5, harga tea = 2, harga coffe = 4" << endl;
    
    cout << "Berikan jumlah soda : ";
    cin >> soda;
	cout << "Berikan jumlah tea : ";
	cin >> tea;
	cout << "Berikan jumlah coffe : ";
	cin >> coffe; 
	
	totalharga = hargasoda*soda + hargatea*tea + hargacoffe*coffe;
	cout << "Total Harga : " << totalharga << endl;
	
	cout <<"Please enter amount: ";
    cin >> amount;
		
	amount = amount - totalharga ;
	
	while(amount < 0){
	cout << "Uang Anda Kurang!!!!!!!!!! " << endl ;
	return 0;
	}
	
	cout << "Kembalian Kamu : " << amount << "K"<< endl;
	
    cout <<"Kamu Dapat : " << endl;
    
    while (amount >= 100){
        seratus = (amount/100);
        amount = (amount-(100*seratus));
        seratusCoin = seratusCoin - seratus;
        if (seratus > 0){
            cout << seratus << " lembar $100 ribu "<< endl;
		}
		 ;        
    }

    while (amount >= 50 ){
        limapuluh = (amount/50);
        amount = (amount-(50*limapuluh));
        limapuluhCoin = limapuluhCoin - limapuluh;
        if (limapuluh > 0)
        {
            cout << limapuluh << " lembar 50 ribu. " << endl;
           
        }    
    }
    
	while(amount >= 20 ){       
        duapuluh = (amount/20);
        amount = (amount-(20*duapuluh));
        duapuluhCoin =  duapuluhCoin - duapuluh;
        if (duapuluh > 0)
        { 
            cout << duapuluh << " lembar 20 ribu. " << endl;
            
        }
    }
    while (amount >= 10 ){
        sepuluh = (amount/10);
        amount = (amount-(10*sepuluh));
        sepuluhCoin = sepuluhCoin - sepuluh;
        if (sepuluh > 0)
        {
            cout << sepuluh << " lembar 10 ribu " << endl ;
            
        }        
    }

    while (amount >= 5){        
        lima = (amount/5);
        amount = (amount-(5*lima));
        limaCoin = limaCoin - lima;
        if (lima > 0)
        {
            cout << lima << " lembar lima ribu. " << endl ;
            
        }        
    }


    while (amount >= 1){      
        satu = (amount/1);
        amount = (amount-(1*satu));
        satuCoin = satuCoin - satu;
        if (satu > 0)
        {
            cout << satu << " lembar seribu " << endl;
            
        }
    }
    		cout << "    " << endl;
        	cout <<  "Lembar uang 100 sisa di Vending Machine " << seratusCoin << endl ;
        	cout  << "Lembar uang 50 sisa di Vending Machine "<< limapuluhCoin << endl ;
        	cout <<  "Lembar uang 20 sisa di Vending Machine "<< duapuluhCoin << endl ;
        	cout  << "Lembar uang 10 sisa di Vending Machine "<< sepuluhCoin << endl;
        	cout  << "Lembar uang 5 sisa di Vending Machine "<< limaCoin << endl ;
        	cout  << "Lembar uang 1 sisa di Vending Machine "<< satuCoin << endl ;
    
	system("pause");
    return 0;
    }


