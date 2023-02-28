#include <iostream>
using namespace std;

void imprime(float *v, int tam){
	for(int i=0; i<tam; i++){
	  cout<<v[i]<<" ";
	  cout<<endl;
	}
}

int main(){
    int tam;
    cin>>tam;
    
    float *v = new float[tam];
    int i;
    for(i=0; i<tam; i++){
	  cin>>v[i];
	  imprime(v,tam);
	}
	
	//desalocar
	delete [] v;
    
    return 0;
}
