#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int
#define pb push_back
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n; cin >> n;
        cout << 2 << "\n";
        cout << n << " " << n-1 << "\n";
        if(n!=2)
        cout << n << " " << n-2 << "\n";
        for(int i = n-1; i-2>=1; i--){
            cout << i << " " << i-2 << "\n";
        }
    }
}
