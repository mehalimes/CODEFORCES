#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front

// author : mehalimes
// Berland Music codeforces solution

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
        string s; cin >> s;
        vector<ll> ones;
        vector<ll> zeros;
        for(ll i = 0; i < (ll)s.length(); i++){
            if(s[i] == '1'){
                ones.pb(ar[i]);
            }
            else if(s[i] == '0'){
                zeros.pb(ar[i]);
            }
        }
        sort(ones.rbegin(),  ones.rend());
        sort(zeros.rbegin(), zeros.rend());
        vector<pair<ll, ll>> vp;
        map<ll, ll> m1;
        int count = n;
        for(ll i = 0; i < (ll)ones.size(); i++){
            vp.pb({ones[i],count});
            count--;
        }
        for(ll i = 0; i < (ll)zeros.size(); i++){
            vp.pb({zeros[i], count});
            count--;
        }
        for(ll i = 0; i < (ll)vp.size(); i++){
            m1[vp[i].first] = vp[i].second;
        }
        for(ll i = 0; i < n; i++){
            cout << m1[ar[i]] << " ";
        }
        cout << "\n";
    } 
    return 0; 
}

