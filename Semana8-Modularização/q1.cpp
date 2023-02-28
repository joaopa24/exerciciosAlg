#include <iostream>
using namespace std;

float Media(float a, float b){
   return (a + b) / 2;
}
int main(){
    float v1,v2;
    cin>>v1>>v2;
    
    cout<<Media(v1,v2);
    
    return 0;
}
