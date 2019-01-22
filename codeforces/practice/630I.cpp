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

ll exp(ll a, ll b);

int main() {
    fast_io();
    ll n;
    cin >> n;
    ll ans = exp(4, n - 2) * 6 + exp(4, n - 3) * (n - 3) * 9;
    cout << ans << "\n";
    return 0;
}

ll exp(ll a, ll b) {
    ll rst = 1;
    while (b > 0) {
        if (b & 1) {
            rst = rst * a;
        }
        a = a * a;
        b >>= 1;
    }
    return rst;
}
