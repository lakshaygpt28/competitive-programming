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
const ll N = 3e3 + 10;

ll seen[N];

int main() {
    fast_io();
    ll n;
    cin >> n;
    seen[1] = 1;
    for (ll i = 2; i <= n; i++) {
        if (!seen[i]) {
            for (ll j = i * 2; j <= n; j += i) {
                seen[j]++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++) {
        if (seen[i] == 2) {
            ans++;
            // debug(i);
        }
    }
    cout << ans << "\n";
    return 0;
}
