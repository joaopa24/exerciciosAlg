#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    string sc, gr;
    float angulo,result;
    cin>>sc>>gr>>angulo;
    
    if(gr == "g"){
	    angulo = (angulo*M_PI) / 180;
	}
    if(sc == "s"){
		result = sin(angulo);
    } else result = cos(angulo);
    
    cout<<fixed<<setprecision(4)<<result;
    return 0;
}
