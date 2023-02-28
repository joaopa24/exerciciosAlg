#include <iostream>
#include <cstring>
using namespace std;


int main(){
	char v[100];
	cin.getline(v, 100);
	int tm = strlen(v);
	
	char v2[100];
	cin.getline(v2, 100);
	int tm2 = strlen(v2);
	
	int tm3 = tm + tm2;
	char* v3 = new char[tm3];
	
	strcpy(v3, v);
	v3[tm] = ' ';
	strcpy(v3 + tm + 1, v2);
	
	cout<<v3;
	return 0;
} 
 
