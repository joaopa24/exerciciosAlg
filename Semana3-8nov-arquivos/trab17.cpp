#include <iomanip>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
	int dia, mes, ano;
	ifstream file("entrada.txt");
	file>>dia;
	file>>mes;
	file>>ano;
	
	int days,date, daysemAc;
	days = dia + (mes *30) + (ano * 360);
	date = 7 + (11 * 30) + (2022 * 360);
	daysemAc = date - days;
	
	cout<<daysemAc;
	
	return 0;
}

