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
    map<string, ll> mp;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll len = s.size();

    for (ll i = 0; i < len-1; i++) {
        string t = s.substr(i,2);
        mp[t] += 1;
    }
    ll max = 0;
    string ans;
    for (auto el:mp) {
        //debug(el.first);
        if (el.second > max) {
            max = el.second;
            ans = el.first;
        }
    }
    cout << ans << endl;
    return 0;
}
