#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int calculo(int anoanterior, int anoposterior, int c,){
	int maiordif=1, menordif=1;
    int yearMaior=0, yearMenor=0;
    //int dif = anoposterior - anoanterior;
    
    return 1;
}

int main(){
    int ano, q_anos, pubI, pubP, c=1;
    cin>>ano>>q_anos>>pubI;
    
    while(c < q_anos){
	   if(calculo(pubI,pubP) > maiordif){
	      maiordif = calculo(pubI,pubP);
	      
 	   }
 	   else if(calculo(pubI,pubP) < menordif){
	      menordif = calculo(pubI,pubP);
	      yearMenor = (ano + c);
	   }
	   c++;
	}
	cout<<yearMaior<<endl<<yearMenor;
	
    return 0;
}
