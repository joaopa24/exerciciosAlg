#include <iostream>
using namespace std;

int main(){
    int v[8];
   
    int nv[8], n=0;
    int pv[8], p=0;
    
    for(int i=0; i<8; i++){
	  int a;
	  cin>>a;
	  v[i] = a;
	}
	
	for(int i=0; i<8; i++){
	  if(v[i] > 0){
		 pv[p] = v[i];
		 p++; 
	  }
	  else if(v[i] < 0){
	     nv[n] = v[i];
	     n++;
	  }
	}
	
	for(int i=0; i<p; i++){
	    cout<<pv[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n; i++){
	    cout<<nv[i]<<" ";
	}
	
	
	return 0;
}
