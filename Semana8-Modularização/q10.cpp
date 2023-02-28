#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int soma(int number){
    int soma = 0;
    int temp = number;
    
    while(temp != 0){
	   soma = soma + temp % 10;
	   temp = temp / 10;
	}
	return soma;
}

int Harshad(int number){
    int result;
    result = number % soma(number);
    return result;
}

int main(){
    int number;
    cin>>number;
    
    if(Harshad(number) == 0){
	  cout<<Harshad(number)<<" sim";
	} else {
	  cout<<Harshad(number)<<" nao";
	}
    return 0;
}
