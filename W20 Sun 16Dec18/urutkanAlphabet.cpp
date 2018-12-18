#include <iostream>
#include <conio.h>
#include <string.h>

/
using namespace std;
int main(){
	
	
	int i,j, n;
	cout << "Enter N: ";
	cin >> n;
	char str[n][10]
	char t[20]; // temporary 
	cout << "Enter any n string (name): " << endl;
	for (i=0; i<n; i++){
		cin >> str[i];
	}
	for (i=1; i<n; i++)
	{
		for (j=1;j<5; j++)
		{
			if (strcmp(str[j-1], str[j]) > 0)
			{
				//swap happen using strcpy;
				strcpy(t, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j],t);
				
			}
		}
	}
	cout << "Strings names in aphabet order : \n";
	for (i=0; i<5; i++)
	{
		cout << str[i]<< endl;
		
	}
}
