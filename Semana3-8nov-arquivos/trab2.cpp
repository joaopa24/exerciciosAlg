#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    string nomedoArquivo, wordSelect;
    cin>>nomedoArquivo;
    cin>>wordSelect;
    
    //ifstream leitura (nomedoArquivo);
    ofstream escrever (nomedoArquivo);
    
    string palavra;
    palavra = wordSelect;
    
    //leitura>>palavra;
    escrever<<palavra;
    escrever.close();
    //leitura.close();

    cout<<palavra; 
    return 0;
}

