#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


int main()
{
    ifstream leitura ("entrada.txt");
    
    float distance,x1,y1,x2,y2;
    
    leitura >> x1;
    leitura >> y1;
    leitura >> x2;
    leitura >> y2;
    
    leitura.close();
    distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
       
    cout<<distance; 
    return 0;
}
