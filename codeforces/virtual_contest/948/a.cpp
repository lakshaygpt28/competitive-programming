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

char s[502][502];

int main() {
    fast_io();
    for (ll i = 0; i <= 501; i++) {
        for (ll j = 0; j <= 501; j++) {
            s[i][j] = '.';
        }
    }
    ll r, c;
    cin >> r >> c;
    for (ll i = 1; i <= r; i++) {
        for (ll j = 1; j <= c; j++) {
            cin >> s[i][j];
        }
    }
    for (ll i = 1; i <= r; i++) {
        for (ll j = 1; j <= c; j++) {
            if (s[i][j] == 'W') {
                if (s[i][j + 1] == 'S' or s[i + 1][j] == 'S' or s[i][j - 1] == 'S' or s[i - 1][j] == 'S') {
                    cout << "No" << endl;
                    return 0;
                }
                if (s[i][j + 1] == '.') {
                    s[i][j + 1] = 'D';
                }
                if (s[i + 1][j] == '.') {
                    s[i + 1][j] = 'D';
                }
                if (s[i - 1][j] == '.') {
                    s[i - 1][j] = 'D';
                }
                if (s[i][j - 1] == '.') {
                    s[i][j - 1] = 'D';
                }
            }
        }
    }
    cout << "Yes" << endl;
    for (ll i = 1; i <= r; i++) {
        for (ll j = 1; j <= c; j++) {
            cout << s[i][j];
        }
        cout << endl;
    }



    return 0;
}
