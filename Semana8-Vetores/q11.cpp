#include <iostream>
using namespace std;

bool primo(int n){
    if(n == 1){
	  return false;
	}
	for(int i=2; i<n; i++){
	  if(n % i == 0){
	     return false;
	  }
	}
	return true;
}

int main(){
    int v[9];
    for(int i=0; i<9; i++){
	  cin>>v[i];
	}
	
	for(int i=0; i<9; i++){
      if(primo(v[i])){
		cout<<v[i]<<" "<<i<<endl;  
	  }
	  
	}
	return 0;
}
