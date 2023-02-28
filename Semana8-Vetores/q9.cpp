#include <iostream>
using namespace std;

int main(){
    int numbers[7];
    for(int i=0; i<7; i++){
	  cin>>numbers[i];
	}
	
	int c = 0;
	for(int i=0; i<7; i++){
	  if(numbers[i] % 2 == 0){
	    cout<<numbers[i]<<" ";
	  } else c++;
	}
	cout<<endl;
	for(int i=0; i<7; i++){
	  if(numbers[i] % 3 == 0){
	    cout<<numbers[i]<<" ";
	  } else c++;
	}
	cout<<endl;
	for(int i=0; i<7; i++){
	  if(numbers[i] % 2 == 0 and numbers[i] % 3 == 0){
	    cout<<numbers[i]<<" ";
	  } else c++;
	} 
	
	if(c/3 == 7){
	  cout<<0;
	}
	return 0;
}
