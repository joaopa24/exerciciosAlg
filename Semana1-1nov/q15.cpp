#include <iostream>
using namespace std;

int main()
{
    int current, current50, current10, current5, current1;
    cin>>current;
    
    current50 = current / 50;
    current10 = (current % 50) / 10;
    current5 = (current % 50 % 10) / 5;
    current1 = (current % 50 % 10 % 5) / 1;
    
    cout<<current50<<endl<<current10<<endl<<current5<<endl<<current1;
    return 0;
}
