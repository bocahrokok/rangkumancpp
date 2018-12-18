#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

main(){

int i,j,n,k;
cout << "Enter a value : ";
cin >> n;




//uper
for(i=1;i<=n;i++){
	//print space
  	for(j=1;j<=n-i;j++)
   	cout << " ";
  	//print number j;
   	for(j=1;j<=i;j++)
   	cout << j; //printf("%d",j);
   	j=1;
   	//print number low
   	for(j=i;i>=j;j--)
   	if(j==0)
   	break;
   
  	 else{
  	 	k=j-1;
   			
   		if(k==0)
   		break;
   		else
   		cout << k; //printf("%d",k);
   }
   cout << endl; //printf("\n");
   
   }
}
