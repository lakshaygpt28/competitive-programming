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

ll a[N], ans[N];
map < ll, ll > mp;

int main() {
    fast_io();
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        cnt = max(cnt, mp[a[i]]);
    }
    if (cnt > k) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    cnt = 0;
    for (ll i = 1; i <= 5000; i++) {
        for (ll j = 0; j < n; j++) {
            if (a[j] == i) {
                ans[j] = cnt + 1;
                cnt = (cnt + 1) % k;
            }
        }
    }
    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
