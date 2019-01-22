/*
lakshaygpt28
Lakshay Gupta
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < ll, string > pll;
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
    std::map<string, ll> mp;
    vll a(n);

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i+=4) {
        mp["A"] += a[i];
    }
    for (ll i = 1; i < n; i+=4) {
        mp["B"] += a[i];
    }
    for (ll i = 2; i < n; i+=4) {
        mp["C"] += a[i];
    }
    for (ll i = 3; i < n; i+=4) {
        mp["D"] += a[i];
    }
    ll max = 0;
    string ans;
    //debug(mp["A"]), debug(mp["B"]), debug(mp["C"]), debug(mp["D"]);
    if (max <= mp["A"]) {
        max = mp["A"];
        ans = "A";
    } if (max < mp["B"]) {
        max = mp["B"];
        ans = "B";
    } if (max < mp["C"]) {
        max = mp["C"];
        ans = "C";
    } if (max < mp["D"]) {
        max = mp["D"];
        ans = "D";
        //debug("D");
    }
    cout << ans << endl;
    return 0;
}
