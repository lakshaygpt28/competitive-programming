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
    string s, t, sort_S, sort_T;
    cin >> s >> t;
    sort_S = s;
    sort_T = t;
    sort(sort_T.begin(),sort_T.end());
    sort(sort_S.begin(),sort_S.end());
    if (sort_S != sort_T) {
        cout << -1 << endl;
        return 0;
    }
    ll no_of_swap = 0;
    vll SWAP;
    for (ll i = 0; i < n; i++) {
        if (s[i] == t[i]) {
            continue;
        } else {
            for (ll j = i+1; j < n; j++) {
                if (t[i] == s[j]) {
                    for (ll k = j-1; k >= i ; k--) {
                        swap(s[k],s[k+1]);
                        no_of_swap++;
                        SWAP.pb(k+1);
                        //debug(s);
                    }
                    //break;
                }
            }
        }
    }
    cout << no_of_swap << endl;
    ll len = SWAP.size();
    for (ll i = 0; i < len; i++) {
        cout << SWAP[i] <<" ";
    }
    cout<<endl;
    return 0;
}
