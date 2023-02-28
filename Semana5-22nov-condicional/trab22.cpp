#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int carga, q_cavalos, q_vacas, q_galinhas;
    cin>>carga>>q_cavalos>>q_vacas>>q_galinhas;
    
    while(carga >= 2 and q_galinhas != 0){
	     carga = carga - 2;
	     q_galinhas = q_galinhas - 1;
	       
	}
	while(carga >= 150 and q_vacas != 0){
	     carga = carga - 150;
	     q_vacas = q_vacas - 1;
	       
	}
	while(carga >= 250 and q_cavalos != 0){
	     carga = carga - 250;
	     q_cavalos = q_cavalos - 1;
	       
	}
    cout<<q_cavalos<<endl<<q_vacas<<endl<<q_galinhas;
    
    return 0;
}
