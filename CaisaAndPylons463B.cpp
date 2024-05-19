#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    v.push_back(0);
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    int e = 0, ms = 0;
    for(int i = 0; i+1 < n+1; i++){
        if(v[i] <= v[i+1] && e >= abs(v[i]-v[i+1])){
            e -= abs(v[i]-v[i+1]);
        }
        else if(v[i] <= v[i+1] && e < abs(v[i]-v[i+1])){
            ms += abs(v[i]-v[i+1])-e;
            e = 0;
        }
        else {
            e += abs(v[i]-v[i+1]);
        }
    }
    cout << ms << "\n";
    return 0;
}
