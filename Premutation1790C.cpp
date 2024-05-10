#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n; cin >> n;
        vector<pair<ll, ll>> freq_ar;
        for(int i = 0; i < n; i++){
            freq_ar.push_back({0, i+1});
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-1; j++){
                ll x; cin >> x;
                freq_ar[x-1].first += n-j;
            }
        }
        sort(freq_ar.rbegin(), freq_ar.rend());
        for(int i = 0; i < (int)freq_ar.size(); i++){
            cout << freq_ar[i].second << " ";
        }
        cout << "\n";
    }
    return 0;
}

