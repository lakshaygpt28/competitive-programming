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

map < ll, ll > mp;

int main() {
    fast_io();
    ll b;
    cin >> b;
    for (ll i = 2; i * i <= b; i++) {
        if (b % i == 0) {
            ll cnt = 0;
            while (b % i == 0) {
                b /= i;
                cnt++;
            }
            mp[i] = cnt;
        }
    }
    if (b > 1) {
        mp[b]++;
    }
    ll ans = 1;
    for (auto x : mp) {
        ans = ans * (x.second + 1);
    }
    cout << ans << "\n";
    return 0;
}
