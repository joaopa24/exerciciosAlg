#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int idade, peso;
	cin>>idade>>peso;
	
	if(idade < 20){
	   if(peso < 60){
	     cout<<9;
	   } else if(peso >= 60 and peso <= 90){
	     cout<<8;   
	   } else if(peso > 90){
	     cout<<7;
	   }
	}
	if(idade >= 20 and idade <= 50){
	   if(peso < 60){
	     cout<<6;
	   } else if(peso >= 60 and peso <= 90){
	     cout<<5;   
	   } else if(peso > 90){
	     cout<<4;
	   }
	}
	if(idade > 50){
	   if(peso < 60){
	     cout<<3;
	   } else if(peso >= 60 and peso <= 90){
	     cout<<2;   
	   } else if(peso > 90){
	     cout<<1;
	   }
	}
	return 0;
}

