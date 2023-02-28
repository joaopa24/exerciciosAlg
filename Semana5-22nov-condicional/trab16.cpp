#include <iostream>
using namespace std;

int main(){
    int n_quarto, time;
    string monster;
    cin>>monster>>n_quarto>>time;
    
    if(monster == "z" or monster == "m"){
	  cout<<1;
	}
	else if(monster == "l" or monster == "d"){
	  cout<<2;   
	}
	else if(monster == "h" or monster == "s"){
	  cout<<3;   
	} else cout<<4;
	
	if(n_quarto == 1) cout<<1;
	if(n_quarto == 2) cout<<2;
	if(n_quarto >= 3) cout<<3;
    
    if(time == 1 or time == 2) cout<<1;
    if(time == 3 or time == 4) cout<<2;
    if(time == 5 or time == 6) cout<<3;
    if(time >= 7) cout<<4;
    
    return 0;
}
