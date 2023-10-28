#include <bits/stdc++.h>
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
        vector<pair<ll, ll>> vp(n,{0,0});
        for(int i = 1; i <= n; i++){
            vp[i-1].first = i;
            vp[i-1].second = ar[i-1];
        }
        for(ll i = 1; i <= n; i++){
            ll x = vp[i-1].second;
            ll c = 1;
            while(x != i){
                x = vp[x-1].second;
                c++;
            }
            cout << c << " ";
        }
        cout << "\n";
    }
    return 0;
}

