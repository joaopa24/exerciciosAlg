#include <iostream>
#include <cstring>
using namespace std;


int main(){
	int n;
	cin>>n;
	int v[n];
	
	for(int i=0; i<n; i++){
	  cin>>v[i];
	}
	
	int m2=0, m3=0, m23=0;
	
	for(int i=0; i<n; i++){
	  if(v[i] % 2 == 0){
	     cout<<v[i]<<" ";
	     m2++;
	  }
	}
	if(m2 == 0){
	  cout<<0;
	}
	cout<<endl;
	for(int i=0; i<n; i++){
	  if(v[i] % 3 == 0){
	     cout<<v[i]<<" ";
	     m3++;
	  }
	}
	if(m3 == 0){
	  cout<<0;
	}
	cout<<endl;
	for(int i=0; i<n; i++){
	  if(v[i] % 2 == 0 and v[i] % 3 == 0){
	     cout<<v[i]<<" ";
	     m23++;
	  }
	}
	if(m23 == 0){
	  cout<<0;
	}
	return 0;
} 
 
