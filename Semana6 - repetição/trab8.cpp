#include <iostream>
using namespace std;

int main(){
	int c=0;
	float number, maior=0, segM=0, sum=0, media=0;
	
	while(c < 7){
	   cin>>number;
	   if(number > maior){
		 segM = maior;
	     maior = number; 
	   } else if(number > segM){
	     segM = number;
	   };
	   sum = sum + number;
	   c++;
	}
	sum = sum - maior - segM;
	media = sum / 5;
	cout<<maior<<endl<<segM<<endl<<media;
	
	return 0;
}

