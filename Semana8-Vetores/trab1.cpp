#include <iostream>
using namespace std;

int main(){
	int number;
	cin>>number;
	int M=0, Mi=number;
	int i, cM=0, cMi=0;
	
	int vetor[number];
	for(i=0; i<number; i++){
	   cin>>vetor[i];
	}
	
	//cout<<vetor[0]<<endl<<M;
	
	for(i=0; i<number; i++){
	   int j=0, c=0;
	   while(j < number){
	    if(vetor[j] == vetor[i]){
		  c++;
		}
		j++;
	   }	
	   
	   if(c > M){
	      cM = vetor[i];
	      M = c;
	   }
	}
	
	for(i=0; i<number; i++){
	   int j=0, c=0;
	   while(j < number){
	    if(vetor[j] == vetor[i]){
		  c++;
		}
		j++;
	   }	
	   
	   if(c < Mi){
	      cMi = vetor[i];
	      Mi = c;
	   }
	}
	cout<<cM<<endl<<M<<endl<<cMi<<endl<<Mi;
	
	return 0;
}

