#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float v1, v2, distance, time;
    cin>>v1>>v2>>distance;
    
    time = distance / (v1+v2);
    if(time > 10) cout<<setprecision(4)<<time;
    else cout<<"COLISAO";
    return 0;
}
