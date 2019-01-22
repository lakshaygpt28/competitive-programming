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

set < ll > s;

int main() {
    fast_io();
    ll n;
    cin >> n;
    ll a[n], b[n], ans[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll rst;
    for (ll i = 0, j = 0; i < n; i++) {
        rst = 0;
        auto it = s.find(b[i]);
        if (it == s.end()) {
            for (;j < n; j++) {
                if (a[j] != b[i]) {
                    // debug(a[j]);
                    s.insert(a[j]);
                    rst++;
                } else {
                    // debug(a[j]);
                    s.insert(a[j]);
                    rst++;
                    j++;
                    break;
                }
            }
        }
        ans[i] = rst;
    }
    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
