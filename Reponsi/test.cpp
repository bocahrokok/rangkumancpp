#include <iostream>

using namespace std;

int main(){
	int i, j, k;
	int n=0;
	
	cin >> n;
	n=n+1;
		
	//below 
	for (i=1; i<=n; i++){
		for (j=0; j<=i;j++)
		cout << " ";
		for (j=1; j<=(n-i)-1;j++)
		cout << "* ";
		cout << endl;
	}
	
	for(i=1;i<=n;i++){
	//print space
  	for(j=1;j<=i;j++)
   	cout << " ";
  	//print number j;
   	for(j=1;j<=n-i;j++)
   	cout << j; //printf("%d",j);
   	j=1;
   	//print number low
   	for(j=1; j<=(n-i)-1;j++)
   	if(j==0)
   	break;
   
  	 else{
  	 	k=n-1;
   			
   		if(k==0)
   		break;
   		else
   		for(k=n-1; k>=j;k--)
   		cout << k-1; //printf("%d",k);
   }
   cout << endl; //printf("\n");
   
   }
}
