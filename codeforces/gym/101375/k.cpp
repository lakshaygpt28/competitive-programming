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
    vector < string > s;
    string inp;
    while (cin >> inp) {
        s.pb(inp);
    }
    ll l = s.size();
    ll len = s[l-1].size();
    // debug(s[l-1][len-1]);

    if (s[l-1][len-1] == '?') {
        cout << "7" << endl;
        return 0;
    }
    bool flag = 0;
    for (ll i = 0; i < l; i++) {
        if (s[i] == "Sussu" or s[l-1] == "Sussu!" or s[l-1] == "Sussu.") {
            cout << "AI SUSSU!" << endl;
            flag = 1;
            break;
        }
    }
    if (!flag) {
        cout << "O cara é bom!" << endl;
    }
    return 0;
}
