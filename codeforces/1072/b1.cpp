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

map < pll, pll > mp;
vll ans1, ans2;

int main() {
    fast_io();
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n - 1; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n - 1; i++) {
        cin >> b[i];
    }
    for (ll i = 0; i <= 3; i++) {
        for (ll j = 0; j <= 3; j++) {
            mp[{i | j, i & j}] = {i, j};
        }
    }
    auto it = mp.find({a[0], b[0]});
    // debug("hi");
    if (it == mp.end()) {
        cout << "NO\n";
        return 0;
    }
    // debug("hi");
    ll x = mp[{a[0], b[0]}].first, y = mp[{a[0], b[0]}].second;
    ans1.pb(x);
    ans1.pb(y);
    bool flag1 = 1, flag2 = 1;
    for (ll i = 1; i < n - 1; i++) {
        // debug(i);
        for (ll j = 0; j <= 3; j++) {
            // debug(y | j), debug(y & j);
            if ((y | j) == a[i] and (y & j) == b[i]) {
                // debug(j);
                ans1.pb(j);
                y = j;
                break;
            }
        }
    }
    x = mp[{a[0], b[0]}].first, y = mp[{a[0], b[0]}].second;
    ans2.pb(y);
    ans2.pb(x);
    for (ll i = 1; i < n - 1; i++) {
        // debug(i);
        for (ll j = 0; j <= 3; j++) {
            // debug(x | j), debug(x & j);
            // debug(a[i]), debug(b[i]);
            if ((x | j) == a[i] and (x & j) == b[i]) {
                // debug(j);
                ans2.pb(j);
                x = j;
                break;
            }
        }
    }
    if (flag1) {
        if (ans1.size() == n) {
            // debug("hi");
            for (ll i = 0; i < n - 1; i++) {
                if ((ans1[i] | ans1[i + 1] == a[i]) and (ans1[i] & ans1[i + 1] == b[i])) {
                    continue;
                } else {
                    flag1 = 0;
                    break;
                }
            }
        } else {
            flag1 = 0;
        }
    }
    if (flag1) {
        cout << "YES\n";
        for (auto x : ans1) {
            cout << x << " ";
        }
        cout << "\n";
        return 0;
    }
    if (flag2) {
        if (ans2.size() == n) {
            // debug("hi");
            // for (auto x : ans2) {
            //     cout << x << " ";
            // }
            // cout << "\n";
            for (ll i = 0; i < n - 1; i++) {
                if (((ans2[i] | ans2[i + 1]) == a[i]) and ((ans2[i] & ans2[i + 1]) == b[i])) {
                    continue;
                } else {
                    flag2 = 0;
                    break;
                }
            }
        } else {
            flag2 = 0;
        }
    }
    if (flag2) {
        cout << "YES\n";
        for (auto x : ans2) {
            cout << x << " ";
        }
        cout << "\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}
