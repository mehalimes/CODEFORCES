#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    ll t; cin >> t;
    vector<ll> ans;
    for(ll tc = 0; tc < t; tc++){
        ll a, b, x, y, n; cin >> a >> b >> x >> y >> n;

        ll dif1 = a-x;
        ll dif2 = b-y;

        ll tempA1 = a;
        ll tempA2 = a;
        ll tempB1 = b;
        ll tempB2 = b;
        ll tempN1 = n;
        ll tempN2 = n;
        
        ll ans1 = 0;
        ll ans2 = 0;
        
        tempA1 -= min(dif1, tempN1);
        tempN1 -= min(dif1, tempN1);
        tempB1 -= min(dif2, tempN1);
        tempN1 -= min(dif2, tempN1);

        tempB2 -= min(dif2, tempN2);
        tempN2 -= min(dif2, tempN2);
        tempA2 -= min(dif1, tempN2);
        tempN2 -= min(dif1, tempN2);

        ans1 = tempA1*tempB1;
        ans2 = tempA2*tempB2;

        ans.push_back(min(ans1, ans2));
    }
    for(ll x : ans){
        cout << x << "\n";
    }
    return 0;
}
