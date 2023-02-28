#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string wordPt, wordEng, fileP, fileI, fileD;
    cin>>fileP>>fileI>>fileD;
    
    ifstream f1(fileP);
    ifstream f2(fileI);
    ofstream f3(fileD);
    
    while(f1 >> wordPt){
	   f2>>wordEng;
	   f3<<wordPt<<": "<<wordEng<<endl;
	}

}
