#include <fstream>
#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main(){
	float salario, desp1, desp2;
	
	ifstream file("entrada.txt");
	
	file>>salario;
	file>>desp1;
	file>>desp2;
	
	file.close();
	float cal;
	cal = salario - ((desp1*100.38/100)+(desp2*100.38/100));
	
	cout<<setprecision(2)<<fixed<<cal;
	
	return 0;
}

