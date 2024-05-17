#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    int fEdge = sqrt(a*b/c);
    int sEdge = sqrt(b*c/a);
    int tEdge = sqrt(a*c/b);
    int ans = (4*fEdge)+(4*sEdge)+(4*tEdge);
    cout << ans << "\n";
    return 0;
}
