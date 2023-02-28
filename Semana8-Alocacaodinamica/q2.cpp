#include <iostream>
#include <cstring>
using namespace std;



int main(){
	int length = 2;
	int *v = new int[length];
	
	int c = 0; // contador
	int number;
	cin>>number;
	while(number != -1){
	   if(c == length){
		  int *aux = new int[length + 2];
		  for(int i=0; i<length; i++){
		    aux[i] = v[i];
		  }  
		  delete [] v;
		  v = aux;
		  length += 2;
	   }
	   
	   v[c] = number;
	   c++;
	   
	   cin>>number;
	}
	
	int middle = 0;
	if(c % 2 == 1){
       middle = c/2;
       cout<<v[middle]/2.0;
    }
    else if(c % 2 == 0){
	   middle = c/2;
	   cout<<(v[middle]+v[middle-1])/2.0;
	}
	
	return 0;
} 
 
