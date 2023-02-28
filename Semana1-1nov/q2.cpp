#include <iostream>
#include <cmath>

using namespace std;

int main(){
	//cout<< M_PI<<endl; // imprimi o pi
    float raio;
    float saida;
    cin>> raio;
    
    //saida = M_PI * (raio * raio);  
    saida = M_PI * (pow(raio,2) );

    
    cout<< saida<<endl;
    return 0;
}
