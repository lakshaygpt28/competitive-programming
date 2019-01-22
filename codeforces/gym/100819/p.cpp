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
    string s;
    cin >> s;
    ll alp[26];
    ll ans = 0;
    for (ll i = 0; i < 26; i++) {
        alp[i] = 0;
    }
    for (ll i = 0; i < s.size(); i++) {
        alp[s[i] - 'a']++;
    }
    sort(alp , alp + 26, greater < ll >());
    for (ll i = 2; i < 26; i++) {
        ans += alp[i];
    }
    cout << ans << endl;
    return 0;
}
