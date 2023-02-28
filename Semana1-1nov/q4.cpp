/#include <iostream>
using namespace std;

int main()
{   
	int number, sum;
	int number1, number2, number3;
	
	cin>> number;
	number1 = (number / 100) % 10;
	number2 = (number / 10) % 10;
	number3 = (number / 1) % 10;
	sum = number1 * number2 * number3;
	cout<<sum;
    return 0;
}
