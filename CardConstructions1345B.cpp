#include <iostream>
#include <vector>
#include <cmath>
#define ll long long int
using namespace std;

ll calcTower(ll p){
    if(p == 0){
        return 0;
    }
    ll s = calcTower(p-1);
    s += (p*3);
    return s-1;
}

int main(){
    ll t; cin >> t;
    vector<ll> ans;
    for(ll tc = 0; tc < t; tc++){
        ll n; cin >> n;
        vector<ll> v(floor(sqrt(n)), 0);
        for(ll i = 0; i < (ll)v.size();i++){
            v[i] = calcTower(i+1);
        }
        ll c = 0;
        ll i = (ll)v.size()-1;
        while(n >= 2 && i>=0){
            if(n >= v[i]){
                n -= v[i];
                c++;
            }
            else {
                i--;
            }
        }
        ans.push_back(c);
    }
    for(ll x : ans){
        cout << x << "\n";
    }
    return 0;
}
