#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front

// author : mehalimes
// 1353C Board Moves Codeforces Solution in C++ (C#'s long is not enough)
// IDEA : Ashish Kumar Youtube

int main(){
    using namespace std;
    ll t; cin >> t;
    for(ll tc = 0; tc < t; tc++){
        ll n; cin >> n;
        ll sum = 0LL;
        for(ll i = 3, j = 1; i <= n; i+=2, j++){
            ll blockCount = i+i+(i-2)+(i-2);
            sum += (blockCount * j);
        }
        cout << sum << "\n";
    }
    return 0; 
}

