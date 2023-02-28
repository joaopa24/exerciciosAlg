#include <iostream>
#include <cstring> //memcpy
using namespace std;

void imprime(int *v, int tam){
	for(int i=0; i<tam; i++){
	  cout<<*(v+i)<<" "<<endl;
	}
}

int *aumentaTamanho(int *v, int tamanho){
    int *novo = new int[tamanho+3];
    memcpy(novo, v, sizeof(int)*tamanho);
    tamanho+=3;
    delete [] v;
    return novo;
 
}
int main(){
    int tamanho=2;
    int *v = new int [tamanho];
    for(int i=0; i<tamanho; i++){
	  cin>>v[i];
	  //imprime(v, tamanho);
      v=aumentaTamanho(v, tamanho);
      imprime(v, tamanho);
      	  
	}
	
    return 0;
}
