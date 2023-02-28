#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ifstream cont("entrada.txt");
    int c = 0, d = 0;
    float number;
    while(cont>>number){
	  c++;
	}
	
	float distance, speed, time;
	while(d < (c/3)){
	  int e = 0;	
	  ifstream textfile;
	  textfile.open("entrada.txt");
	  
	  while(e < (c/3)){ 
	    textfile>>distance>>speed>>time;
	    cout<<setprecision(2)<<fixed<<distance/1.852<<" "<<((speed*time)+distance)/1.852<<endl;
	    d++;
	    e++;
	  }
	}
    return 0;
}
