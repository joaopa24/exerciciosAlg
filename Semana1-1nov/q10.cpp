#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int v_total, v_gramas, v_gasto;
	cin>>v_total;
	v_gramas = v_total / 2;
	
	float b2, b5, b10;
	b10 = v_gramas / 10;
	b5 = (v_gramas % 10) / 5;
	b2 = (v_gramas % 10 % 5) / 2;
	
	v_gasto = v_total - (v_gramas % 10 % 5 % 2) * 2;
	
	cout<<b2<<endl<<b5<<endl<<b10<<endl<<v_gasto;
	return 0;
}


