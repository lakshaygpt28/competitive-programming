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
const ll N = 2e5 + 10;

ll a[N];

int main() {
    fast_io();
    ll n, m, k;
    cin >> n >> m >> k;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll low = 1, high = n, mid;
    ll rst;
    while (low <= high) {
        mid = (low + high) / 2;
        ll ans = 1, curr = 0;
        for (ll i = n - mid; i < n; i++) {
            curr += a[i];
            if (curr > k) {
                ans++;
                curr = a[i];
            }
        }
        if (ans <= m) {
            rst = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << rst << "\n";
    return 0;
}
