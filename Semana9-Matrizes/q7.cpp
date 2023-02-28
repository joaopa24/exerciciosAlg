#include <iostream>
using namespace std;

int main(){
    double m[4][4];
    
    for(int i=0; i<4; i++){
	  for(int j=0; j<4; j++){
	    cin>>m[i][j];
	  }
	}
	
	int n_cities = 0;
	cin>>n_cities;
    
    int it[n_cities];
    for(int i=0; i<n_cities; i++){
	  cin>>it[i];
	}
	
	double sum = 0.0;
	for(int i=0; i<n_cities-1; i++){
	  int partida = it[i];
	  int chegada = it[i+1];
	  sum += m[partida][chegada];
	}
	
	cout<<sum;
}
