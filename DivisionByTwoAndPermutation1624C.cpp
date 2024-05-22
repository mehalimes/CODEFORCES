#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n; cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        vector<int> rd;
        for(int i = 0; i < n; i++){
            ll val = v[i];
            while(val > n){
                val /= 2;
            }
            rd.push_back(val);
        }
        sort(rd.rbegin(), rd.rend());
        bool ans = true;
        vector<bool> used(n, false);
        for(int i = 0; i < n && ans; i++){
            int val = rd[i];
            while(val > 0 && used[val-1]){
                val /= 2;
            }
            if(val>0 && !used[val-1]){
                used[val-1] = true;
            }
            else {
                ans = false;
            }
        }
        if(ans){
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
