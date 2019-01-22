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

ll l[N], r[N], c[N], a[N];

int main() {
    fast_io();
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> l[i];
    }
    for (ll i = 1; i <= n; i++) {
        cin >> r[i];
    }
    for (ll i = 1; i <= n; i++) {
        c[i] = l[i] + r[i];
        a[i] = n - c[i];
    }
    for (ll i = 1; i <= n; i++) {
        ll R = 0, L = 0;
        for (ll j = i + 1; j <= n; j++) {
            if (a[j] > a[i]) {
                R++;
            }
        }
        for (ll j = i - 1; j > 0; j--) {
            if (a[j] > a[i]) {
                L++;
            }
        }
        if (L != l[i] or R != r[i]) {
            cout << "NO\n";
            return 0;
        }
        // if (l[i] >= i) {
        //     // debug(l[i]), debug(i);
        //     cout << "NO\n";
        //     return 0;
        // }
        // if (r[i] > n - i) {
        //     // debug(r[i]), debug(i);
        //     cout << "NO\n";
        //     return 0;
        // }
    }
    cout << "YES\n";
    for (ll i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}
