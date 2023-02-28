#include <iostream>
#include <cstring>
using namespace std;


int main(){
	string palavra;
	getline(cin, palavra);
	int i, c=0;
	
	int p = palavra.length();
	
	for(i=0; i < p ; i++){
	  char w = palavra[i];
	  if(w == 'a' || w == 'e' || w == 'u' || w == 'i' || w == 'o')
	  c++;
	}
	
	cout<<c;
	return 0;
} 
 
