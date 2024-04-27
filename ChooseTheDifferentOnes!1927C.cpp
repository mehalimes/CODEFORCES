#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n, m, k; cin >> n >> m >> k;
        vector<pair<bool, bool>> freq_ar(k, {false, false});
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x-1 >= 0 && x-1<k)
            freq_ar[x-1].first = true;
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            if(x-1 >= 0 && x-1<k)
            freq_ar[x-1].second = true;
        }
        int f = 0, s = 0, db = 0;
        bool ok = true; 
        for(int i = 0; i < k; i++){
            if(freq_ar[i].first == true && freq_ar[i].second == false){
                f++;
            }
            else if(freq_ar[i].first == false && freq_ar[i].second == true){
                s++;
            }
            else if(freq_ar[i].first == true && freq_ar[i].second == true){
                db++;
            }
            else if(freq_ar[i].first == false && freq_ar[i].second == false){
                ok = false;
            }
        }
        if((abs(f-s) <= db || f == s) && ok){
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}
