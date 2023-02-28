#include <iostream>
using namespace std;

int main(){
	string letra;
	int a=0,b=0;
	
	while(a + b < 10){
	   cin>>letra;
	   if(letra == "a"){
	     a++;
	   }
	   if(letra == "b"){
	     b++;
	   }
	}
	
	if(a < b) cout<<1;
	else cout<<0;
	
	return 0;
}

