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
const ll N = 3e5 + 10;

vector < pair < pll, pll >  > a(N);
vll pre_x(N), pre_y(N), ans(N);
vector < pll > b(N);

int main() {
    fast_io();
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        cin >> a[i].second.first >> a[i].second.second;
        b[i].first = a[i].second.first, b[i].second = a[i].second.second;
        a[i].first.first = a[i].second.first - a[i].second.second;
        a[i].first.second = i;
    }
    sort(a.begin(), a.begin() + n);
    pre_x[0] = a[0].second.first;
    pre_y[0] = a[0].second.second;
    for (ll i = 1; i < n; i++) {
        pre_x[i] = pre_x[i - 1] + a[i].second.first;
        pre_y[i] = pre_y[i - 1] + a[i].second.second;
    }
    ans[a[0].first.second] += pre_y[n - 1] - pre_y[0] + (a[0].second.first * (n - 1));
    for (ll i = 1; i < n; i++) {
        ans[a[i].first.second] += pre_y[n - 1] - pre_y[i] + (a[i].second.first * (n - 1 - i));
        ans[a[i].first.second] += pre_x[i - 1] + (a[i].second.second * (i));
    }
    ll u, v;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v;
        ll x = min(b[u - 1].first + b[v - 1].second, b[u - 1].second + b[v - 1].first);
        ans[u - 1] -= x;
        ans[v - 1] -= x;
    }
    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}
