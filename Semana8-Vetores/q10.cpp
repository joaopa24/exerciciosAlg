#include <iostream>
using namespace std;

int main(){
    float n[12];
    string m[12] = {"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
    
    for(int i=0; i<12; i++){
	  cin>>n[i];
	}
	
	int j=0, k=0;
	float hot=n[1];
	float cold=n[1];
	for(int i=0; i<12; i++){
	  if(n[i] > hot){
		hot = n[i]; 
	    j = i;
	  }
	}
	
	for(int i=0; i<12; i++){
	  if(n[i] < cold){
		cold = n[i]; 
	    k = i;
	  }
	}
	
	cout<<m[j]<<endl<<m[k];
	
	return 0;
}
