#include <iostream> 

//Find modus linus

int a, b, tmp=0, index, arr[100];
int main(){
    cout << "Masukin N:";  
    cin >> a;
    for(int i=0; i<a;i++){
        cout << "Nilai anda";
        cin>> b;
        arr[b]++;
        if (tmp<=arr[b]){
            tmp=arr[b];
            index = b;
        }
    }
    cout << "modus"<< index<< endl;
}

//Mencari max and mind;

int a, b, c;
cin>> a;
cin>> b;
cin>> c;

if (a>b &&a > c){
    cout << "The max : " << a<< endl;
}
else if ( b > a && b > c){
    cout << "Max is :" << b << endl;
}
else cout<< "Max is : "
