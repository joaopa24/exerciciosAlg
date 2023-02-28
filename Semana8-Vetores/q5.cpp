#include <iostream>
using namespace std;

int main(){
	int t1;
	cin>>t1;
	int v1[t1];
	
	for(int i=0; i<t1; i++){
	  float a;
	  cin>>a;
	  v1[i] = a;
	}
	
	int last = t1-1;
	int i = 0;
	int compara = t1;
	int c = 0;
	
	if(compara % 2 != 0){
	  compara = (compara-1)/2;
	} else {
	  compara = compara/2;
	}
	
	for(int k=0; k<compara; k++){
	  if(v1[i] == v1[last]){
		c++;
	  }
	  last--;
	  i++;
	}
	
	if(c == compara){
	  cout<<1;
	} else {
	  cout<<0;
	}
	
	return 0;
}

