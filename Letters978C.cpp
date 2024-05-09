#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int 
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<ll> dorms(n);
    vector<ll> numbers(m);
    for(int i = 0; i < n; i++){
        cin >> dorms[i];
    }
    for(int i = 0; i < m; i++){
        cin >> numbers[i];
    }
    for(int i = 1; i < n; i++){
        dorms[i] += dorms[i-1];
    }
    for(int i = 0; i < m; i++){
        vector<ll>::iterator low1;
        low1 = lower_bound(dorms.begin(), dorms.end(), numbers[i]);
        ll index = low1-dorms.begin();
        ll backIndex = index - 1;
        ll value = numbers[i];
        if(backIndex >= 0){
            value -= dorms[backIndex];
        }
        cout << index+1 << " " << value << "\n";
    }
    return 0;
}
