#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string nomeArquivo;
	cin>>nomeArquivo;
    ifstream file(nomeArquivo);
    
    string r1, r2, r3, nameCurrent;
    int c = 0, d = 0;
    int c1=0, c2=0, c3=0;
    file>>r1>>r2>>r3>>d;

    while(c < d){
	  file>>nameCurrent;
	  if(nameCurrent == r1){
	    c1++; 
	  } else if(nameCurrent == r2){
	    c2++;
	  } else {
	    c3++;
	  }
	  c++;
	}
	
	if(c1 > c2 and c1 > c3) cout<<c1; 
	if(c2 > c1 and c2 > c3) cout<<c2;    
    if(c3 > c1 and c3 > c2) cout<<c3;    
    return 0;   
}
