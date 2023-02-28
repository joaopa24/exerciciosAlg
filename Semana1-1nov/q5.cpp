#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int peso;
	cin>>peso;
	int tanques, carros, soldados, rifles;
	
	tanques = peso / 60000;
	carros =(peso % 60000) / 900;
	soldados = (peso % 60000 % 900) / 85;
	rifles = (peso % 60000 % 900 % 85) / 4;
	
	cout<<tanques<<endl<<carros<<endl<<soldados<<endl<<rifles;
	return 0;
}
