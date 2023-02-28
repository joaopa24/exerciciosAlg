#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string v[n];
	
	for(int i=0; i<n; i++){
	   string w;
	   cin>>w;
	   v[i] = w;  
	}

	int max = 0;
	for(int i=0; i<n; i++){
	   int wlen = v[i].length();	
	   if(wlen > max){
	      max = wlen;
	   }
	}
	
	for(int i=0; i<n; i++){
	   int s = max - v[i].length();
	   for(int j=0; j<s; j++){
	     cout<<"*";
	   }   
	   cout<<v[i]<<endl;
	}
 
	return 0;
}
