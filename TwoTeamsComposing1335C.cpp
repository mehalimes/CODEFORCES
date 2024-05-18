#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long int 
using namespace std;

int main(){
    int t; cin >> t;
    vector<ll> ans;
    for(int tc = 0; tc < t; tc++){
        int n; cin >> n;
        set<int> s;
        vector<int> freq_ar(2e5, 0);
        ll mxEq = -2e5;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            s.insert(x);
            freq_ar[x-1]++;
        }
        for(int i = 0; i < 2e5; i++){
            mxEq = max(mxEq, (ll)freq_ar[i]);
        }
        if((ll)s.size() == mxEq){
            ans.push_back(mxEq-1);
        }
        else if((ll)s.size() > mxEq){
            ans.push_back(min((ll)s.size(), mxEq));
        }
        else if((ll)s.size() < mxEq){
            ans.push_back(min((ll)s.size(), mxEq));
        }
    }
    for(ll x : ans){
        cout << x << "\n";
    }
    return 0;
}
