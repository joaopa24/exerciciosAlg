#include <iostream>
using namespace std;

struct date {
    int day;
    int month;
    int year;
};
struct Pessoa {
    string name;
    date data;
};

int main(){
	int n;
	cin>>n;
	Pessoa v[n];
	
	for(int i=0; i<n; i++){
	  cin>>v[i].name>>v[i].data.day>>v[i].data.month>>v[i].data.year;
	}
	
	Pessoa maisVei = v[0];
	
	for(int i=0; i<n; i++){
	  if((v[i].data.year < maisVei.data.year) or (v[i].data.year == maisVei.data.year and v[i].data.month < maisVei.data.month) or (v[i].data.year == maisVei.data.year and v[i].data.month == maisVei.data.month and v[i].data.day < maisVei.data.day)){
	   maisVei = v[i];
	  }
	}
	
	cout<<maisVei.name;
	
	return 0;
}

