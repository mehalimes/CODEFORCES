#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front

// author: mehalimes
// E1. permutation minimization by deque
// codeforces solution

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
        deque<ll> d;
        d.pb(ar[0]);
        for(ll i = 1; i < n; i++){
            if(ar[i] >= d.front()){
                d.pb(ar[i]);
            }
            else {
                d.pf(ar[i]);
            }
        }
        for(ll i = 0; i < n; i++){
            cout << d[i] << " "; 
        }
        cout << "\n";
    }
    return 0;
}

