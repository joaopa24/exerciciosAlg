#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

string roman(int number){
	 if(number >= 1 and number <= 50){
	  if(number == 9){
		 cout<<"IX";
	     number = number - 9;
	  }	 
      while(number >= 10){
	  cout<<"X";
	  number = number - 10;
	  }
	  
	  while(number >= 5){
	  cout<<"V";
	  number = number - 5;
	  }
	  if(number == 4){
	  cout<<"IV";
	  number = number - 4;	  
	  }
	  while(number < 5 and number >= 1){
	   cout<<"I";
	   number = number - 1;
	  }  
    } else if(number > 50){
		cout<<"NUMERO INVALIDO";
    };
    return 0;
}

int main(){
    int number;
    
    while(number > 0){
		cin>>number;
		cout<<roman(number);
		cout<<endl;
	} 
    
    return 0;
}

