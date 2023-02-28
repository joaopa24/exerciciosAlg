#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int calculo(int number){
    if(number%3 != 0){
	  return number;
	}
	return 0;
}

int main(){
    string nameFile;
    cin>>nameFile;
    
    int number;
    ifstream file(nameFile);
    ofstream newFile("saida.txt");
    while(file>>number){
	  if(calculo(number) != 0){
		newFile<<number<<" ";  
	  }	
	}
	
    return 0;
}
