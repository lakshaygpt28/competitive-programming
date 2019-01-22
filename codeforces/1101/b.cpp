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
#ifndef ONLINE_JUDGE
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " : " << arg1 << std :: endl;
}
template < typename Arg1, typename... Args >
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define debug(...)
#endif
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    string s;
    cin >> s;
    ll len = s.size();
    ll b1 = -1, b2 = -1, c1 = -1, c2 = -1;
    for (ll i = 0; i < len; i++) {
        if (s[i] == '[') {
            b1 = i;
            break;
        }
    }
    if(b1 != -1) {
        for (ll i = b1; i < len; i++) {
            if (s[i] == ':') {
                c1 = i;
                break;
            }
        }
    }
    for (ll i = len - 1; i >= 0; i--) {
        if (s[i] == ']') {
            b2 = i;
            break;
        }
    }
    if (b2 != -1) {
        for (ll i = b2; i >= 0; i--) {
            if (s[i] == ':') {
                c2 = i;
                break;
            }
        }
    }
    ll cnt = 0;
    if (b1 < c1 and c1 < c2 and c2 < b2 and c1 != -1 and c2 != -1 and b1 != -1 and b2 != -1) {
        for (ll i = c1 + 1; i < c2; i++) {
            if (s[i] == '|') {
                cnt++;
            }
        }
        cout << 4 + cnt << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
