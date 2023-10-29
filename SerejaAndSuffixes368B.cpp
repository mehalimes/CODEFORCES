#include <bits/stdc++.h>
#define ll long long int
#define l long 
#define pb push_back
#define pf push_front

// author : mehalimes
// IDEA :   mehalimes 

int main(){
    using namespace std;
    ll n, m; cin >> n >> m;
    vector<ll> numbers;
    vector<ll> ans_ar;
    for(ll i = 0; i < n; i++){
        ll val; cin >> val;
        numbers.pb(val);
    }
    vector<ll> dist;
    set<ll> set1;
    for(ll i = numbers.size()-1; i >= 0; i--){
        set1.insert(numbers[i]);
        dist.pb(set1.size());
    }
    reverse(dist.begin(), dist.end());
    for(ll i = 0; i < m; i++){
        ll val; cin >> val;
        ans_ar.pb(dist[val-1]);
    }
    for(ll i : ans_ar){
        cout << i << "\n";
    }
    return 0;
}

