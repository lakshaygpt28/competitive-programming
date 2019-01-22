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
    multiset < pair < pll , ll > > circle;
    ll t;
    ll xi, yi, ri;
    cin >> t;
    string s;
    while (t--) {
        cin >> s >> xi >> yi >> ri;
        if (s == "A") {
            ll l = circle.size();
            bool flag = 1;
            for (auto el : circle) {
                if ((el.first.first-xi)*(el.first.first-xi) + (el.first.second - yi )*(el.first.second - yi) < (el.second + ri)*(el.second + ri)) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                cout << "Ok" << endl;
                circle.insert({{xi,yi},ri});
            } else {
                cout << "No" << endl;
            }
        } else if (s == "R") {
            ll l = circle.size();
            bool flag = 1;
            for (auto el = circle.begin(); el != circle.end() ; el++) {
                if ((*el).first.first == xi and (*el).first.second == yi and (*el).second == ri) {
                    cout << "Ok" << endl;
                    flag = 0;
                    circle.erase(el);
                    break;
                }
            }
            if (flag) {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
