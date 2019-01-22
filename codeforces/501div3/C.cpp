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
    ll n, m;
    cin >> n >> m;
    vll a(n),b(n),c(n);
    ll sum = 0,ans = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        c[i] = a[i] - b[i];
        sum += a[i];
    }
    sort(c.begin(),c.end(),greater <ll>());
    if (sum <= m) {
        cout << ans << endl;
        return 0;
    }
    // for (ll i = 0; i < n; i++) {
    //     cout << c[i] <<" ";
    // }
    // cout << endl;
    for (ll i = 0; i < n; i++) {
        sum -= c[i];
        ans += 1;
        if (sum <= m) {
            cout << ans << endl;
            break;
        }
    }
    if (sum > m) {
        cout << -1 << endl;
    }

    return 0;
}
