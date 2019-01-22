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
    double m,wt;
    cin>>n>>m;
    vll a(n),b(n);
    double fuel = 0;
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin>>b[i];
    }
    if (b[0]==1) {
        fuel = -1;
        cout<<fuel<<endl;
        fflush(stdout);
        return 0;
    }
    wt = m;
    fuel += (m/(b[0]-1));
    wt += fuel;
    for (ll i = n-1,j = 0; i > 0; i--) {
        if (a[i] == 1) {
            fuel = -1;
            cout<<fuel<<endl;
            fflush(stdout);
            return 0;
        } else wt += (wt/(a[i]-1));

        if (b[i] == 1) {
            fuel = -1;
            cout<<fuel<<endl;
            fflush(stdout);
            return 0;
        } else wt += (wt/(b[i]-1));

    }

    if (a[0] == 1) {
        fuel = -1;
        cout<<fuel<<endl;
        fflush(stdout);
        return 0;
    } else wt += (wt/(a[0]-1));

    fuel = wt - m;
    cout<<setprecision(9)<<fuel<<endl;


    return 0;
}
