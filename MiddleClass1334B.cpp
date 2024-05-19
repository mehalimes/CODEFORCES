#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
// bu soruyu pushlamadın.

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    vector<ll> ans;
    for(int tc = 0; tc < t; tc++){
        double n, x; cin >> n >> x;
        vector<double> v;
        for(ll i = 0; i < n; i++){
            double var; cin >> var;
            v.push_back(var);
        }
        sort(v.rbegin(), v.rend());
        for(ll i = 1; i < n; i++){
            v[i] += v[i-1];
        }
        for(double i = 1; i <= n; i++){
            v[i-1] /= i;
        }
        ll c = 0;
        for(ll i = 0; i < n; i++){
            if(v[i] >= x){
                c++;
            }
            else {
                break;
            }
        }
        ans.push_back(c);
    }
    for(ll x : ans){
        cout << x << "\n";
    }
    return 0;
}
