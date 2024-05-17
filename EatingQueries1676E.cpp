#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1676E Eating Queries

int main(){
    int t; cin >> t;
    vector<int> ans;
    for(int tc = 0; tc < t; tc++){
        int n, q; cin >> n >> q;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v[i] = x;
        }
        sort(v.rbegin(), v.rend());
        for(int i = 1; i < n; i++){
            v[i] += v[i-1];
        }
        for(int i = 0; i < q; i++){
            int qi; cin >> qi;
            vector<int>::iterator it;
            it = lower_bound(v.begin(), v.end(), qi);
            if(it != v.end()){
                ans.push_back(((it-v.begin())+1));
            }
            else {
                ans.push_back(-1);
            }
        }
    }
    for(int x : ans){
        cout << x << "\n";
    }
    return 0;
}
