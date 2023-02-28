#include <iostream>
#include <fstream>

using namespace std;
int main(){
	string namefile, m1, m2;
	cin>>namefile;
	
	float m1b1, m1b2, m2b1, m2b2, media1, media2;
	
	ifstream file(namefile);
	file>>m1;
	file>>m1b1;
	file>>m1b2;
	file>>m2;
	file>>m2b1;
	file>>m2b2;
	
	media1 = (m1b1 + m1b2) / 2;
	media2 = (m2b1 + m2b2) / 2;
	
	cout<<m1<<" -> "<<media1<<endl<<m2<<" -> "<<media2;
 	
	return 0;
}

