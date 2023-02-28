#include <iostream>
#include <cmath>

using namespace std;

int main(){
	float numberX1, numberY1, numberX2, numberY2;
	float numberX, numberY, Sum;
	float distance;
	
	cin>> numberX1;
	cin>> numberY1;
	cin>> numberX2;
	cin>> numberY2;
	
	numberX = numberX2 - numberX1;
	numberY = numberY2 - numberY1;
	Sum = pow(numberX,2) + pow(numberY,2);
	
    distance = sqrt(Sum);
    
    cout<< distance<< endl;
}

