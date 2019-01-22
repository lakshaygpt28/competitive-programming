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

ll X = 1e10;

int main() {
    fast_io();
    ll n;
    cin >> n;
    vll a(n);
    pll maxneg = {-inf, -1};
    ll no_of_neg = 0, no_of_zero = 0;
    ll index_of_zero = inf;
    ll last_index_of_zero = -1;
    ll no_pos = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            no_of_neg += 1;
            if (a[i] > maxneg.first) {
                maxneg = {a[i], i};
            }
        }
        if (a[i] == 0) {
            no_of_zero += 1;
            if (index_of_zero > i) {
                index_of_zero = i;
            }
            last_index_of_zero = i;
        }
        if (a[i] > 0) {
            no_pos+=1;
        }
    }
    if (no_of_neg&1) {
        if (no_of_zero > 0) {
            cout << "1 " << maxneg.second+1 << " " << index_of_zero+1 << endl;
            a[maxneg.second] = X;
        } else {
            cout << "2 " << maxneg.second+1 << endl;
            a[maxneg.second] = X;
        }
    }
    // zero k liye
    vll zero;
    for (ll i = 0; i < n; i++) {
        if (a[i] == 0) {
            zero.pb(i);
        }
    }
    ll l = zero.size();
    for (ll i = 0; i < l - 1; i++) {
        cout << "1 " << zero[i]+1 << " " << zero[i+1]+1 << endl;
        a[zero[i]] = X;
    }
    if (l != 0 and (no_pos != 0 or no_of_neg > 1)) {
        cout << "2 " << zero[l-1]+1 << endl;
        a[zero[l-1]] = X;
    }
    vll ans;
    for (ll i = 0; i < n; i++) {
        if (a[i] != X) {
            ans.pb(i);
        }
    }
    ll len = ans.size();
    for (ll i = 0; i < len -1 ; i++) {
        cout << "1 " << ans[i]+1 << " " << ans[i+1]+1 << endl;
    }
    return 0;
}
