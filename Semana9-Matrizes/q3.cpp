#include <iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int v[n][m];
	
	for(int i=0; i<n; i++){
	  for(int j=0; j<m; j++){
	    cin>>v[i][j];
	  }
	}
	
	int set=0;
	cin>>set;
	int vset[set];
	
	for(int i=0; i<set; i++){
	  cin>>vset[i];
	}
	
	 
	for(int i=0; i<set; i++){
	  int sum = 0;	
	  int k = vset[i] - 1;
	  for(int j=0; j<m; j++){
	    sum += v[k][j];
	  }
	  cout<<sum<<endl;
	}
	
	return 0;
}
