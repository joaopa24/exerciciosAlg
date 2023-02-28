#include <iostream>
using namespace std;

int main(){
    int gender, age;
    float time, ageResult;
    cin>>gender>>age>>time;
    
    if(gender == 0){
	  if(time > 15){
		 ageResult = (float) age + (30-time)*130/100 ;
	  }
	  if(time <= 15){
	     ageResult = 62;
	  }
	}
	
	 if(gender == 1){
	  if(time > 20){
		 ageResult = (float) age + (35-time)*130/100;
	  }
	  if(time <= 20){
	     ageResult = 65;
	  }
	}
    
    cout<<ageResult;
    return 0;
}
