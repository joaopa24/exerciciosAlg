#include <iostream>
using namespace std;

float convertCmtoM(float distance,string l){
	return distance/100;
}
float convertMtoCM(float distance,string l){
    return distance*100;
}
int main(){
    float number;
    string conv;
    cin>>number>>conv;
    
    if(conv != "centimetro" and conv != "metro"){
	  cout<<"ERRO";
	}
    
    if(conv == "centimetro"){
	  cout<<convertMtoCM(number,conv)<<" cm";
	}
	
	if(conv == "metro"){
	  cout<<convertCmtoM(number,conv)<<" m";
	}
    
    return 0;
}
