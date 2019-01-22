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

set < ll > factors;

int main() {
    // a = 2v + 1, b = 2v*v + 2v, c = 2v*v + 2v + 1
    fast_io();
    ll n;
    cin >> n;
    ll len = sqrt(n) + 1;
    for (ll i = 1; i < len; i++) {
        if (n % i == 0) {
            factors.insert(i);
            factors.insert(n / i);
        }
    }
    if (n % 4 == 0) {
        cout << 3 * (n / 4) << " " << 5 * (n / 4) << endl;
        return 0;
    }
    for (auto x : factors) {
        if ((x - 1) % 2 == 0 and x != 1) {
            ll v = (x - 1) / 2;
            ll m = 2 * v * v + 2 * v;
            ll k = m + 1;
            cout << m * (n / x) << " " << k * (n / x) << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
