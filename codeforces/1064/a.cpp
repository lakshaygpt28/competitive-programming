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
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = 0;
    while (true) {
        bool flag = 1;
        if (a >= b + c) {
            flag = 0;
            if (b < c) {
                b++;
                ans++;
            } else {
                c++;
                ans++;
            }
        }
        if (b >= a + c) {
            flag = 0;
            if (a < c) {
                a++;
                ans++;
            } else {
                c++;
                ans++;
            }
        }
        if (c >= b + a) {
            flag = 0;
            if (a < b) {
                a++;
                ans++;
            } else {
                b++;
                ans++;
            }
        }
        if (flag) {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
