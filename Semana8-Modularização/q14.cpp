#include <iostream>
#include <iomanip>
using namespace std;

float Maximo(float a, float b){
    if(a > b){
	  return a;
	} else if(b > a){
	  return b;
	} else {
	  return a;
	}
}

int main(){
	float a,b;
	cin>>a>>b;
	
	cout<<fixed<<setprecision(1)<<Maximo(a,b);
	return 0;
}

