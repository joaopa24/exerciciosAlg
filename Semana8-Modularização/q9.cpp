#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int modulo(int number){
    if(number >= 0){
	   return number;
	} else {
	   return -number;
	}
}

int main(){
    int numbers, c=0;
    cin>>numbers;
    
    while(c < numbers){
	  int number;
	  cin>>number;
	  cout<<modulo(number)<<endl;
	  c++;
	}
	
    return 0;
}
