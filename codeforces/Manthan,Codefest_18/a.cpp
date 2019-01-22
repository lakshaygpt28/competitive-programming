/*
lakshaygpt28
Lakshay Gupta
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef vector < vector < ll > > matrix;
typedef vector < ll > vll;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    ll n,ans = 0;
    cin >> n;
    while(n > 0) {
        ans++;
        n/=2;
    }
    cout << ans << endl;
    // cout << (ceil((-1 + ceil(sqrt(1 + 8*n)))/2)) * (ceil((-1 + ceil(sqrt(1 + 8*n)))/2)+1) << endl;
    // cout << (ceil((-1 + ceil(sqrt(1 + 8*n)))/2) - 1) * (ceil((-1 + ceil(sqrt(1 + 8*n)))/2)) << endl;
    return 0;
}
