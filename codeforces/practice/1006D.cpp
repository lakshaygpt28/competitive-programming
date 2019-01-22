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
    ll n, ans = 0;
    string a, b;
    cin >> n >> a >> b;
    for (ll i = 0, j = n - 1; i < n/2; i++, j--) {
        if (a[i] == b[i] or a[j] == b[j]) {
            continue;
        } else if (a[i] == a[j] and b[i] == b[j]) {
            swap(a[j],b[i]);
        } else if (a[i] == b[j] and a[j] == b[i]) {
            swap(b[i],b[j]);
        } else if (a[i] == b[j]) {
            swap(b[i],b[j]);
        } else if (a[j] == b[i]) {
            swap(b[i],b[j]);
        } else if (b[j] == b[i]) {
            swap(b[i], a[j]);
        }
    }
    for (ll i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            ans++;
        }
    }

    cout << ans << endl;
    
    return 0;
}
