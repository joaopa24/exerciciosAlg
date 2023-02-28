#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    int hora, minutos;
    cin>>hora;
    cin>>minutos;
    
    int a, b,c;
    a = hora * 60;
    b = a + minutos;
    c = b * 60;
    
    ofstream escrever ("saida.txt");
   
    escrever<<a<<endl;
    escrever<<b<<endl;
    escrever<<c;
    
    escrever.close();
    cout<<a<<endl<<b<<endl<<c; 
    return 0;
}
