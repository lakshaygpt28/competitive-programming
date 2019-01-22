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

vector < ll > p11, p10, p01, p00;

int main() {
    fast_io();
    ll n;
    cin >> n;
    ll vote, infl;
    for (ll i = 0; i < n; i++) {
        cin >> vote >> infl;
        if (vote == 11) {
            p11.pb(infl);
        } else if (vote == 10) {
            p10.pb(infl);
        } else if (vote == 01) {
            p01.pb(infl);
        } else {
            p00.pb(infl);
        }
    }
    sort(p11.begin(), p11.end(), greater < ll >());
    sort(p10.begin(), p10.end(), greater < ll >());
    sort(p01.begin(), p01.end(), greater < ll >());
    sort(p00.begin(), p00.end(), greater < ll >());
    ll ans = 0, cnt = 0;
    for (ll i = 0; i < p11.size(); i++) {
        ans += p11[i];
        cnt++;
    }
    ll len_mn = min(p10.size(), p01.size());
    for (ll i = 0; i < len_mn; i++) {
        ans += p10[i] + p01[i];
    }
    if (p10.size() > p01.size()) {
        for (ll i = len)
    }
    return 0;
}
