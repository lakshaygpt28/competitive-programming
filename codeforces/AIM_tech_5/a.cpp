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
    ll n, m;
    cin >> n >> m;
    char matrix[n][m];
    bool f = 0;
    ll I = 0,J = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> matrix[i][j];
            if (!f and matrix[i][j] == 'B') {
                I = i;
                J = j;
                f = 1;
            }
        }
    }
    for (ll i = 0; i < n; i++) {
        ll length = 0;
        bool flag = 0;
        for (ll j = 0; j < m; j++) {
            if (matrix[i][j] == 'B') {
                length++;
                flag = 1;
            }
        }
        if (flag) {
            cout << I+(length/2) + 1 << " " << J + (length/2) + 1 << endl;
            return 0;
        }
    }

    return 0;
}
