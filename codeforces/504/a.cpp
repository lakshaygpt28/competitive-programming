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
    string s, t;
    string ans;
    ll n , m;
    cin >> n >> m;
    cin >> s >> t;
    if (n > m + 1) {
        ans = "NO";
        //debug(ans);
        cout << ans << endl;
        return 0;
    }
    bool flag = 1;
    for (ll i = 0; i < n and s[i] != '*' ; i++) {
        //debug(s[i]),debug(t[i]);
        // if (t[i] == '*') {
        //     break;
        // }
        if (s[i] == t[i]) {
            continue;
        } else {
            flag = 0;
            break;
        }
    }
    for (ll i = n-1,j = m-1; i >=0 and s[i] != '*' ; i--,j--) {
        //debug(s[i]),debug(t[j]);
        // if (t[j] == '*') {
        //     break;
        // }
        if (s[i] == t[j]) {
            continue;
        } else {
            flag = 0;
            break;
        }
    }
    if (flag) {
        cout << "YES\n";
    } else cout << "NO\n";

    return 0;
}
