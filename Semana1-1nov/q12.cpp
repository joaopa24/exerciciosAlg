#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float b_maior, b_menor, altura, area;
	cin>>b_maior;
	cin>>b_menor;
	cin>>altura;

	area = ((b_maior + b_menor) * altura) / 2;
	
	cout<<area;
	return 0;
}


