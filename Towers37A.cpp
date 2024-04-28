#include <iostream>
#include <vector>
#include <set>
#define ll long long int
#define pb push_back
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    set<int> c;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v[i] = x;
        c.insert(x);
    }
    vector<int> freq_ar(1000, 0);
    for(int i = 0; i < n; i++){
        freq_ar[v[i]-1] += 1;
    }
    int mxL = -1;
    int mxC = -1;
    for(int i = 0; i < 1000; i++){
        int len = freq_ar[i]*(i+1);
        if(len > mxL){
            mxC = max(mxC, freq_ar[i]);
        }
    }
    cout << mxC << " " << ((int)c.size()) << "\n";
    return 0;
}
