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
    vector< pair < string, string > > name;
    for (ll i = 0; i < n; i++) {
        string first, last;
        cin >> first >> last;
        name.pb({last, first});
    }
    sort(name.begin(), name.end());
    for (auto el : name) {
        cout << el.second << " " << el.first << endl;
    }
    return 0;
}
