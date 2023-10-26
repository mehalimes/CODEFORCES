#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define pf push_front

// author : mehalimes
// Different Divisors 1474B Codeforces Solution
// IDEA : Editorial
// find the nearest two primes and calculate

bool isPrime(int x){
    int c = 0;
    for(ll i = 1; i*i <= x; i++){
        if(x % i == 0){
            c++;
        }
    }
    if(c == 1){
        return true;
    }
    else {
        return false;
    }
}


int main(){
    using namespace std;
    ll t; cin >> t;
    for(ll tc = 0; tc < t; tc++){
        ll d; cin >> d;
        ll fp = 1;
        ll sp = 1;
        for(ll i =1+d; i < 100000000000001; i++){
            if(isPrime(i) && fp == 1){
                fp = i;
                break;
            }
        }
        for(ll i = fp+d; i < 10000000000000001; i++){
            if(isPrime(i)){
                sp = i;
                break;
            }
        }
        ll ans1 = fp*sp;
        ll ans2 = pow(fp, 3);
        cout << min(ans1, ans2) << "\n";
    }
    return 0;
}

