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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll c0 = 0, c1 = 0, c2 = 0, c = n / 3;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '0') {
            c0++;
        }if (s[i] == '1') {
            c1++;
        }if (s[i] == '2') {
            c2++;
        }
    }
    if (c2 < c) {
        for (ll i = n - 1; i >= 0; i--) {
            if (c2 == c) {
                break;
            }
            if (s[i] == '1' and c1 > c) {
                s[i] = '2';
                c1--;
                c2++;
            }
            else if (s[i] == '0' and c0 > c) {
                s[i] = '2';
                c0--;
                c2++;
            }
        }
        if (c1 < c) {
            for (ll i = n - 1; i >= 0; i--) {
                if (c1 == c) {
                    break;
                }
                if (s[i] == '0' and c0 > c) {
                    s[i] = '1';
                    c1++;
                    c0--;
                }
            }
        }
        if (c0 < c) {
            for (ll i = 0; i < n; i++) {
                if (c0 == c) {
                    break;
                }
                if (s[i] == '1' and c1 > c and c0 < c) {
                    s[i] = '0';
                    c1--;
                    c0++;
                }
            }
        }
    } else if (c2 > c){
        if (c0 < c) {
            for (ll i = 0; i < n; i++) {
                if (c0 == c or c2 == c) {
                    break;
                }
                if (s[i] == '2' and c0 < c and c2 > c) {
                    s[i] = '0';
                    c0++;
                    c2--;
                }
            }
        }
        if (c1 > c) {
            for (ll i = 0; i < n; i++) {
                if (c1 == c or c0 == c) {
                    break;
                }
                if (s[i] == '1' and c1 > c and c0 < c) {
                    s[i] = '0';
                    c1--;
                    c0++;
                }
            }
        }
        if (c1 < c) {
            for (ll i = 0; i < n; i++) {
                if (c1 == c or c2 == c) {
                    break;
                }
                if (s[i] == '2' and c1 < c and c2 > c) {
                    s[i] = '1';
                    c1++;
                    c2--;
                }
            }
        }
        if (c1 < c) {
            for (ll i = n - 1; i >= 0; i--) {
                if (c1 == c) {
                    break;
                }
                if (s[i] == '0' and c0 > c) {
                    s[i] = '1';
                    c1++;
                    c0--;
                }
            }
        }
    } else {
        if (c1 > c) {
            for (ll i = 0; i < n; i++) {
                if (c1 == c) {
                    break;
                }
                if (s[i] == '1' and c1 > c) {
                    s[i] = '0';
                    c1--;
                    c0++;
                }
            }
        }
        if (c1 < c) {
            for (ll i = n - 1; i >= 0; i--) {
                if (c1 == c) {
                    break;
                }
                if (s[i] == '0' and c1 < c) {
                    s[i] = '1';
                    c1++;
                    c0--;
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}
