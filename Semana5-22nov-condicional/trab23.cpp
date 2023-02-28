#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    float n1,n2,n3,n4;
    cin>>n1;
    float maior, segM;
    
    maior = n1;
    segM = n1;
    
    cin>>n2;
    if(n2 > maior){
	   segM = maior;
	   maior = n2;
	} else {
	   segM = n2;
	}
	
	cin>>n3;
	if(n3 > maior){
	  segM = maior;
	  maior = n3;
	} else if (n3 > segM){
	  segM = n3;
	}
	
	cin>>n4;
	if(n4 > maior){
	  segM = maior;
	  maior = n4;
	} else if(n4 > segM){
	  segM = n4;
	}

	cout<<maior<<endl<<segM;
    return 0;
}
