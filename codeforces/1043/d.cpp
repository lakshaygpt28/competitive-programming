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
#ifndef ONLINE_JUDGE
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " : " << arg1 << std :: endl;
}
template < typename Arg1, typename... Args >
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define debug(...)
#endif
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

map < ll , ll > mp;
ll pre[11][N];
ll a[11][N];

int main() {
    fast_io();
    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) {
        mp[i] = 1;
    }
    for (ll i = 1; i <= m; i++) {
        for (ll j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (j != 1) {
                pre[i][a[i][j]] = a[i][j - 1];
            }
        }
    }
    for (ll i = 2; i <= n; i++) {
        bool flag = 1;
        for (ll j = 1; j <= m; j++) {
            if (pre[j][a[1][i]] != pre[1][a[1][i]]) {
                flag = 0;
            }
        }
        if (flag) {
            mp[a[1][i]] += mp[pre[1][a[1][i]]];
        }
    }
    ll ans = 0;
    for (auto x : mp) {
        ans += x.second;
    }
    cout << ans << "\n";
    return 0;
}
