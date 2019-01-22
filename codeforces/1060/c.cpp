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
    ll n, m;
    cin >> n >> m;
    vll a(n), b(m);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }
    ll x;
    cin >> x;
    vll mina(n + 1), minb(m + 1);
    for (ll i = 1; i <= n; i++) {
        ll sum = 0;
        for (ll j = 0; j < i; j++) {
            sum += a[j];
        }
        mina[i] = sum;
        for (ll k = 0, j = i; j < n; j++, k++) {
            sum += a[j] - a[k];
            if (sum < mina[i]) {
                mina[i] = sum;
            }
        }
    }
    for (ll i = 1; i <= m; i++) {
        ll sum = 0;
        for (ll j = 0; j < i; j++) {
            sum += b[j];
        }
        minb[i] = sum;
        for (ll k = 0, j = i; j < m; j++, k++) {
            sum += b[j] - b[k];
            if (sum < minb[i]) {
                minb[i] = sum;
            }
        }
    }
    ll max_rec = 0;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            // debug(x);
            // debug(mina[i] * minb[j]);
            if (mina[i] * minb[j] <= x) {
                if (i * j > max_rec) {
                    max_rec = i * j;
                }
            }
        }
    }
    cout << max_rec << "\n";
    return 0;
}
