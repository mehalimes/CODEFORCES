#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

int main(){
    int t; cin >> t;
    vector<ll> ans;
    for(int tc = 0; tc < t; tc++){
        int n; cin >> n;
        ll mn = 1e10;
        ll negativeCount = 0;
        vector<ll> v;
        ll sum = 0;
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            mn = min(mn, abs(x));
            v.push_back(x);
            if(x < 0){
                negativeCount++;
            }
        }
        for(int i = 0; i < n; i++){
            sum += abs(v[i]);
        }
        if(negativeCount % 2 == 0){
            ans.push_back(sum);
        }
        else {
            ans.push_back((sum-(2*mn)));
        }
    }
    for(ll x : ans){
        cout << x << "\n";
    }
    return 0;
}
