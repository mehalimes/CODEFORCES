#include <iostream>
#include <vector>
#include <string>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    vector<string> ans;
    for(int i = 0; i < t; i++){
        int a, b, c; cin >> a >> b >> c;
        if((a+b+c)%9!=0){
            ans.push_back("NO");
        }
        else {
            int k = (a+b+c)/9;
            if(a >= k && b >= k && c >= k){
                ans.push_back("YES");
            }
            else {
                ans.push_back("NO");
            }
        }
    }
    for(string x : ans){
        cout << x << "\n";
    }
    return 0;
}

