#include <iostream>
using namespace std;

int main(){
	int t1,t2;
	cin>>t1>>t2;
	float v1[t1], v2[t2];
	
	
	for(int i=0; i<t1; i++){
	  float a;
	  cin>>a;
	  v1[i] = a;
	}
	
	for(int i=0; i<t2; i++){
	  float a;
	  cin>>a;
	  v2[i] = a;
	}
	
	int c = 0;
	
	for(int i=0; i<t1; i++){
	  for(int j=0; j<t2; j++){
	     if(v1[i] == v2[j]){
		   cout<<v1[i]<<" ";
		   c++;
		 }
	  }
	}
	
	if(c == 0){
	   cout<<-1;
	}
	
	
	return 0;
}

