#include <iostream>
#include <fstream>

using namespace std;

int main(){
	char letra;
	string nomeArquivo;
	cin>>nomeArquivo;
	ifstream file(nomeArquivo);
	
	int c = 0;
	
	while(file>>letra){
		c++;
	   
	}
	cout<<c;
    return 0;
}
