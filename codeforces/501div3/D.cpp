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
    long double divide, k, s, forw;
    cin >> n >> k >> s;
    divide = s/k;
    if (s<k) {
        cout <<"NO\n";
        return 0;
    }
    forw = round(divide);
    if (divide <= n-1) {
        cout << "YES\n";
        for (ll i = 0; i < ll(k-1); i++) {
            if (i%2 == 0) {
                cout<< forw+1<< " ";
            } else cout << 1 << " ";
            s -= forw;
        }
        if ((ll(k-1))%2 == 0 ) {
            cout<<fixed<<setprecision(0)<< s+1<<endl;
        } else if (1+forw - s > 0) {
            cout<<fixed<<setprecision(0)<< 1+forw - s<<endl;
        } else {
            cout<<fixed<<setprecision(0)<< 1+forw + s<<endl;
        }
    } else cout << "NO\n";
    return 0;
}
