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
    ll n;
    cin >> n;
    vll a(n);
    ll min = inf;
    ll min_index = -1;
    ll max = -inf;
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (min > (a[i])) {
            min = (a[i]);
            min_index = i;
        }
        if (max < a[i]) {
            max = a[i];
        }
    }
    if (n == 1) {
        cout << a[0] << endl;
        return 0;
    }
    if (max < 0) {
        for (ll i = 0; i < n; i++) {
            sum += abs(a[i]);
        }
        cout << sum + 2*max << endl;
        return 0;
    }
    ll sum_1 = 0;
    ll sum_2 = 0;
    for (ll i = 0; i < min_index; i++) {
        sum_1 += abs(a[i]);
    }
    for (ll i = min_index+1; i < n; i++) {
        sum_2 += abs(a[i]);
    }
    cout << sum_1 + sum_2 - a[min_index] << endl;



    return 0;
}
