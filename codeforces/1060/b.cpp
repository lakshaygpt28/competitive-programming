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

ll s(ll n);

int main() {
    fast_io();
    ll n;
    cin >> n;
    ll a, b;
    a = n / 2;
    b = n - a;
    ll anA = a, anB = b;
    ll max = 0, curr = 0;
    if (n < 10) {
        cout << n << endl;
        return 0;
    }
    for (ll j = 0; j < 12; j++) {
        ll add = pow(10, j);
        if (add >= n) {
            break;
        }
        a = anA;
        b = anB;
        for (ll i = 0; i < 10; i++) {
            curr = s(a) + s(b);
            if (curr > max and a > 0 and b > 0) {
                max = curr;
                anA = a;
                anB = b;
            }
            a -= add;
            b += add;
        }
    }
    // debug(anA),debug(anB);
    cout << max << endl;
    return 0;
}

ll s(ll n) {
    if (n < 0) {
        return -1;
    }
    ll a = 0;
    while (n) {
        a += (n % 10);
        n /= 10;
    }
    return a;
}
