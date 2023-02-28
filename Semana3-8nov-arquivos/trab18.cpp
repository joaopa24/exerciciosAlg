#include <iomanip>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
	float sal, grat, percen;
	cin>>sal;
	cin>>grat;
	cin>>percen;
	
	float v_brut, v_desc, v_liq;
	v_brut = sal + grat;
	v_desc = v_brut * (percen / 100);
	v_liq = v_brut * ((100 - percen) / 100);
	
	ofstream newFile("holerite.txt");
	
	newFile<<setprecision(2)<<fixed<<v_brut<<endl<<v_desc<<endl<<v_liq;
	cout<<setprecision(2)<<fixed<<v_brut<<endl<<v_desc<<endl<<v_liq;
	
	return 0;
}

