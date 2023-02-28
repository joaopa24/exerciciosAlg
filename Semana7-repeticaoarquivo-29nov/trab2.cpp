#include <iostream>
#include <fstream>
using namespace std;


int main(){
	string Name; 
	int alunos, contador=1;
	float nota1, nota2;
	  
	ifstream file("entrada.txt");
	file>>alunos;
	
	ofstream newFile("saida.txt");
	ofstream textfile;
	textfile.open ("saida.txt");
	
	while(contador <= alunos){
		file>>Name;
		file>>nota1;
		file>>nota2;
		
		if((nota1+nota2)/2 < 7){  
		  cout<<Name<<endl;
          textfile << Name << endl;
		  
		}
	    contador++;
	}
	
	textfile.close();
    
    return 0;
}
