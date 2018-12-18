#include <iostream>
using namespace std;

int main () {
struct students 
{
 int nisn;
 string nama;
 double value;
} x[7];

x[0] = {9960312699, "Handi Ramadhan", 90};

x[1].nisn= 9963959682;
x[1].nama="Rio Alfandra";
x[1].value=55;

x[2].nisn= 9950310962;
x[2].nama="Ronaldo V.U";
x[2].value=80;

x[3].nisn= 9970272750;
x[3].nama="Achmad Y.F.R";
x[3].value=60;

x[4].nisn= 9970293945;
x[4].nama="Alivia Rahma P";
x[4].value=70;

x[5].nisn= 9952382180;
x[5].nama="Ari Lutfianto";
x[5].value=65;

x[6].nisn= 9965653989;
x[6].nama="AriefBudiman";
x[6].value=60;

int datasize = sizeof(x)/sizeof(x[0]);
 int temp, temp3, j;
 string temp2; 
 //sorting started
 for (int i=1; i<datasize; i++){
  j=i-1;
  temp= x[i].nisn;
  temp2 = x[i].nama;
  temp3 = x[i].value;
  	while (x[j].nisn>temp && j>=0){
	  x[j+1].nisn=x[j].nisn;
	  x[j+1].nama=x[j].nama;
	  x[j+1].value=x[j].value;
	  j--;
	  } 
  x[j+1].nisn=temp;
  x[j+1].nama=temp2;
  x[j+1].value=temp3;  
 }

 for (int k=0; k<datasize; k++){
  cout << x[k].nisn << "\t";
  cout << x[k].nama << "\t" "\t";
  cout << x[k].value << "\t" << endl;
 }

}
