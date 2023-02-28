#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeArquivo;
	float valor,number,maior,menor,c=0;
	cin>>nomeArquivo;
	ifstream file (nomeArquivo);
	file>>number;
	
	while(file >> valor){
	   if(c == 0){
	     maior = valor;
	     menor = valor;
	     c++;
	   }
	   if(valor > maior) maior = valor;
	   if(valor < menor) menor = valor;
	}
	
	  
	cout<<maior<<endl<<menor;
	
	return 0;
}

