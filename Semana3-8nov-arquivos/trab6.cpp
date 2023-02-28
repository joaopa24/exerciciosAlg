#include <iostream>
#include <fstream>
#include <iomanip> 
#include <iostream>

using namespace std;

int main(){
	ifstream file("dados.txt");
	float n1,n2,n3,n4,n5,n6,n7,n8;
	
	file>>n1;
	file>>n2;
	file>>n3;
	file>>n4;
	file>>n5;
	file>>n6;
	file>>n7;
	file>>n8;

	file.close();
	
	float media = (float) (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8) / 8;
	
	ofstream newFile("media.txt");

	newFile << setprecision(3) << fixed << media;
	
	cout << setprecision(3) << fixed << media;
	return 0;
}


