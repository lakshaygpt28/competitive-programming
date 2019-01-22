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
    ll k;
    cin >> k;
    vector < pair < ll, pll > > a;
    for (ll i = 0; i < k; i++) {
        ll n;
        cin >> n;
        vll b(n);
        ll sum = 0;
        for (ll j = 0; j < n; j++) {
            cin >> b[j];
            sum += b[j];
        }
        for (ll j = 0; j < n; j++) {
            a.pb({sum - b[j], {j, i}});
        }
    }
    sort(a.begin(), a.end());
    ll len = a.size();
    for (ll i = 0; i < len - 1; i++) {
        if (a[i].first == a[i + 1].first and a[i].second.second != a[i + 1].second.second) {
            cout << "YES\n";
            // debug(a[i].first);
            cout << a[i].second.second + 1 << " " << a[i].second.first + 1 << "\n";
            cout << a[i + 1].second.second + 1 << " " << a[i + 1].second.first + 1 << "\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
