#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	float p1, p2, p3;
	cin>>p1;
	cin>>p2;
	cin>>p3;
	
	float media;
	media = (p1+p2+p3) / 3;
	
	cout<<setprecision(2)<<fixed<<media;
	
	return 0;
}

