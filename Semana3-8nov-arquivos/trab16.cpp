#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	float value;
	ifstream file("valor.txt");
	file>>value;
	
	float op1, op2, op3;
	op1 = value * 92 / 100;
	op2 = value / 4;
	op3 = (value * 110 / 100) / 10;
	
	ofstream newFile("opcoes.txt");
	newFile<<setprecision(2)<<fixed<<op1<<endl<<op2<<endl<<op3;
	cout<<setprecision(2)<<fixed<<op1<<endl<<op2<<endl<<op3;
	return 0;
}

