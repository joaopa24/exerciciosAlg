#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float value, juros, n_meses, montante;
    
	cin>>value;
	cin>>juros;
	cin>>n_meses;
	
	montante = value * pow(juros + 1,n_meses);
	
	cout<<montante;
	return 0;
}


