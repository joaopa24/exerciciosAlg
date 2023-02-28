#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int v_max, v_regis;
    float multa;
    cin>>multa>>v_max>>v_regis;
    
    if(v_regis <= (v_max * 1.3)){
	  cout<<"NAO SE APLICA";
	} else {
	  cout<<"R$ "<<fixed<<setprecision(2)<<multa*1.5;
	}
	
	return 0;
}
