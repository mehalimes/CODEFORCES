#include <iostream>
#include <vector>
#define ll long long int
#define pb push_back
using namespace std;
// C Ski Resort

int main(){
    ll t; cin >> t;
    for(ll tc = 0; tc < t; tc++){
        ll n, k, q; cin >> n >> k >> q;
        vector<ll> v;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x <= q){
                v.pb(1);
            }
            else{
                v.pb(0);
            }
        }
        vector<ll> segments;
        for(ll i = 0; i < (ll)v.size(); i++){
            if(v[i] == 1){
                ll c = 0;
                while(i < (ll)v.size() && v[i] == 1){
                    i++;
                    c++;
                }
                segments.pb(c);
                c = 0;
            }
        }
        ll ans = 0;
        for(ll segment : segments){
            vector<ll> count(segment);
            for(ll i = segment, j = 0; i >= 1 && j < (ll)count.size(); i--, j++){
                count[j] = i;
            }
            for(ll i = 0; i < (ll)count.size(); i++){
                if(i+1 >= k){
                    ans += count[i];;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
