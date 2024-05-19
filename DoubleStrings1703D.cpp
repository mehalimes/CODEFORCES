#include <iostream>
#include <vector>
#include <string>
#include <map>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    vector<string> ans_vec;
    for(int tc = 0; tc < t; tc++){
        map<string, bool> m1;
        int n; cin >> n;
        vector<string> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            m1[v[i]] = true;
        }
        string s(n, '0');
        for(int i = 0; i < n; i++){
            for(int j = 1; j < (int)v[i].size(); j++){
                string s1 = v[i].substr(0,j), s2 = v[i].substr(j);
                if(m1[s1] && m1[s2]){
                    s[i] = '1';
                }
            }
        }
        ans_vec.push_back(s);
    }
    for(string s : ans_vec){
        cout << s << "\n";
    }
    return 0;
}

