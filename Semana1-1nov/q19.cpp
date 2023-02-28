#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int products, productsComum, productsLuxo, pcurrent;
	cin>>products;
	
	pcurrent = 0;
	productsComum = 0;
	productsLuxo = 0;
	
	while(pcurrent <= products) {
       productsComum = productsComum + 1;
       pcurrent = (productsComum + productsLuxo);
       
       if(pcurrent >= products){
	    break;
	   };
	   
	   productsComum = productsComum + 1;
	   pcurrent = (productsComum + productsLuxo);
	   
	   if(pcurrent >= products){
	    break;
	   };
       
	   productsLuxo = productsLuxo + 1;
	   pcurrent = (productsComum + productsLuxo);
	   
	   if(pcurrent >= products){
	    break;
	   };
	}
  
	cout<<productsComum<<endl<<productsLuxo;
	return 0;
}


