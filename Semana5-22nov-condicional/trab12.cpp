#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int code, country;
    float weight, weightConvert;
    float priceConvert, taxes, priceTotal;
    cin>>code>>weight>>country;
    
    weightConvert = weight * 1000;
    if(code >= 1 and code <= 4){
	  priceConvert = weightConvert * 10;
	} else if (code >= 5 and code <= 7){
	  priceConvert = weightConvert * 25; 
	} else priceConvert = weightConvert * 35; 
    
    if(country == 1) taxes = 0;
    if(country == 2) taxes = priceConvert * 15 / 100;
    if(country == 3) taxes = priceConvert * 25 / 100;
    
    priceTotal = taxes + priceConvert;
    cout<<fixed<<setprecision(1)<<weightConvert<<endl<<priceConvert<<endl<<taxes<<endl<<priceTotal;
}

