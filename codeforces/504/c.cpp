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
    ll n, k;
    string bracket, ans;
    cin >> n >> k;
    //vector< pll > pr(n/2);
    cin >> bracket;
    ll count1 = 0,deg=0,count2 = 0;
    for (ll i = 0; i < n; i++) {

        if (bracket[i] == '(') {
            if (count1 < k/2) {
                cout << '(';
                count1++;
            }
        } else {
            if (count2 < k/2) {
                cout << ')';
                count2++;
            }
        }
    }
    cout << endl;
    return 0;
}
