#include <iostream>
#include <cstring>
using namespace std;


int main(){
	int n, i;
	cin>>n;
	
	int v[n];
    for(i=0; i<n; i++){
	  int a;
	  cin>>a;
	  v[i] = a;
	}
	
	int times = n;
	if(n % 2 == 0){
	  times = times / 2;
	} else {
	  times = (times - 1)/2;
	}
	
	int h=0,c=n-1, trues=0;
	
	for(i=0; i<times; i++){
	  if(v[h] == v[c]){
		cout<<h<<' '<<v[h]<<' '<<c<<' '<<v[c]<<' ';   
	    trues++;
	  } else if(v[h] != v[c]){
	    i = times;
	  }
	  h++;
	  c--;
 	}
 	cout<<endl;
 	if(trues == times){
	  cout<<"sim";
	} else {
	  cout<<"nao";
	}
 	
	
	return 0;
} 
 

