#include <iostream>
#include <cstring>
using namespace std;


int main(){
	int n;
	cin>>n;
	int v1[n],v2[n];
	int c=0, i;
	
	for(i=0; i<n; i++){
	  int j=0;
	  cin>>j;
	  v1[i] = j;
	}
	
	for(i=0; i<n; i++){
	  int j=0;
	  cin>>j;
	  v2[i] = j;
	}
	
	for(i=0; i<n; i++){
	  int j=0;
	  for(j=0; j<n; j++){
	     if(v1[i] == v2[j]){
	       c++;
	     }
	  }
	}
	
	if(c == n){
	  cout<<"IGUAIS";
	} else {
	  cout<<"DIFERENTES";
	}
	
	return 0;
} 
 
