#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    string nomedoArquivo;
    cin>>nomedoArquivo;
    
    ifstream leitura (nomedoArquivo);
    
    string Palavra;
    
    leitura>>Palavra;
  
    leitura.close();
    cout<<Palavra; 
    return 0;
}
