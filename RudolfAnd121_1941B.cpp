#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n; cin >> n;
        vector<int> v(n, 0);
        bool ans = false;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        for(int i = 0; i+2 < (int)v.size(); i++){
            int op = v[i];
            v[i] -= op;
            v[i+1] -= (2*op);
            v[i+2] -= op;
            if(v[i+1] < 0 || v[i+2] < 0){
                cout << "NO" << "\n";
                ans = true;
                break;
            }
        }
        if(!ans){
            for(int i = 0; i < (int)v.size(); i++){
                if(v[i] != 0){
                    cout << "NO" << "\n";
                    ans = true;
                    break;
                }
            }
        }
        if(!ans){
            cout << "YES" << "\n";
        }
    }
    return 0;
}
