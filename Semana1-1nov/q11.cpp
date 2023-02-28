#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float degraus, objetivo;
	cin>>degraus;
	cin>>objetivo;
	
	int numberOfdegraus;
	numberOfdegraus = ceil(objetivo/(degraus/100));
	
	cout<<numberOfdegraus;
	return 0;
}


