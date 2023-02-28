#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int soma(int n){
     int soma=0, c=1;
     while(c <= n){
	   soma = soma + (5*pow(n,2)+2*c+8);
	   c++;
	 } 
	 return soma;
}
int main(){
     int n;
     cin>>n;
    
     cout<<soma(n);	 
	 return 0;
}

