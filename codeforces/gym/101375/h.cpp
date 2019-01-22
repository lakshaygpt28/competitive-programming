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
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int main() {
    fast_io();
    char ch;
    ll low = 1, high = 1e9, mid;
    // ll count = 0;
    while (true) {
        // count++;
        mid = (high + low)/2;
        cout << "Q " << mid << "\n";
        cout.flush();
        cin >> ch;
        if (ch == '=') {
            break;
        } else if (ch == '<') {
            //cout << "Q " << mid << "\n";
            //mid = (high + low)/2;
            high = mid - 1;

        } else {
            // cout << "Q " << mid << "\n";
            //mid = (high + low)/2;
            low = mid + 1;
            //cout.flush();
        }
    }
    //debug(count);
    return 0;
}
