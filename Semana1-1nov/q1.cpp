#include <iostream>
using namespace std;


int main(){
	//declaração de variavel
	//tipo nomeDaVariavel
	//entrada de dados
	//cin >> nomedaVariavel >> segundaVariavel
	// processamento 
	// saida dos dados
	// cout << nomeDaVariavel
	int number;
	int long1, long2, longsum;
	int lat1, lat2, latsum; 	
	cin>> number;
	lat1 = number / 1000;
	lat2 = number % 10;
	latsum = lat1 + lat2;
	
	long1 = (number / 100) % 10;
	long2 = (number / 10) % 10;
	longsum = long1 + long2;
	
	cout<<latsum<<endl<<longsum;
    return 0;
}
