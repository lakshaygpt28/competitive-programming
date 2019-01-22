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
    if (n == 1 or n == 2) {
        cout << "No\n";
        return 0;
    }
    vll s1, s2;
    if (n & 1) {
        for (ll i = 1; i <= n/2; i+=2) {
            s1.pb(i);
            s1.pb(n-i);
        }
        for (ll i = 2; i <= n/2; i+=2) {
            s2.pb(i);
            s2.pb(n-i);
        }
        s2.pb(n);

    } else {
        for (ll i = 1; i <= n/2; i+=2) {
            s1.pb(i);
            s1.pb(n- i + 1);
        }
        for (ll i = 2; i <= n/2; i+=2) {
            s2.pb(i);
            s2.pb(n - i + 1);
        }
    }
    cout << "Yes\n";
    cout << s1.size() << " ";
    for (auto el : s1) {
        cout << el << " ";
    }
    cout << endl;
    cout << s2.size() << " ";
    for (auto el : s2) {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}
