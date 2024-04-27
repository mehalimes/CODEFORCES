#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(){
    int t; cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n; cin >> n;
        deque<int> v;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v.push_back(x);
        }
        int fc = 0, bc = 0;
        int f = v.front();
        int b = v.back();
        while(!v.empty() && v.front() == f){
            v.pop_front();
            fc++;
        }
        while(!v.empty() && v.back() == b){
            v.pop_back();
            bc++;
        }
        if(f == b){
            int ans = (n-fc-bc);
            cout << ans << "\n";
        }
        else {
            int ans = (n-max(fc,bc));
            cout << ans << "\n";
        }
    }
    return 0;
}
