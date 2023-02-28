#include <iostream>
#include <fstream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main(){
	float degrau, altura;
	int number;
	
	ifstream file ("entrada.txt");
	file>>degrau;
	file>>altura;
	
	file.close();
	number = ceil(altura / (degrau / 100));
    
    ofstream newFile("degraus.txt");
    
    newFile<<number;
    
    cout<<number;
	return 0;
}

