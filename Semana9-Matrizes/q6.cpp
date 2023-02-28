#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int matriz[n][n];
    
    for(int i=0; i<n; i++){
	  for(int j=0; j<n; j++){
	    cin>>matriz[i][j];
	  }
	}
	
	float dp=0,ds=0;
	float cp=0, cs=0;
	
    for(int i=0; i<n; i++){
	 for(int j=0; j<n; j++){
		if(j <= i){
		 dp+=matriz[i][j];
		 cp++;
		} 
	 }
	}
	
	for(int i=0; i<n; i++){
	 for(int j=0; j<n; j++){
		if((i+1) + (j+1) > n){
		 ds+=matriz[i][j];
		 cs++;
		} 
	 }
	}
	
        
	cout<<(dp/cp)<<endl<<(ds/cs);
    return 0;
}
