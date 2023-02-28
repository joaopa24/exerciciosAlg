#include <iostream>
using namespace std;

int main(){
    int number, c=0;
    cin>>number;
    
	while(c < number){
	  int d = 0;	
	  while(d < 5){
		  
	    cout<<char(46);//ponto
	    d++;
	    cout<<char(35);
	    d++;
	    if(d == 5) cout<<endl;
	  }
	  c++;
	  while(d < 5){
	    cout<<char(35);//#
	    d++;
	    cout<<char(46);
	    d++;
	    if(d == 5) cout<<endl;
	  }
	  c++;
	}
	return 0;
}



