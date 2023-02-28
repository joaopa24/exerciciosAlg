#include <iostream>
using namespace std;

int main(){
	int j,k;
	cin>>j>>k;
	int m[j][k];
	
	for(int i=0; i<j; i++){
	  for(int j=0; j<k; j++){
	    cin>>m[i][j];
	  }
	}
	
	bool leftRight = true;
	for(int i=0; i<j; i++){
	   if(leftRight){
	     for(int j=0; j<k; j++){
	      cout<<m[i][j]<<" ";
	     }
	   }
	   else{
	     for(int j=k-1; j>=0; j--){
	      cout<<m[i][j]<<" ";
	     }
	   }
	   leftRight = !leftRight;
	}
	
	return 0;
}
