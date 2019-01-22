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
    ll n,m,ans = 0,curr,divisor;
    cin>>n>>m;
    vll a(m),freq(101),left;
    for (ll i = 0; i < m; i++) {
        cin>>a[i];
        freq[a[i]]++;
    }

    for (ll i = 0; i < 101; i++) {
        //debug(freq[i]);
        if (freq[i]) {
            left.pb(freq[i]);
        }
    }
    ll len = left.size();
    divisor = *max_element(left.begin(),left.end());
    //debug(len);
    while (divisor) {
        curr = 0;
        for (ll i = 0; i < len; i++) {
            curr += (left[i]/divisor);
        }
        if (curr >= n) {
            ans = divisor;
            break;
        }
        divisor--;
    }
    cout<<ans<<endl;
a    fflush(stdout);




    return 0;
}
