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
    vll a(n);
    vll even, odd;
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] & 1) {
            odd.pb(a[i]);
        } else {
            even.pb(a[i]);
            sum += a[i];
        }
    }
    ll l = odd.size();
    if (odd.size() & 1) {
        sort(odd.begin(), odd.end());
        for (ll i = 1; i < l; i++) {
            sum += odd[i];
        }
    } else {
        for (ll i = 0; i < l; i++) {
            sum += odd[i];
        }
    }
    cout << sum << endl;
    return 0;
}
