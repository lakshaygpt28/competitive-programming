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
    multiset < ll > a, b;
    ll inp;
    for (ll i = 0; i < n; i++) {
        cin >> inp;
        a.insert(inp);
    }
    for (ll i = 0; i < n; i++) {
        cin >> inp;
        b.insert(inp);
    }
    ll sum_a = 0, sum_b = 0;
    while (true) {
        if (a.empty() and b.empty()) {
            break;
        }
        // for A
        if (!a.empty() and !b.empty()) {
            auto it_a = a.end();
            it_a--;
            auto it_b = b.end();
            it_b--;
            if (*it_a > *it_b) {
                sum_a += *it_a;
                a.erase(it_a);
            } else {
                b.erase(it_b);
            }
        } else if(!a.empty()) {
            auto it_a = a.end();
            it_a--;
            sum_a += *it_a;
            a.erase(it_a);
        } else {
            auto it_b = b.end();
            it_b--;
            b.erase(it_b);
        }
        if (!a.empty() and !b.empty()) {
            auto it_a = a.end();
            it_a--;
            auto it_b = b.end();
            it_b--;
            if (*it_a < *it_b) {
                sum_b += *it_b;
                b.erase(it_b);
            } else {
                a.erase(it_a);
            }
        } else if(!a.empty()) {
            auto it_a = a.end();
            it_a--;
            a.erase(it_a);
        } else {
            auto it_b = b.end();
            it_b--;
            sum_b += *it_b;
            b.erase(it_b);
        }

    }
    cout << sum_a - sum_b << endl;
    return 0;
}
