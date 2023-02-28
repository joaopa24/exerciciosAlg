#include <iostream>
using namespace std;

void imprime(float *v, int tam){
	for(int i=0; i<tam; i++){
	  cout<<*(v+i)<<" ";
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
	  //imprime(v,tam);
	  
	  float *saida = new float [tam-2];
	  float maior=v[0], segundoMaior=v[0];
	  int posMaior=0, posSegMaior=0;
	  
	  float menor=v[0], segundoMenor=v[0];
	  int posMenor=0, posSegMenor=0;
	  
	  for(int i=0; i<tam; i++){
          if(v[i] > maior){
		     segundoMaior=maior;
		     posSegMaior=posMaior;
		     
		     maior=v[i];
		     posMaior=i;	  
		  }else if(v[i]>segundoMaior){
	         segundoMaior=v[i];
	         posSegMaior=i;  
	      }
	      //achar segundo menor
	      
	       	  
	  } 
	  
	  cout<<"Posição do segundo maior "<<posSegMaior;
	  //desalocar
	  
	  int j=0;
	  for(i=0; i<tam; i++){
		  if(i!=posSegMaior and i!=posSegMenor){
		    saida[j] = v[i];
		    j++;
		  }  
	  }
	  
	  imprime(saida, tam-2);  
	  
	  delete [] v;
	  delete [] saida;
	}
	
    return 0;
}
