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
    ll n, m, k;
    cin >> n >> m >> k;
    if ((2*n*m) % k != 0) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    ll x = n, y = m;
    ll gcd = __gcd(x, k);
    x /= gcd;
    k /= gcd;
    gcd = __gcd(y, k);
    y /= gcd;
    k /= gcd;
    if (k == 1) {
        if (2*x <= n){
            cout << "0 0\n" << 2*x << " 0\n" << "0 " << y << endl;
        } else {
            cout << "0 0\n" << x << " 0\n" << "0 " << 2*y << endl;
        }
    } else {
        cout << "0 0\n" << x << " 0\n" << "0 " << y << endl;
    }
    return 0;
}
