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
    ll n, m ,d;
    cin >> n >> m >> d;
    map < ll, ll > coff;
    set < ll > a;
    ll inp;
    for (ll i = 0; i < n; i++) {
        cin >> inp;
        coff[inp] = i;
        a.insert(inp);
    }
    //sort(coff.begin(), coff.end())
    vector< pll > ans;
    ll day = 1;
    ll f;
    //debug("working 1 !!");
    while(!a.empty()) {
        //debug("working 2 !!");
        auto it = a.begin();
        //debug(*it);
        if (*it <= m) {
            ans.pb({coff[*it], day});
            f = *it;
            a.erase(it);
        }

        while (!a.empty()) {
            //debug("working 3 !!");
            auto mi = a.upper_bound(f+d);
            //debug(*mi);
            if (mi == a.end()) {
                day++;
                break;
            } else {
                ans.pb({coff[*mi], day});
                f = *mi;
                a.erase(mi);
            }
        }
    }
    cout << day << endl;
    sort(ans.begin(), ans.end());
    for (auto el : ans) {
        cout << el.second << " ";
    }
    cout << endl;

    return 0;
}
