#include <iostream>
using namespace std;

int main()
{
    float value, v_vista, v_5x, v_10xj;
    cin>>value;
    
    v_vista = value * 0.9;
    v_5x = value / 5;
    v_10xj = (value * 1.2) / 10;

    cout.precision(5); 
    cout<<v_vista<<endl<<v_5x<<endl<<v_10xj<<endl;
    return 0;
}
