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
        int oddCount = 0;
        int evenCount = 0;
        int oneDifCount = 0;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x % 2 == 0){
                evenCount++;
            }
            else {
                oddCount++;
            }
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(int i = 0; i+1 < (int)v.size();){
            if(abs(v[i]-v[i+1]) == 1){
                oneDifCount++;
                i+=2;
            }
            else {
                i++;
            }
        }
        if(evenCount % 2 == 0 && oddCount % 2 == 0){
            ans.push_back("YES");
        }
        else if(evenCount % 2 == 1 && oddCount % 2 == 1){
            if(oneDifCount > 0){
                ans.push_back("YES");
            }
            else {
                ans.push_back("NO");
            }
        }
        else {
            ans.push_back("NO");
        }
    }
    for(string x : ans){
        cout << x << "\n";
    }
    return 0;
}
