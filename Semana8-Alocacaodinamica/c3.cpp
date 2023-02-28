#include <iostream>
#include <cstring>
using namespace std;

int *aumenta(int *v, int tamanho){
    int *novo = new int[tamanho+2];
    memcpy(novo, v, sizeof(int)*tamanho);
    tamanho+=3;
    delete [] v;
    return novo;
 
}



void imprime(int *v, int tam){
	for(int i=0; i<tam; i++){
	  cout<<*(v+i)<<" "<<endl;
	}
	///////////
		int i;
    for(i=0; i<tm; i++){
	   v3[i] = v[i];
	}
	
	for(i=0; i<tm3; i++){
	   v3[i+tm] = v2[i];
	}
	/////////////
}

int main(){
    int tamanho=2;
    int *v = new int[tamanho];
    
    int valor, i=0;
    
    cin>>valor;
    while(valor != -1){
	   if(i == tamanho){
	     v=aumenta(v,tamanho);
	   }
	   
	   v[i]=valor;
	   imprime(v,tamanho);
	   i++;
	   
	   cin>>valor;
	}
    
    return 0;
}
