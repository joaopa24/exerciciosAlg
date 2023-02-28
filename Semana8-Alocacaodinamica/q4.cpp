#include <iostream>
#include <cstring>
using namespace std;


int main(){
	int t1=0;
	cin>>t1; 
	int *v1 = new int[t1];
	
	for(int i=0; i<t1; i++){
	  cin>>v1[i];
	}
	
	int t2=0;
	cin>>t2; 
	int *v2 = new int[t2];
    
    for(int i=0; i<t2; i++){
	  cin>>v2[i];
	}
	
	int c = 0;
	for(int i=0; i<t1; i++){
	  for(int j=0; j<t2; j++){
	    if(v1[i] == v2[j]){
		  c++;
		}
	  }
	}
	
	int *v3 = new int[t1+t2-c];
    for(int i=0; i<t1+t2-c; i++){
	   v3[i] = v1[i];
	}
	
	for(int i=0; i<t1; i++){
	  for(int j=0; j<t2; j++){
	    if(v1[i] != v2[j]){
		  cout<<v2[j];
		  break;
		}
	  }
	}
	
	
	return 0;
} 
 














