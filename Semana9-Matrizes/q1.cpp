#include <iostream>
using namespace std;

void imprime(double **m, int l, int c){
  for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
	  cout<<m[i][j]<<" ";
	}
	cout<<endl;
  }
}

double soma(double **m, int l, int c){
    double resultado=0;
    for(int i=0; i<l; i++){
      for(int j=0; j<c; j++){
	    resultado+=m[i][j];
	  }
	}
	return resultado;
}

int main(){
	int linha, coluna;
	cin>>linha>>coluna;
	
	//alocação dinamicada matriz
	double ** matriz = new double *[linha];
	
	int i,j;
	for(i=0; i<linha; i++){
	  matriz[i] = new double[coluna];
	}
	
	for(i=0; i<linha; i++){
	  for(j=0; j<coluna; j++){
	    cin>>matriz[i][j];
	  }
	}
	
	//imprime(matriz, linha, coluna);
	cout<<soma(matriz, linha, coluna);
	
	return 0;
}
