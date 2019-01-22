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
    ll n;
    cin >> n;
    vll a(n), p(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }
    map < ll, ll > mp;
    multiset < ll > s;
    p[0] = a[0];
    mp[a[0]]++;
    s.insert(a[0]);
    ld ans = 0;
    for (ll i = 1; i < n; ++i) {
        p[i] = a[i] + p[i - 1];
        mp[a[i]]++;
        s.insert(a[i]);
        ans += (i + 1) * a[i] - p[i] - mp[a[i] - 1] + mp[a[i] + 1];
    }
    cout << fixed;
    cout << setprecision(0);
    cout << ans << "\n";
    return 0;
}
