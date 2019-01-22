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
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll curr = 0, max = 0;
    for (ll i = 1; i <= n; i++) {
        ll sum = 0;
        for (ll j = 0; j < i; j++) {
            sum += a[j];
        }
        if (sum > i * 100) {
            curr = i;
            if (max < curr) {
                max = curr;
            }
        }
        for (ll j = 0, k = i; k < n; j++, k++) {
            sum -= a[j];
            sum += a[k];
            if (sum > i * 100) {
                curr = i;
                if (max < curr) {
                    max = curr;
                }
            }
        }
    }
    cout << max << "\n";
    return 0;
}
