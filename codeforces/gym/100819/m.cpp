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
    // ll ans = 0;
    ll cnt = 0;
    bool ans[101] = {false};
    std::vector< pair < string, ll > > op(n);
    for (ll i = 0; i < n; i++) {
        cin >> op[i].first;
        cin >> op[i].second;
    }
    for (ll i = 1; i <= 100; i++) {
        ll num = i;
        for (ll j = 0; j < n; j++) {
            if (op[j].first == "ADD") {
                num += op[j].second;
            } else if (op[j].first == "SUBTRACT") {
                num -= op[j].second;
                if (num < 0) {
                    ans[i] = true;
                    break;
                }
            } else if (op[j].first == "MULTIPLY") {
                num *= op[j].second;
            } else if (op[j].first == "DIVIDE") {
                if (num % op[j].second == 0) {
                    num /= op[j].second;
                } else {
                    ans[i] = true;
                    break;
                }

            }
        }

    }
    for (ll i = 1; i <= 100; i++) {
        if (ans[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
