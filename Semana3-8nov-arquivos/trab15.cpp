#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
	int v_entrega, v_gasto;
	
	ifstream file("entrada.txt");
	file>>v_entrega;
	file>>v_gasto;
	
	file.close();
	
	int troco, n20, n10, n5, n2, n1;
	troco = v_entrega - v_gasto;
	
	n20 = troco / 20;
	n10 = (troco % 20) / 10;
	n5 = (troco % 20 % 10) / 5;
	n2 = (troco % 20 % 10 % 5) / 2;
	n1 = (troco % 20 % 10 % 5 % 2) / 1;
	
	ofstream newFile("saida.txt");
	newFile<<n20<<endl<<n10<<endl<<n5<<endl<<n2<<endl<<n1;
	cout<<n20<<endl<<n10<<endl<<n5<<endl<<n2<<endl<<n1;
	return 0;
}

