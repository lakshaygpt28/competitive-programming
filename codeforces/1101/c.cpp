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

pair< pll , ll > p[N];
ll ans[N];


int main() {
    fast_io();
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> p[i].first.first >> p[i].first.second;
            p[i].second = i;
            ans[i] = 0;
        }
        sort(p, p + n);
        ll xl = p[0].first.first;
        ll xr = p[0].first.second;
        ans[p[0].second] = 1;
        // debug(xl, xr);
        for (ll i = 1; i < n; i++) {
            if (min(p[i].first.second, xr) -  max(p[i].first.first, xl) >= 0) {
                ans[p[i].second] = 1;
                xl = min(p[i].first.first, xl);
                xr = max(p[i].first.second, xr);
            }
        }
        bool flag = 0;
        for (ll i = 0; i < n; i++) {
            if (ans[i] == 0) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            for (ll i = 0; i < n; i++) {
                cout << ans[i] + 1 << " ";
            }
            cout << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}
