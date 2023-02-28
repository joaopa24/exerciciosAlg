#include <iostream>
#include <fstream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main(){
	int number,primo1, primo2, primo3,r1, r2, r3;
	cin>>number;
	
	ifstream file ("chaves.txt");
	file>>primo1;
	file>>primo2;
	file>>primo3;
	
	file.close();
	
	r1 = number % primo1;
	r2 = number % primo2;
	r3 = number % primo3;
    
    ofstream newFile ("codigo.txt");
    
    newFile<<r1<<endl<<r2<<endl<<r3;
    
    cout<<r1<<endl<<r2<<endl<<r3;
	return 0;
}



