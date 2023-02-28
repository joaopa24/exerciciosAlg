#include <iostream>
#include <fstream>
#include <iomanip> 
#include <iostream>

using namespace std;

int main(){
	string name1, name2, name3;
	cin>> name1;
	cin>> name2;
	cin>> name3;
	
	ifstream file1(name1);
	ifstream file2(name2);

	string word1, word2, wordsum;
	file1>>word1;
	file2>>word2;
    
    wordsum = word1 + " " + word2;
    
	ofstream newFile(name3);
	newFile<< wordsum;
	
	cout << wordsum;
	return 0;
}

