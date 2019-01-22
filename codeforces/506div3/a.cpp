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
    ll n ,k;
    cin >> n >> k;
    string t, s;
    cin >> t;
    ll len = t.size();
    //debug(len);
    ll m = 1;
    while (true) {
        //debug(m);
        string c = t.substr (len-m,m);
        s = t;
        for (ll i = 0; i < k-1; i++) {
            s += c;
        }
        //debug(s);
        ll l = s.size();
        ll ans = 0;
        for ( ll i = 0; i <= l-len; i++) {
            bool flag = 1;
            for (ll j = 0; j < len; j++) {
                if (t[j] != s[i+j]) {
                    flag = 0;
                    break;
                }

            }
            if (flag) {
                ans++;
            }
            //debug(ans);

        }
        if (ans == k) {
            cout << s << endl;
            return 0;
        }
        m++;
    }

    return 0;
}
