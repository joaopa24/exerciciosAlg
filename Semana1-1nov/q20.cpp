#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float altura, angulo, radian, v_final;
	cin>>altura;
	cin>>angulo;
	
	radian = (angulo * (M_PI / 180));
	v_final = altura / sin(radian);

	cout<<v_final;
	return 0;
}


