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
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1*x1 + y1*y1 > x2*x2 + y2*y2) {
        cout << "Wil\n";
    } else if (x1*x1 + y1*y1 < x2*x2 + y2*y2) {
        cout << "Russo\n";
    } else cout << "Empate\n";
    return 0;
}
