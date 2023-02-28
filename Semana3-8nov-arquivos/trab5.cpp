#include <iostream>
#include <fstream>
#include <iomanip> 
#include <iostream>

using namespace std;

int main(){
	float n1, p1, n2, p2, n3, p3;
	
	ifstream file("notas.txt");
	
	file>>n1;
	file>>p1;
	file>>n2;
	file>>p2;
	file>>n3;
	file>>p3;

	file.close();
	
	float mediap = (float)(n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3);
	
	ofstream newFile("final.txt");

	newFile << setprecision(2) << fixed << mediap;
	
	cout << setprecision(2) << fixed << mediap;
	return 0;
}

