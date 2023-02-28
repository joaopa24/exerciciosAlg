#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string nome;
    float numero, sum = 0;
    cin>>nome;
    
    ifstream arquivo (nome);
    if(arquivo){
	   while(arquivo >> numero){
	      sum = sum + numero;
	   }
	} else cout<<"Não encontrado";
    cout<<sum;
    return 0;
}
