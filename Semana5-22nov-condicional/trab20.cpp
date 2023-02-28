#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int picanha, alcatra, linguica, espetin, sal, farinha, carv;
    cin>>picanha>>alcatra>>linguica>>espetin>>sal>>farinha>>carv;
    
    float v_compra, descont;
    v_compra = (float) picanha*28.90 + alcatra*19.90 + linguica*7.95 + espetin*2.99 + sal*1.50 + farinha*1.85 + carv*8.70;
    
    if(v_compra <= 200){
       descont = (float) v_compra * 5/100;		
	} else(descont = (float) v_compra * 10/100);
    
    cout<<setprecision(4)<<v_compra<<endl<<descont<<endl<<v_compra - descont;
    
    return 0;
}
