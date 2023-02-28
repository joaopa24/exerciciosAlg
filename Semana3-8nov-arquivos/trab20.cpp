#include <fstream>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	int number;
	ifstream file("tempo.txt");
	file>>number;

	int horas, minutos;
	float segundos;
	horas = number / (60*60*1000);
	minutos = (number % (60*60*1000)) / (60*1000);
	segundos = (float)(number % (60*60*1000) % (60*1000)) / 1000;
	
	ofstream newFile("horario.txt");
	
	cout<<horas<<":"<<minutos<<":"<<segundos; 
	newFile<<horas<<":"<<minutos<<":"<<segundos; 
	
	return 0;
}

