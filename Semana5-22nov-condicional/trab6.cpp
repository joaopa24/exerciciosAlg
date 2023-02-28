#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float nota1, nota2, nota3, mediap;
	cin>>nota1>>nota2>>nota3;
	
	mediap = ((2*nota1) + (3*nota2) + (5*nota3))/10;
	if(mediap <= 10 and mediap >= 8){
	  cout<<fixed<<setprecision(1)<<mediap<<endl<<"A";     
	}else if(mediap < 8 and mediap >= 7){
      cout<<mediap<<setprecision(1)<<endl<<"B";
    }else if(mediap < 7 and mediap >= 6){
      cout<<mediap<<setprecision(1)<<endl<<"C";
    }else if(mediap < 6 and mediap >= 5){
      cout<<mediap<<setprecision(1)<<endl<<"D";
    } else {
	  cout<<mediap<<endl<<"E";
	}
	return 0;
}

