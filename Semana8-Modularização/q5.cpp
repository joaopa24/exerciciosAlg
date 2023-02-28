#include <iostream>
using namespace std;

int seq(int a){
  if(a%2 == 0){
    return (a / 2);
  }
  else if(a%2 == 1){
    return (a *3) + 1;
  }else{
    return 0;
  }
}

int main(){
    int number, c=0;
    cin>>number;
    
    cout<<number<<" ";
    while(number != 1){
	  number = seq(number);
	  cout<<number<<" ";
	  c++;
	}
	
	cout<<endl<<c+1;
    return 0;
}
