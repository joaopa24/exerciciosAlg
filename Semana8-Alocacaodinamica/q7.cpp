#include <iostream>
using namespace std;
int main(){
	float *v = new float[2];
	int c = 0;
	float number;
	
	bool values = true;
	while(values){
	   cin>>number;
	   
	   if(number < 0){
	     values = false;
	     break;
	   }
	   
	   if(number >= 2){
	     float *aux = new float[c+1];
	     for(int i=0; i<c; i++){
	       aux[i] = v[i];
	     } 
	     delete [] v;
	     v = aux;
	   }
	   
	   v[c] = number;
	   c++;
	}
	
	float mediana;
	if(c % 2 == 1){
	  mediana = v[c/2];
	} else {
	  mediana = (v[(c/2)-1]+ v[c/2])/2;
	}
	
	cout<<mediana;
	delete [] v;
	
	return 0;
}

