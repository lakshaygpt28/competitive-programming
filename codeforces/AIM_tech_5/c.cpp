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
    vll x1(n),y1(n),x2(n),y2(n);
    multiset < ll > X1, Y1, X2, Y2;
    for (ll i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        X1.insert(x1[i]),X2.insert(x2[i]),Y1.insert(y1[i]),Y2.insert(y2[i]);
    }
    for (ll i = 0; i < n; i++) {
        X1.erase(X1.find(x1[i]));
        Y1.erase(Y1.find(y1[i]));
        X2.erase(X2.find(x2[i]));
        Y2.erase(Y2.find(y2[i]));
        auto a = X1.rbegin();
        auto b = Y1.rbegin();
        auto c = X2.begin();
        auto d = Y2.begin();
        //debug(*a),debug(*b),debug(*c),debug(*d);
        if (*a <= *c and *b <= *d) {
            cout << *a << " " << *b << endl;
            return 0;
        }
        X1.insert(x1[i]),X2.insert(x2[i]),Y1.insert(y1[i]),Y2.insert(y2[i]);
    }
    return 0;
}
