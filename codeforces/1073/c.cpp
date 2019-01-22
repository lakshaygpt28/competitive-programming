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

bool valid (ll x, ll y, ll n);
complex < ll > z = 0;
map < char, complex < ll > > dir = {{'L', {-1, 0}}, {'R', {1, 0}}, {'U', {0, 1}}, {'D', {0, -1}}};

int main() {
    fast_io();
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x, y;
    cin >> x >> y;
    if (n - (abs(x) + abs(y)) < 0 or ((n - (abs(x) + abs(y))) & 1) != 0) {
        cout << -1 << "\n";
        return 0;
    }
    ll low = 0, high = n, mid;
    ll ans = inf;
    while (low <= high) {
        mid = (low + high) / 2;
        bool flag = 0;
        ll l = 0, r = mid;
        z = 0;
        for (ll j = r; j < n; j++) {
            z += dir[s[j]];
        }
        if (valid(x - z.real(), y - z.imag(), mid)) {
            ans = mid;
            high = mid - 1;
            flag = 1;
        }
        for (; r < n; l++, r++) {
            z += dir[s[l]];
            z -= dir[s[r]];
            if (valid(x - z.real(), y - z.imag(), mid)) {
                ans = mid;
                high = mid - 1;
                flag = 1;
                break;
            }
        }
        if (!flag) {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}

bool valid (ll x, ll y, ll n) {
    if (n - (abs(x) + abs(y)) < 0 or ((n - (abs(x) + abs(y))) & 1) != 0) {
        return false;
    }
    return true;
}
