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

//Mencari min and mind;

int a, b, c;
cin>> a;
cin>> b;
cin>> c;

if (a>b &&a > c){
    cout << "The min : " << a<< endl;
}
else if ( b > a && b > c){
    cout << "min is :" << b << endl;
}
else {cout<< "min is : "<< c;}


//different way to find min
double min = myList[0];
for (int i=1; i < ARRAY_SIZE; i++){
    if (mylist[i]> min) min =myList[i]
} 
//find min 
double min = myList[0];
int indexOfmin = 0;
for (int i=1; i < ARRAY_SIZE; i++){
    if (myList[i] > min ){
        min = myList[i];
        indexOfmin = i;

    }
}

// find min and min AGAIN:

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
cout <<"min" << arr[0];

//finding average array;

int n, i;

float num[100], sum = 0.0, average;
cin >> n;

while (n > 100 || n<=0){
    cout << "Angka antara 1-100";
    cin >> n;
}
for (i=0; i<n; i++){
    cout << i+1 << "enter NUM:";
    cin >> num[i];
    sum+= num[i];
}
average = sum/n;
cout<< "Average" << average;

//finding jumlah lulus atau enggak?
cout << "how many?";
cin >> n;

lulus = 0;
gagal = 0;

for (a=1;a<=n; a++){
    cout << "Insert mark student:";
    cin >> b;
    if (b>=50){
        lulus = lulus+1;
    }
    else {
        gagal = gagal+1;
    }
    cout << "sum lulus:"<< lulus<< endl;
    cout << "sum gagal" << gagal << endl;}


// sorting algorithm only;
int temp, temp3, min;
string temp2;

for(int 0; i< 7-1; i++){
    min=i; 
    for (int j=i+1; j< 7; j++){
        if (data[j].NISN < data[min].NISN){
            min = j ;
        }
    }
    temp = data[i].NISN;
    temp2= data[i].name;
    temp3= data[i].value;

    data[i] = data[min].NISN;
    data[i] = data[min].name;
    data[i] = data[min].value;

    data[min].NISN = temp;
    data[min].name = temp2;
    data[min].value = temp3;
}

//binary search algorithm

int i = 0; j=6; k, query = 962;

bool found= false;

while (!found&&i<j){
    k=(i+j)/2;
    if(data[k].NISN< query){
        i=k+1;
    }
    else if (data[k].NISN ==query){
        found=true;
    }
    else {
        j=k-1;
    }
    //print 
    if(!found){
        cout<<"Tidak ditemukan";
    }else {
        cout << "Ditemukan";
    }
}

//sequential search;
int query = 60;
bool found = false;
string temp4 = "Joko";

//search algos;

for (int i; i< 7; i++){
    if (data[i].value == query){
        data[i].name = temp4;
        cout << data[i].NISN << " " data[i].name << " " << data[i].value << endl;
        found = true;
    }
    if (!found){
        cout << "Tidak Ditemukan";
    }
    
}

// 