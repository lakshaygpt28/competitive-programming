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

ll mod_exp(ll x, ll n, ll m);

int main() {
    fast_io();
    string s;
    cin >> s;
    ll a = 0, b = 0;
    ll ans = 1, flag = 0, cur = 0, len = s.size();
    // for (ll i = len -1 ; i >= 0; i--) {
    //     if (s[i] == 'b') {
    //         b++;
    //     } else {
    //         ans = (ans + b) % mod;
    //         b = (b * 2) % mod;
    //     }
    // }
    // cout << ans - 1 << endl;
    ans = 0;
    for (ll i = 0; i < len; i++) {
        if (s[i] == 'a') {
            a++;
        } else {
            ans = (ans + (mod_exp(2, a, mod)) - 1) % mod;
        }
    }
    cout << ans << endl;
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
