#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front

// author : mehalimes
// IDEA : Editorial

int main(){
    using namespace std;
    ll n, m; cin >> n >> m;
    vector<ll> v;
    for(ll i = 0; i < n; i++){
        ll val; cin >> val;
        v.pb(val);
    }
    for(ll i = 0; i < n; i++){
        if(v[i] % m == 0){
            v[i] = (v[i]/m);
        }
        else if(v[i] % m != 0){
            v[i] = floor(v[i]/m)+1;
        }
    }
    ll mx = LONG_MIN;
    for(ll i = 0; i < n; i++){
        mx = max(mx, v[i]);
    }
    for(ll i = n-1; i >= 0; i--){
        if(v[i] == mx){
            cout << i+1 << "\n";
            break;
        }
    }
    cout << "\n";
    return 0;
}

