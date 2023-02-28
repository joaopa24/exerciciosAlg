#include <iostream>
using namespace std;

int main(){
	int number, c=1, v1=0, v2=1,fib=0;
	cin>>number;
	
	if(c == 1 and number > 1){
	   fib = 0;
	   cout<<fib<<endl;
	   c++;
	} else if(c == 1 and number == 1) {
	   cout<<0<<endl;
	}
	if(c == 2 and number > 1){
	   fib = 1;
	   cout<<fib<<endl;
	   c++;
	} 
	while(c <= number and number > 2){
	    fib = v1 + v2;
	    v1 = v2;
	    v2 = fib;
	    cout<<fib<<endl;
	    c++;
	}
	
	return 0;
}

