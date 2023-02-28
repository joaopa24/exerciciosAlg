#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int number, d1,d2,d3;
	cin>>number;
	
	d1 = number / 100;
	d2 = (number / 10) % 10;
	d3 = number % 10;
	
	int soma, produto;
	soma = d1 + d2 + d3;
	produto = d1 * d2 * d3;
	
	ofstream file("saida.txt");
	file<<produto;
	
	cout<<soma;
	return 0;
}
