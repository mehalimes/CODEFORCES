#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    ll t; cin >> t;
    vector<ll> ans;
    for(ll tc = 0; tc < t; tc++){
        ll n; cin >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        vector<ll> dp(n, 0);
        for(ll i = n-1; i >= 0; i--){
            dp[i] = v[i];
            ll nextIndex = i+v[i];
            if(nextIndex < n){
                dp[i] += dp[nextIndex];
            }
        }
        ans.push_back(*max_element(dp.begin(), dp.end()));
    }
    for(ll x : ans){
        cout << x << "\n";
    }
    return 0;
}
