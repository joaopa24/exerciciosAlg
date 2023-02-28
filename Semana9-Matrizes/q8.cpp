#include <iostream>

using namespace std;

int main() {
    double m[4][4];

    for(int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            cin>>m[i][j];
        }
    }

    int n_cities=0;
    cin>>n_cities;

    int iti[n_cities];
    for(int i = 0;i<n_cities;i++) {
        cin>>iti[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n_cities-1; i++) {
        int from_city = iti[i];
        int to_city = iti[i+1];
        sum += m[from_city][to_city];
    }

    cout<<sum<<endl;

    return 0;
}
