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

const ll mod = 1e9 + 9;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

ll mod_exp(ll x, ll n, ll m);

int main() {
    fast_io();
    ll n, a, b, k;
    cin >> n >> a >> b >> k;
    string s;
    cin >> s;
    ll m = (n + 1) / k;
    ll ans = 0, sum = 0;
    for (ll i = 0; i < k; i++) {
        if (a == b) {
            sum = (mod_exp(a, n, mod) * m) % mod;
        } else if (mod_exp(b, k * m, mod) == mod_exp(a, k * m, mod) or mod_exp(b, k, mod) == mod_exp(a, k, mod)) {
            sum = ((mod_exp(a, n - i, mod) * mod_exp(b, i, mod)) % mod * m % mod) % mod;
        } else {
            ll num = ((mod_exp(a, n - i - (k * (m - 1)), mod) * mod_exp(b, i, mod)) % mod * ((mod_exp(b, k * m, mod) - mod_exp(a, k * m, mod))) % mod) % mod;
            ll den = mod_exp((mod_exp(b, k, mod) - mod_exp(a, k, mod)), mod - 2, mod);
            sum = (num * den) % mod;
        }
        if (s[i] == '+') {
            ans = (ans + sum) % mod;
        } else {
            ans = ((ans - sum) + mod) % mod;
        }
    }
    cout << (ans + mod) % mod << "\n";
    return 0;
}

ll mod_exp(ll x, ll n, ll m) {
    ll res = 1;
    x %= m;
    while (n > 0) {
        if (n & 1) {
            res = (res * x) % m;
        }
        x = (x * x) % m;
        n >>= 1;
    }
    return res;
}
