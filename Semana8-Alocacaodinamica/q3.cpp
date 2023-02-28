#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int* v = new int[n];

    for (int i = 0;i<n;i++) {
        cin>>v[i];
    }

    int m2 = 0;
    int m3 = 0;
    int m23 = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            m2++;
            cout<<v[i]<<" ";
        }
    }
    if(m2 == n){
	  cout<<0<<endl;
	}
    cout<<endl;
    for (int i = 0; i < n; i++) {
        if (v[i] % 3 == 0) {
            m3++;
            cout<<v[i]<<" ";
        }
    }
    if(m3 == n){
	  cout<<0<<endl;
	}
    cout<<endl;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0 && v[i] % 3 == 0) {
            m23++;
            cout<<v[i]<<" ";
        }
    }
    if(m23 == n){
	  cout<<0<<endl;
	}

    delete [] v;

    return 0;
}
 
