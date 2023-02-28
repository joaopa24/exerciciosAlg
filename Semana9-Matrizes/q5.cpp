#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    float matriz[n][m];
    
    int i,j;
    for(i=0; i<n; i++){
	  for(j=0; j<m; j++){
	    cin>>matriz[i][j];
	  }
	}
	
	float menor = matriz[0][0];
	int l = 0;
	
    for(i=0; i<n; i++){
	  for(j=0; j<m; j++){
		if(matriz[i][j] < menor){
		  menor = matriz[i][j];
		  l = j;
		}  
	  }
	}
	
	float sum=0;
	for(i=0; i<n; i++){
	 sum+=matriz[i][l];
	}
	
	cout<<menor<<endl<<sum;
}
