#include <iostream>
#include <cstring>
using namespace std;


int main(){
	char v[100];
	cin.getline(v, 100);
	int tm = strlen(v);
	//int tm = ((strlen(v)/2)+1);
	
	char v2[100];
	cin.getline(v2, 100);
	int tm2 = strlen(v2);
	
	int tm3 = tm + tm2;
	char *v3 = new char[tm3];
	
	memcpy(v3, v, sizeof(v));
	memcpy(v3 + tm, v2, sizeof(v2));
	
	cout<<v3;
	return 0;
}
 
