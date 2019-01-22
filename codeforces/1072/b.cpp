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
    ll a[n], b[n];
    for (ll i = 0; i < n - 1; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n - 1; i++) {
        cin >> b[i];
    }
    bool flag1, flag2;
    for (ll j = 0; j <= 3; j++) {
        ll x = j;
        flag1 = 1;
        vll ans;
        ans.pb(x);
        for (ll i = 0; i < n - 1; i++) {
            flag2 = 0;
            for (ll y = 0; y <= 3; y++) {
                if ((x | y) == a[i] and (x & y) == b[i]) {
                    flag2 = 1;
                    ans.pb(y);
                    x = y;
                    break;
                }
            }
            if (!flag2) {
                flag1 = 0;
                break;
            }
        }
        if (flag1) {
            cout << "YES\n";
            for (auto x : ans) {
                cout << x << " ";
            }
            cout << "\n";
            return 0;
        }

    }
    cout << "NO\n";
    return 0;
}
