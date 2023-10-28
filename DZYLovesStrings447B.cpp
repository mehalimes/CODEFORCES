#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front

// author : mehalimes

int main(){
    using namespace std;
    string s; cin >> s;
    int k; cin >> k;
    vector<ll> ls;
    ll mx = LONG_MIN;
    for(ll i = 0; i < 26; i++){
        ll val; cin >> val;
        mx = max(mx, val);
        ls.pb(val);
    }
    ll sum = 0LL;
    for(ll i = 1; i <= (ll)s.length()+k; i++){
        if(i <= (ll)s.length()){
            sum += (ls[s[i-1]-'a']*i);
        }
        else if(i > (ll)s.length()){
            sum += (mx*i);
        }
    }
    cout << sum << "\n";
    return 0;
}

