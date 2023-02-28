#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string color1, color2;
    int N, primeiro, ultimo, terceiro, quarto, segundo, penultimo;
    cin>>color1>>color2>>N;
    
    primeiro = N / 100000;
    ultimo = N % 10;
   
    segundo = (N % 100000)/10000;
    penultimo = (N / 10) % 10;
    
    terceiro = (N % 10000)/1000;
    quarto = (N % 1000)/100;
    
    if(primeiro == ultimo and segundo == penultimo and terceiro == quarto){
	  cout<<color1;
	} else cout<<color2;
    
    return 0;
}
