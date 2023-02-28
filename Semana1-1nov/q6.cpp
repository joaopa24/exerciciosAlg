#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int money;
	cin>>money;
	int Bchoco, Tchoco, Bmorang;
	
	Bchoco = money / 17;
    Tchoco = (money % 17) / 5;
    Bmorang = (money % 17 % 5) / 1;	

	cout<<Bchoco<<endl<<Tchoco<<endl<<Bmorang;
	return 0;
}
