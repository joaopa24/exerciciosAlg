#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeArquivo;
	float valor,number,maior,menor,c=0;
	cin>>nomeArquivo;
	ifstream file (nomeArquivo);
	file>>number;
	
	while(c < number){	
	   file>>valor;
		
	   if(c == 0){
	     maior = valor;
	     menor = valor;
	   }
	  

	   
	   if(valor > maior) maior = valor;
	   if(valor < menor) menor = valor;
	   c++;
	}
	
	  
	cout<<number<<endl<<menor;
	
	return 0;
}

