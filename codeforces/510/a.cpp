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
    vll a(n);
    ll sum = m;
    ll max = -1;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] > max) {
            max = a[i];
        }
    }
    if (ceil(sum/double(n)) < max) {
        cout << max;
    } else cout << ceil(sum/double(n));

    cout << " " << max + m << endl;

    return 0;
}
