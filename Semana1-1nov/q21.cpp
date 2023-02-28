#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float comp, larg, potencia;
	cin>>comp;
	cin>>larg;
	
	potencia = (comp * larg) * 18;
	cout<<setprecision(1)<<fixed<<(comp * larg)<<"m2"<<endl<<potencia<<"W";
	return 0;
}


