 #include <iostream>

using namespace std;

struct StudentRec {
	
	string idNum;
	float uts;
	float uas;
	float average;
};

StudentRec theStudent[10];

int main(){
	int n;
	cout<<"Masukan banyaknya mahasiswa : " ;
	cin>>n;
	cout<<"data mahasiswa"<<endl;

for (int i=0;i<n;i++){
	cout<<"Nim : ";
	cin>>theStudent[i].idNum;
	cout<<"Uts: ";
	cin>>theStudent[i].uts;
	cout<<"UAS: ";
	cin>>theStudent[i].uas;
	theStudent[i].average = theStudent[i].uas+theStudent[i].uts;
	theStudent[i].average = theStudent[i].average/2;
	
	
}



cout<<endl;
cout<<"data mahasiswa"<<endl;

for (int i=0; i<n ;i++){
	cout<<"nim: "<< theStudent[i].idNum<<endl;
	cout<<"average: "<< theStudent[i].average<<endl;
	
	
}
return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
