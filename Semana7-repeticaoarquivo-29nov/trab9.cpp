#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string nomeArquivo;
	cin>>nomeArquivo;
	int c = 0;
	ifstream file(nomeArquivo);
	char x;
	while(file>>x){
	   c++;
	}
	cout<<c;
}
