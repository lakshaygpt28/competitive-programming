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

int main() {
    fast_io();
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll mex = 0;
    for (ll i = 1; i <= n; i++) {
        if (a[i] > mex) {
            cout << i << "\n";
            return 0;
        } else {
            mex = max(mex, a[i] + 1);
        }
    }
    cout << -1 << "\n";
    return 0;
}
