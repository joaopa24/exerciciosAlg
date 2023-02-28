#include <iostream>
#include <iomanip>
using namespace std;

float incli(int altura, int base){
    float inclin;
    inclin = float((altura * 100.0)/base * 1.0);
    return inclin;
}

int main(){
    int q_rampas, altura, base, c=0, c1=0;
    cin>>q_rampas;
    
    while(c < q_rampas){
	   cin>>altura>>base;
	   c++;	 
	   cout<<fixed<<setprecision(1)<<incli(altura,base)<<endl;
	   if(incli(altura,base) <= 8.0){
	     c1++;
	   }
	}
	cout<<c1;
    return 0;
}
