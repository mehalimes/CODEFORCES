#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
#define pb push_back
#define pf push_front

// author : mehalimes

int main(){
    using namespace std;
    ll t; cin >> t;
    for(ll tc = 0; tc < t; tc++){
        ll n; cin >> n;
        vector<ll> ar;
        for(ll i = 0; i < n; i++){
            ll val; cin >> val;
            ar.pb(val);
        }
        bool inc = false, flag = false;
        for(ll i = 0; i+1 < n; i++){
            if(ar[i] < ar[i+1]){
                inc = true;
            }
            if(inc && ar[i] > ar[i+1]){
                flag = true;
            }
        }
        cout << (flag ? ("NO") : ("YES")) << "\n";
    }
    return 0;
}

