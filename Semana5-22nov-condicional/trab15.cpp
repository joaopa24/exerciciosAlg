#include <iostream>
using namespace std;

int main(){
    int day,hour,minutes,duration;
    cin>>day>>hour>>minutes>>duration;
    
    int soma = (day*24*60 + hour*60 + minutes + duration);
    cout<<soma/1440<<" ";
    cout<<(soma%1440)/60<<" ";
    cout<<(soma%1440)%60;
    
    return 0;
}
