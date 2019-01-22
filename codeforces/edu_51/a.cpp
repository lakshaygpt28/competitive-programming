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
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool capital = 0, small = 0, number = 0;
        ll C = 0, S = 0, N = 0;
        for (ll i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' and s[i] <= 'z') {
                small = 1;
                S++;
            } else if (s[i] >= 'A' and s[i] <= 'Z') {
                capital = 1;
                C++;
            } else if (s[i] >= '0' and s[i] <= '9') {
                number = 1;
                N++;
            }
        }
        if (small and number and !capital) {
            if (S >= N) {
                for (ll i = 0; i < s.size() - 1; i++) {
                    if (s[i] >= 'a' and s[i] <= 'z' and s[i+1] >= '0' and s[i+1] <= '9') {
                        s[i] = 'A';
                        cout << s << endl;
                        break;
                    } else if (s[i+1] >= 'a' and s[i+1] <= 'z' and s[i] >= '0' and s[i] <= '9') {
                        s[i + 1] = 'A';
                        cout << s << endl;
                        break;
                    }
                }
                continue;
            } else {
                for (ll i = 0; i < s.size() - 1; i++) {
                    if (s[i] >= 'a' and s[i] <= 'z' and s[i+1] >= '0' and s[i+1] <= '9') {
                        s[i + 1] = 'A';
                        cout << s << endl;
                        break;
                    } else if (s[i+1] >= 'a' and s[i+1] <= 'z' and s[i] >= '0' and s[i] <= '9') {
                        s[i] = 'A';
                        cout << s << endl;
                        break;
                    }
                }
                continue;
            }

        } else  if (small and !number and capital) {
            if (S >= C) {
                for (ll i = 0; i < s.size() - 1; i++) {
                    if (s[i] >= 'a' and s[i] <= 'z' and s[i+1] >= 'A' and s[i+1] <= 'Z') {
                        s[i] = '1';
                        cout << s << endl;
                        break;
                    } else if (s[i+1] >= 'a' and s[i+1] <= 'z' and s[i] >= 'A' and s[i] <= 'Z') {
                        s[i + 1] = '1';
                        cout << s << endl;
                        break;
                    }
                }
            } else {
                for (ll i = 0; i < s.size() - 1; i++) {
                    if (s[i] >= 'a' and s[i] <= 'z' and s[i+1] >= 'A' and s[i+1] <= 'Z') {
                        s[i + 1] = '1';
                        cout << s << endl;
                        break;
                    } else if (s[i+1] >= 'a' and s[i+1] <= 'z' and s[i] >= 'A' and s[i] <= 'Z') {
                        s[i] = '1';
                        cout << s << endl;
                        break;
                    }
                }
            }
            continue;
        } else  if (!small and number and capital) {
            if (N >= C) {
                for (ll i = 0; i < s.size() - 1; i++) {
                    if (s[i] >= '0' and s[i] <= '9' and s[i+1] >= 'A' and s[i+1] <= 'Z') {
                        s[i] = 'a';
                        cout << s << endl;
                        break;
                    } else if (s[i+1] >= '0' and s[i+1] <= '9' and s[i] >= 'A' and s[i] <= 'Z') {
                        s[i + 1] = 'a';
                        cout << s << endl;
                        break;
                    }
                }
                continue;
            } else {
                for (ll i = 0; i < s.size() - 1; i++) {
                    if (s[i] >= '0' and s[i] <= '9' and s[i+1] >= 'A' and s[i+1] <= 'Z') {
                        s[i + 1] = 'a';
                        cout << s << endl;
                        break;;
                    } else if (s[i+1] >= '0' and s[i+1] <= '9' and s[i] >= 'A' and s[i] <= 'Z') {
                        s[i] = 'a';
                        cout << s << endl;
                        break;;
                    }
                }
                continue;
            }

        } else if (small and !number and !capital) {
            s[0] = 'A';
            s[1] = '1';
            cout << s << endl;
            continue;
        } else if (!small and number and !capital) {
            s[0] = 'A';
            s[1] = 'a';
            cout << s << endl;
            continue;
        } else if (!small and !number and capital) {
            s[0] = 'a';
            s[1] = '1';
            cout << s << endl;
            continue;
        } else if (small and number and capital) {
            cout << s << endl;
            continue;
        }
    }
    return 0;
}
