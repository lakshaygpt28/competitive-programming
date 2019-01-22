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

ll a[N];
ll diff[N], A[N];

int main() {
    fast_io();
    ll n, r;
    cin >> n >> r;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    // diff[0] = a[0];
    // for (ll i = 1; i < n; i++) {
    //     diff[i] = a[i] - a[i - 1];
    // }
    ll left, right;
    ll cnt = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i]) {
            cnt++;
            left = max(ll(0), i - r + 1);
            right = min(ll(n - 1), i + r - 1);
            diff[left] += 1;
            diff[right + 1] -= 1;
        }
    }
    A[0] = diff[0];
    for (ll i = 1; i < n; i++) {
        A[i] = diff[i] + A[i - 1];
    }
    // for (ll i = 0; i < n; i++) {
    //     cout << A[i] << " ";
    // }
    // cout << "\n";
    ll curr_length = 0, minval = inf;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (A[i] == 0) {
            cout << -1 << endl;
            return 0;
        }
        ll minterval = A[i];
        // debug(minterval);
        // debug(max(ll(0), i - r + 1));
        // debug(min(ll(n - 1), i + r - 1));
        for (ll j = max(ll(0), i - r + 1); j <= min(ll(n - 1), i + r - 1); j++) {
            if (A[j] < minterval) {
                minterval = A[j];
            }
        }
        // debug(minterval);
        if (a[i]) {
            if (minterval > 1) {
                ans += 1;
                for (ll j = max(ll(0), i - r + 1); j <= min(ll(n - 1), i + r - 1); j++) {
                    A[j] -= 1;
                }
            }
        }
        // debug(ans);
    }

    cout << cnt - ans << endl;
    return 0;
}
