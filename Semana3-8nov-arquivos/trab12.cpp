#include <iostream>
#include <fstream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main(){
	float altura, largura, profundidade, pesocm3, pmionir;
	
	ifstream file ("entrada.txt");
	file>>altura;
	file>>largura;
	file>>profundidade;
	file>>pesocm3;
	
	file.close();
	pmionir = ((float) altura*largura*profundidade) * pesocm3;
    
    ofstream newFile("degraus.txt");
    
    newFile<<setprecision(1)<<fixed<<pmionir;
    
    cout<<setprecision(1)<<fixed<< pmionir;
	return 0;
}

