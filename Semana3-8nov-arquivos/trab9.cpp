#include <iostream>
#include <fstream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main(){
	float number1, number2, power, area;
	const float powerc = 18;
	cin>>number1;
	cin>>number2;
    
    area = number1 * number2;
    power = area * powerc;
    
    ofstream file("potencia.txt");
    
    file<<setprecision(1)<<fixed<<area<<"m2"<<endl;
    file<<setprecision(1)<<fixed<<power<<"W";
    
    cout<<setprecision(1)<<fixed<<area<<"m2"<<endl;
    cout<<setprecision(1)<<fixed<<power<<"W";
	return 0;
}

