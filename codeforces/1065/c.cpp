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
const ll N = 2e5 + 10;

ll a[N], p[N];
map < ll, ll > sum;
vector < ll > s;

int main() {
    fast_io();
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    p[0] = a[0];
    for (ll i = 1; i < n; i++) {
        p[i] = p[i - 1] + a[i];
    }
    for (ll i = a[0]; i <= a[n - 1]; i++) {
        auto it = upper_bound(a, a + n, i);
        ll j = it - a;
        j--;
        sum[i] = (n - 1 - j) * i + p[j];
    }
    for (auto x : sum) {
        // cout << x.first << " " << x.second << "\n";
        s.pb(x.second);
    }
    ll len = s.size();
    ll ans = 0;
    if (a[0] == a[n - 1]) {
        cout << ans << "\n";
        return 0;
    }
    for (ll i = len - 1, j = len - 1; i >= 0; i--) {
        // debug(j), debug(i);
        if (s[j] - s[i] > k) {
            ans++;
            j = i + 1;
            i++;
        }
    }
    cout << ans + 1 << "\n";

    return 0;
}
