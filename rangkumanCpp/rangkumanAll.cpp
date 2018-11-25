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
git }

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
else cout<< "Max is : "<< c;

//different way to find max
double max = myList[0];
for (int i=1; i < ARRAY_SIZE; i++){
    if (mylist[i]> max) max =myList[i]
} 
//find min 
double max = myList[0];
int indexOfMax = 0;
for (int i=1; i < ARRAY_SIZE; i++){
    if (myList[i] > max ){
        max = myList[i];
        indexOfMax = i;

    }
}

// find min and max AGAIN: 

int i, n ;
float arr[100];

cin >> n 
cout << endl;

for (i=0; i < n; ++i){
    cout << "Angka" << i + 1<< ":";
    cin >> arr[i];
}
for (i = 1; i< n; i ){
    if (arr[0]< arr[i])
        arr[0] = arr[i];
}
cout <<"Max" << arr[0];