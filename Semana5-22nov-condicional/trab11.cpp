#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double peso, altura = 0;
    cin>>peso>>altura;
    
    if(peso < 60.0){
	   if(altura < 1.20) cout<<"A";
	   if(altura >= 1.20 and altura <= 1.70) cout<<"B";
	   if(altura > 1.70) cout<<"C";
	}
	if(peso >= 60.0 and peso <= 90.0){
	   if(altura < 1.20) cout<<"D";
	   if(altura >= 1.20 and altura <= 1.70) cout<<"E";
	   if(altura > 1.70) cout<<"F";
	}
	if(peso > 90){
	   if(altura < 1.20) cout<<"G";
	   if(altura >= 1.20 and altura <= 1.70) cout<<"H";
	   if(altura > 1.70) cout<<"I";
	}
}

