#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ll n; cin >> n;
    map<ll, ll> m1;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        m1[x] = i+1;
    }
    ll m; cin >> m;
    ll f = 0, s = 0;
    for(ll i = 0; i < m; i++){
        ll x; cin >> x;
        f += m1[x];
        s += n-m1[x]+1;
    }
    cout << f << " " << s << "\n";
    return 0;
}
