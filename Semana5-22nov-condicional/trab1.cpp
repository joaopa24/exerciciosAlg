#include <iostream>
using namespace std;

int main()
{
    int numerador, denominador;
    cin>>numerador>>denominador;
    
    if(denominador == 0){
	  cout<<"erro";
	} else {
	  cout<<numerador/denominador<<endl<<numerador%denominador;
	}
}
