#include <iostream>
using namespace std;

int main(){
	int number, c=0;
	cin>>number;
    
    int last=0;
	while(c <= number){
	   int d = 0;	
	   while(d < c){
	     d++; 
	     last++;
	   }
	   c++;
	}
	cout<<last;
	return 0;
}

