#include <iostream>
#include <fstream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main(){
	float custo, precoConvite;
	ifstream file("teatro.txt");
	
	file>>custo;
	file>>precoConvite;
    
    file.close();
    
    int numeroConvite = ceil(custo / precoConvite);
    ofstream newFile("convite.txt");
    
    newFile<<numeroConvite;
    cout << numeroConvite;
	return 0;
}

