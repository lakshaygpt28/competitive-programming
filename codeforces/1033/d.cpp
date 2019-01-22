/*
lakshaygpt28
Lakshay Gupta
*/

// used precision

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

ll mod = 998244353;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

vector < ll > a(502);
map < ll, ll > factors;
vector < ll > numLEFT;
set < ll > pr;
map < ll, ll > rem;

int main() {
    fast_io();
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        ll x = sqrt(a[i]);
        ll y = sqrt(x);
        ll c = cbrt(a[i]);
        bool flag = 1;
        for (ll j = -5; j < 6; j++) {
            if ((y + j) > 1 and (y + j) * (y + j) * (y + j) * (y + j) == a[i]) {
                factors[(y + j)] += 4;
                pr.insert((y + j));
                flag = 0;
                break;
            } else if ((x + j) > 1 and (x + j) * (x + j) == a[i]) {
                factors[(x + j)] += 2;
                pr.insert((x + j));
                flag = 0;
                break;
            } else if ((c + j) > 1 and (c + j) * (c + j) * (c + j) == a[i]) {
                factors[(c + j)] += 3;
                pr.insert((c + j));
                flag = 0;
                break;
            }
        } if (flag) {
            numLEFT.pb(a[i]);
        }
    }
    ll len = numLEFT.size();
    for (ll i = 0; i < len; i++) {
        for (ll j = i + 1; j < len; j++) {
            if (numLEFT[i] != numLEFT[j]) {
                ll f = __gcd(numLEFT[i], numLEFT[j]);
                if (f != 1) {
                    pr.insert(f);
                    pr.insert(numLEFT[i] / f);
                    pr.insert(numLEFT[j] / f);
                }
            }
        }
    }
    for (ll i = 0; i < len; i++) {
        bool flag = 1;
        for (auto x : pr) {
            if (numLEFT[i] % x == 0) {
                factors[x]++;
                factors[numLEFT[i] / x]++;
                flag = 0;
                break;
            }
        }
        if (flag) {
            rem[numLEFT[i]]++;
        }
    }
    ll ans = 1;
    for (auto x : factors) {
        ans = (ans * (x.second + 1)) % mod;
    }
    for (auto x : rem) {
        ans = (((ans * (x.second + 1)) % mod) * (x.second + 1)) % mod;
    }
    cout << ans << "\n";
    cout.flush();
    return 0;
}
