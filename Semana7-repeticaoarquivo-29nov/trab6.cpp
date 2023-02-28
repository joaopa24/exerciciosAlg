#include <iostream>
#include <fstream>

using namespace std;

int main(){
	int number;
    ifstream file("numeros");
    
    ofstream newFile("pares");
	ofstream textfile;
	textfile.open ("pares");
	    
    ofstream newFile2("impares");
	ofstream textfile2;
	textfile2.open ("impares");
    
	while(file >> number){
	  if(number%2==0){
	    textfile<<number<<" ";
	  } else {
	    textfile2<<number<<" ";
	  }
	}
	
	newFile2.close();
	newFile.close();
    return 0;
}
