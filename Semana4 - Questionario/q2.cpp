#include <iostream>
#include <fstream>
using namespace std;
int main(){
  string nome_arquivo, filme, filme2;
  float bil1, bil11, bil2, bil22;
  
  cin >>nome_arquivo;

  ifstream gravar (nome_arquivo);
   
  gravar >>filme >>bil1 >>bil11>>filme2 >>bil2 >>bil22;
  gravar.close();
 
  cout <<filme <<" -> " <<(bil1+bil11)/2;
  cout <<endl <<filme2 <<" -> " <<(bil2+bil22)/2; 

  return 0;
}
