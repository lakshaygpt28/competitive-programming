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
    ll q;
    cin >> q;
    while (q--) {
        ll n, m, k;
        cin >> n >> m >> k;
        ll ans = min(m,n);
        // debug(k), debug(max(m,n));
        // debug(k < max(n,m));
        if (k < max(n,m)) {
            cout << -1 << endl;
            continue;
        } else {
            ll diff = abs(m-n);
            ans += (diff/2)*2;
            if (max(m,n) - ans == 1) {
                ans += (k-ans-1);
                cout << ans << endl;
                continue;
            } else {
                if ((k - ans)&1) {
                    ans += (k-ans-1);
                    ans--;
                } else {
                    ans += (k-ans);
                }
                cout << ans << endl;
                continue;
            }
        }
    }
    return 0;
}
