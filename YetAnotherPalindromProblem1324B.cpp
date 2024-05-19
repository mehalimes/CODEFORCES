#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    int t; cin >> t;
    vector<string> ans;
    for(int tc = 0; tc < t; tc++){
        int n; cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        bool ok = false;
        for(int i = 0; i < n && !ok; i++){
            for(int j = i+2; j < n && !ok; j++){
                if(v[i] == v[j]){
                    ok = true;
                }
            }
        }
        (ok ? ans.push_back("YES") : ans.push_back("NO"));
    }
    for(string s : ans){
        cout << s << "\n";
    }
    return 0;
}
