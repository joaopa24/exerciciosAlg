#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream file ("entrada.txt");
    int number, result=1, c=1;
    file>>number;
    file.close();
    
    while(c <= number){
	   result = (c * result);
	   c = c + 1;
	}
    
    ofstream newFile ("saida.txt");
    newFile<<result;
    return 0;
}
 
