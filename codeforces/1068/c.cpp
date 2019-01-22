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

vector < pll > ans[110];

int main() {
    fast_io();
    ll n, m;
    cin >> n >> m;
    ll u, v;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v;
        ans[v].pb({(u - 1) * 100 + v, v});
        ans[u].pb({(u - 1) * 100 + v, u});
    }
    for (ll i = 1; i <= n; i++) {
        if (ans[i].size() == 0) {
            cout << 1 << "\n";
            cout << i << " " << i << "\n";
        } else {
            cout << ans[i].size() << "\n";
            for (auto x : ans[i]) {
                cout << x.first << " " << x.second << "\n";
            }
        }
    }
    return 0;
}
