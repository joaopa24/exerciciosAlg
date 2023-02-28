#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int grau;
    float x,y,result;
    cin>>grau>>x>>y;
    
    if(grau > 360){
	    grau = grau % 360;
	}
    
    if(grau > 0 and grau < 90){
	   result = (float) x + y;
	   cout<<setprecision(1)<<fixed<<result;
	} else if (grau > 90 and grau < 180){
	   result = x * y;
	   cout<<setprecision(1)<<fixed<<result;
	} else if (grau > 180 and grau < 270){
	   result = (float) x / y;
	   cout<<setprecision(1)<<fixed<<result;
	} else {
	   result = pow(x,y);
	   cout<<setprecision(1)<<fixed<<result;
	}
    return 0;
}
