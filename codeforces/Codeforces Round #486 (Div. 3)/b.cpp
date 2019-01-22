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

vector < pair < ll, string > > a;

int main() {
    fast_io();
    ll n;
    cin >> n;
    for (ll i = 0; i < n; ++i) {
        string s;
        cin >> s;
        a.pb({s.size(), s});
    }
    sort(a.begin(), a.end());
    ll len = a.size();
    for (ll i = 0; i < len-1; ++i) {
        if (a[i + 1].second.find(a[i].second) != std::string::npos) {
            continue;
        } else {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    for (ll i = 0; i < len; ++i) {
        cout << a[i].second << "\n";
    }
    return 0;
}
