#include <iostream>
using namespace std;

int main(){
	double a,b,operation;
	int x;
	cin>>a>>b>>x;
	
	if(x == 1){
	  operation = (a + b) / 2;
	  cout<<operation;
	}
	else if(x == 2){
	  if(a > b) operation = a - b;
	  if(b > a) operation = b - a;
	  cout<<operation;
	}
	else if(x == 3){
	  operation = a * b;
	  cout<<operation;
	}
	else if(x == 4){
	   if(b == 0){
	     cout<<"ERRO";
	   } else {
	     operation = a / b;
	     cout<<operation;
	   } 
	} else {
	   cout<<"ERRO";
	}
	return 0;
}

