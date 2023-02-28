#include <iostream>
using namespace std;

int main(){
	int number, c=0;
	cin>>number;

	while(c <= number){
	   int d = 0;	
	   while(d < c){
	     cout<<char(97+d)<<" ";
	     d++; 
	   }
	   cout<<endl;
	   c++;
	}
	
	return 0;
}

