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

map < ll ,ll > mp;

int main() {
    fast_io();
    ll front = 0;
    ll back = 1;
    ll q;
    cin >> q;
    char ch;
    ll n;
    while (q--) {
        cin >> ch >> n;
        if (ch == 'L') {
            mp[n] = front;
            front--;
        } else if (ch == 'R') {
            mp[n] = back;
            back++;
        } else {
            // debug(mp[n]), debug(front), debug(back);
            cout << min(mp[n] - front, back - mp[n]) - 1 << "\n";
        }
    }
    return 0;
}
