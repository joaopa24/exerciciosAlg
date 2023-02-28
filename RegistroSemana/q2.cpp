#include <iostream>
using namespace std;

struct ponto{
  int coordX, coordY;
};

struct retangulo{
  ponto v1;
  ponto v2;
};

int main(){
    ponto p;
    cin>>p.coordX>>p.coordY;
    
    int n, total=0;
    cin>>n;//quantidade
    
    retangulo r;
    
    while(n != 0){
	  cin>>r.v1.coordX>>r.v1.coordY;
	  cin>>r.v2.coordX>>r.v2.coordY;
	  
	  if((r.v1.coordX >= p.coordX or r.v1.coordY >= p.coordY) and (r.v2.coordX >= p.coordX or r.v2.coordY >= p.coordY)){
	    total++;
	  } 
	  n--;
	}
	cout<<total;
    
    //como um vetor
    retangulo v[n];
    for(int i=0; i<n; i++){
	  cin>>v[i].v1.coordX>>v[i].v1.coordY;
	  cin>>v[i].v2.coordX>>v[i].v2.coordY;
	}     
       
    return 0;
}



