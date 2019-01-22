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
const ll siz = 15000001;
ll min_factor[siz];

int main() {
    fast_io();
    ll n;
    cin >> n;
    vll a(n);
    ll GCD;
    for (ll i = 0; i < n; i++) {
    	cin >> a[i];
    }
    GCD = a[0];
    for (ll i = 1; i < n; i++) {
    	GCD = __gcd(GCD,a[i]);
    }
    ll max_el = 0;
    for (ll i = 0; i < n; i++) {
    	a[i] /= GCD;
    	if (max_el < a[i]) {
    		max_el = a[i];
    	}
    }
    // debug(max_el);
    if (max_el == 1) {
    	cout << -1 << endl;
    	return 0;
    }
    for (ll i = 2; i <= siz; i++) {
    	if (!min_factor[i]) {
    		for (ll j = i; j <= siz; j+=i) {
    			if (!min_factor[j]) {
    				min_factor[j] = i;
    			}
    		}
    	}
    }
    ll value;
    map < ll , ll > mp;
    for (ll i = 0; i < n; i++) {
    	value = a[i];
    	ll fac1 = 0,fac2 = 0;
    	// debug(value);
    	while (value != 1) {
    		fac2 = min_factor[value];
    		// debug(fac2);
    		if (fac2 != fac1) {
    			mp[fac2]++;
    		}
    		fac1 = fac2;
    		value /= fac2;
    	}
    }
    ll max = 0;
    for (auto &el : mp) {
    	// cout << el.first << " -> " << el.second << endl;
    	if (el.second > max) {
    		max = el.second;
    	}
    }
    cout << n - max << endl;
    return 0;
}
