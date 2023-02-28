#include <iostream>
#include <cstring>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	float v[n];
	for(int i=0; i<n; i++){
	  cin>>v[i];
	}
	
	float nMaior = v[0];
	float sMaior = v[0];
	
	float nMenor = v[0];
	float sMenor = v[0];
	
	for(int i=0; i<n; i++){
	  if(v[i] > nMaior){
		 sMaior = nMaior; 
	     nMaior = v[i];
	  }
	}
	
	for(int i=0; i<n; i++){
	  if(v[i] < nMenor){
		 sMenor = nMenor; 
	     nMenor = v[i];
	  }
	}
	
	float vNew[2];
	vNew[0] = nMaior;
	vNew[1] = nMenor;
	
	cout<<vNew[1]<<endl<<vNew[0];
	return 0;
} 
 
