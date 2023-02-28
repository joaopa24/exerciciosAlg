#include <iostream>
using namespace std;

struct kid {
    string name;
    string gift;
    int goods;
    int bads;
    int dif;
};

int main(){
    int n;
    cin>>n;
    
     kid v[n];
     for(int i=0; i<n; i++){
      cin>>v[i].name>>v[i].gift>>v[i].goods>>v[i].bads;
     }
     
     for(int i=0; i<n; i++){
      v[i].dif = v[i].goods - v[i].bads;
     }
     
     int c = 0;
     for(int i=0; i<n; i++){
      if(v[i].dif > 0){ 
	    cout<<v[i].name<<" ";
	    c++;
	  }
     }
     
     cout<<endl;
     
     for(int i=0; i<n; i++){
       if(v[i].dif > 0){
	     int count = 0;
	     for(int j=0; j<n; j++){
	       if(v[j].gift == v[i].gift){
		     count++;
		   }
	     }
	     cout<<v[i].gift<<" "<<count<<endl;
	   }
     }
     
     
       
    return 0;
}


