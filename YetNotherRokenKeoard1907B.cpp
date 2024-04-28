#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#define ll long long int
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc = 0; tc < t; tc++){
        string s; cin >> s;
        stack<pair<int, char>> U;
        stack<pair<int, char>> L;
        for(int i = 0; i < (int)s.length(); i++){
            if(s[i] == 'b' && (int)L.size() > 0){
                L.pop();
            }
            else if(s[i] == 'B' && (int)U.size() > 0){
                U.pop();
            }
            else if(s[i] <= 'Z' && s[i] >= 'A'){
                if(s[i] != 'B'){
                    U.push({i, s[i]});
                }
            }
            else if(s[i] <= 'z' && s[i] >= 'a'){
                if(s[i] != 'b'){
                    L.push({i,s[i]});
                }
            }
        }
        vector<pair<int, char>> ans;
        while(!U.empty()){
            ans.push_back(U.top());
            U.pop();
        }
        while(!L.empty()){
            ans.push_back(L.top());
            L.pop();
        }
        sort(ans.begin(), ans.end());
        for(const pair<int, char> p : ans){
            cout << p.second;
        }
        cout << "\n";
    }
}
