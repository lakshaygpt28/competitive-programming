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
    vll arr(m+1);
    for (ll i = 0; i < n; i++) {
        ll inp1,inp2;
        cin >> inp1 >> inp2;
        for (ll j = inp1; j <= inp2; j++) {
            arr[j] = 1;
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= m; i++) {
        if (!arr[i]) {
            ans += 1;
        }
    }
    cout << ans << endl;
    for (ll i = 1; i <= m; i++) {
        if (!arr[i]) {
            cout << i <<" ";
        }
    }
    cout << endl;
    return 0;
}
