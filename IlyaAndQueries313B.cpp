#include <bits/stdc++.h>
#define ll long long int
#define l long 
#define pb push_back
#define pf push_front

// author : mehalimes
// IDEA :   mehalimes

int main(){
    using namespace std;
    string s; cin >> s;
    ll q; cin >> q;
    vector<pair<ll, ll>> vp;
    for(ll i = 0; i < q; i++){
        ll x, y; cin >> x >> y;
        vp.pb({x,y});
    }
    vector<ll> pref;
    pref.pb(0);
    for(ll i = 0; i+1 < (ll)s.length(); i++){
        if(s[i] == s[i+1]){
            pref.pb(1);
        }
        else {
            pref.pb(0);
        }
    }
    for(ll i = 1; i < (ll)pref.size(); i++){
        pref[i] += pref[i-1];
    }
    for(ll i = 0; i < (ll)vp.size(); i++){
        cout << pref[vp[i].second-1]-pref[vp[i].first-1] << "\n";
    }
    return 0;
}

