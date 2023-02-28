#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
	int number, n100, n50, n10;
	cin>>number;
    
    n100 = number / 100;
    n50 = (number % 100) / 50;
    n10 = (number % 100 % 50) / 10;
    
    ofstream newFile ("saque.txt");
    
    newFile<<n100<<endl<<n50<<endl<<n10;
    
    cout<<n100<<endl<<n50<<endl<<n10;
	return 0;
}



