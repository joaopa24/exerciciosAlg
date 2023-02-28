#include <iostream>
#include <iomanip>
using namespace std;

int main(){
     int a,b;
     int c = 0;
     cin>>a>>b;
      
     while(a>=b){
		a = a - b;
		c++;
	 }
     cout<<c;	 
	 return 0;
}

