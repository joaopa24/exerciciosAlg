#include <iostream>
using namespace std;

int main(){
	int number, c=0;
	cin>>number;
    
    float maiorT=0, menorT=0;
    int cM=0, cF=0, cT=0;
    float mediaM=0, mediaF=0;
    while(c < number){
      float altura;
      string gender;
      cin>>altura>>gender;
      
      if(c == 0){
		  menorT = altura;
	  }
      if(altura > maiorT){
	    maiorT = altura;
	    cT++;
	  }
	  if(altura < menorT){
	    menorT = altura;
	    cT++;
	  }
	  if(gender == "m"){
	     mediaM = mediaM + altura;
	     cM = cM + 1;
	  }
	  if(gender == "f"){
	     mediaF = mediaF + altura;
	     cF = cF + 1;
	  }
	  c++;
    }
    cout<<maiorT<<endl<<menorT<<endl;
    if(cF > 0){
		cout<<mediaF/cF<<endl;
	} else cout<<"erro"<<endl;
    if(cM > 0){
		cout<<mediaM/cM<<endl;
	} else cout<<"erro"<<endl;
	cout<<(mediaM+mediaF)/(cM+cF);
	
	return 0;
}













