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
    string a, b;
    cin >> a >> b;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            continue;
        } else {
            if (i < n-1 and a[i] == b[i+1] and a[i+1] == b[i]) {
                swap(a[i],a[i+1]);
                ans++;
            } else {
                a[i] = b[i];
                ans++ ;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
