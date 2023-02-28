#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string pt, ing, dicio;
    cin>>pt>>ing>>dicio;
    int c=0;
    
    ifstream file("portugues.txt");
    ifstream file2("ingles.txt");
    ofstream newFile(dicio);
    string ptword, ingWord, dword;
    while(file>>ptword){
	   c++;
	}
    
    ifstream textfile;
    textfile.open("dicionario.txt");
    int d = 0;
    while(d < c){
	   int e = 0;
	   while(e < c){
		 file>>ptword;
	     file>>ingWord;	
	     textfile>>ptword>>ingWord;
	     cout<<ptword<<": "<<ingWord<<endl;
	     e++;
	   }	

	   d++;
	}
    
     

	return 0;
}



