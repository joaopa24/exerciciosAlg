#include <iostream>
using namespace std;

int main(){
	int number;
	cin>>number;
	
	int vetor[number];
	
	int c,d, students=1;
    for(c=0; c<number; c++){
	   cin>>vetor[c];
	}
	
	for(c=1;c<number;c++){
	   d = vetor[0];
	   if(d != vetor[c]){
	      students++;
	   }
	}
	
	cout<<students;
	return 0;
}

