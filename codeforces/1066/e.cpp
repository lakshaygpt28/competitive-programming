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

const ll mod = 998244353;
const ll inf = LLONG_MAX;
const ll N = 2e5 + 10;

ll diff[N], A[N];

ll mod_exp(ll x, ll n, ll m);

int main() {
    fast_io();
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    if (n < m) {
        string s;
        for (ll i = n; i < m; i++) {
            s += '0';
        }
        a = s + a;
    } else if (n > m) {
        string s;
        for (ll i = m; i < n; i++) {
            s += '0';
        }
        b = s + b;
    }
    // debug(a), debug(b);
    // for (ll i = 0; i < m; i++) {
    //     if (b[i] == '1') {
    //         diff[i] += 1;
    //         diff[m] -= 1;
    //     }
    // }
    // A[0] = diff[0];
    // for (ll i = 1; i < m; i++) {
    //     A[i] = diff[i] + A[i - 1];
    // }
    // for (ll i = 0; i < m; i++) {
    //     ans = (ans + (A[i] * mod_exp(2, m - i - 1, mod)) % mod) % mod;
    // }
    ll len = max(n, m);
    ll ans = 0;
    for (ll i = len - 1; i >= 0; i--) {
        if (a[i] == '1') {
            ans = (ans + (mod_exp(2, len - i - 1, mod)) % mod) % mod;
        }
        A[i] = ans;
    }
    // for (ll i = n; i < m; i++) {
    //     A[i] = ans;
    // }
    // for (ll i = 0; i < len; i++) {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";
    ll rst = 0;
    for (ll i = 0; i < len; i++) {
        if (b[i] == '1') {
            rst = (rst + A[i]) % mod;
        }
    }
    cout << rst << "\n";
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
