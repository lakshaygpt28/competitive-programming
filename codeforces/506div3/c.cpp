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
    vector< pll > a(n);
    multiset < ll > a1, a2;
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
        a1.insert(a[i].first),a2.insert(a[i].second);

    }
    ll max = 0, curr = 0;
    for (ll i = 0; i < n; i++) {
        a1.erase(a1.find(a[i].first));
        a2.erase(a2.find(a[i].second));
        auto x = a1.end();
        auto y = a2.begin();
        x--;
        curr = *y-*x;
        //debug(curr);
        if (curr > max) {
            max = curr;
        }
        //debug(*x),debug(*y);
        a1.insert(a[i].first),a2.insert(a[i].second);
    }
    cout << max << endl;
    return 0;
}
