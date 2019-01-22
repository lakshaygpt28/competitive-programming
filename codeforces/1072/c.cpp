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
    ll a, b;
    cin >> a >> b;
    ll mx;
    for (ll i = 0; ((i * i + i) / 2) <= a + b; i++) {
        mx = i;
    }
    set < ll > ans1, ans2;
    ll sum1 = 0, sum2 = 0;
    ll n = 0, m = 0;
    for (ll i = mx; i >= 1; i--) {
        if (sum1 + i <= a) {
            ans1.insert(i);
            sum1 += i;
            n++;
        } else if (sum2 + i <= b) {
            ans2.insert(i);
            sum2 += i;
            m++;
        }
    }
    cout << n << "\n";
    for (auto x : ans1) {
        cout << x << " ";
    }
    cout << "\n";
    cout << m << "\n";
    for (auto x : ans2) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
