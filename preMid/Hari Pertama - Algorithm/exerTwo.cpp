//import library
#include <iostream>
using namespace std;

int main(){
	float speedVar, distVar, time;

//input variable speed and distance

cout <<"Insert speedVar: ";
cin>>speedVar;
cout<<"Insert distanceVar : ";
cin>>distVar;

//process :
time= distVar/speedVar;

//print out
cout<< "your time : " << time << "menit";
getchar();
return 0;
}

