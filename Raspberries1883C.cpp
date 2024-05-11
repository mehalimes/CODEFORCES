#include <bits/stdc++.h>
#define ll long long int
using namespace std;
// 1883C Raspberries

int main(){
    int t; cin >> t;
    vector<ll> ans;
    for(int tc = 0; tc < t; tc++){
        int n, k; cin >> n >> k;
        vector<int> v;
        ll mn = 1e10;
        ll oddCount = 0;
        ll evenCount = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x %2 == 0){
                evenCount++;
            }
            else if(x%2 == 1){
                oddCount++;
            }
            v.push_back(x);
        }
        sort(v.rbegin(), v.rend());
        for(int i = 0; i < (int)v.size(); i++){
            int div = v[i]/k;
            if(v[i] % k != 0){
                div++;
            }
            mn = min(mn, ((ll)((div*k)-v[i])));
            if(k == 4){
                if(evenCount >= 2){
                    mn = (ll)0;
                }
                else if(evenCount == 1 && oddCount >= 1){
                    mn = min(mn, (ll)1);
                }
                else if(evenCount == 0 && oddCount >= 2)
                {
                    mn = min(mn, (ll)2);
                }
                else {
                    mn = min(mn, (ll)2);
                }
            }
        }
        ans.push_back(mn);
    }
    for(ll x : ans){
        cout << x << "\n";
    }
    return 0;
}

