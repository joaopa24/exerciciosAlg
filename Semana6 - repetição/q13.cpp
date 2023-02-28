#include <iostream>
using namespace std;
int main() {
	int quantQ, contQ=1, numero, contA=1, cont=0;
	char resultado;
  
	cin>>quantQ;
    
    //////repete a linha
	while(contQ <= quantQ){
		contA=1;
		cont=0;
		/////////////Verifica a letra na linha
		while(contA <= 5){
			cin>> numero;
			if(numero <= 127){
				if(contA == 1){
					resultado = 'A';
				}else if(contA == 2){
					resultado = 'B';
				}else if(contA == 3){
					resultado = 'C';
				}else if(contA == 4){
					resultado = 'D';
				}else if(contA == 5){
					resultado = 'E';
				}
				cont++;
				cout<<cont;
			}
			contA++;
		}
		///////////////
		if(cont != 1){ ////dentro do if(numero <= 127) se tiver mais de uma alt valida ele vai dar "erro" ou *
			cout << "*" << endl;
		}else{
			cout<<resultado <<endl;
		}
		contQ++;
	}
	///////////

  return 0;

}
