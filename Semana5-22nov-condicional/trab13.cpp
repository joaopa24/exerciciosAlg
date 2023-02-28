#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float extra, falta, cal, grati;
    cin>>extra>>falta;
    
    cal = (extra - ((2/3)*falta)) * 60;
    if(cal > 2400) grati = 500;
    if(cal > 1800 and cal <= 2400) grati = 400;
    if(cal > 1200 and cal <= 1800) grati = 300;
    if(cal > 600 and cal <= 1200) grati = 200;
    if(cal < 600) grati = 100;
    
    cout<<grati;
    return 0;
}

