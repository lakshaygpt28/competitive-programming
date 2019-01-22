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
    ll n, h;
    cin >> n >> h;
    vector < pll > p(n);
    for (ll i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }
    vector < pll > distance;
    ll maxdis, height = 0;
    distance.pb({ll(0),ll(0)});
    for (ll i = 0; i < n-1; i++) {
        maxdis = p[i+1].second - p[0].first;
        height += p[i+1].first - p[i].second;
        distance.pb({maxdis, height});
    }
    // for (auto el : distance) {
    //     cout << el.first << " " << el.second << endl;
    // }
    maxdis = 0;
    ll currdis =0;
    height = 0;
    ll maxheight = 0;
    for (ll i = 1 ,j = 0; i < n and j < n-1;) {
        currdis = p[i].second - p[j].first;
        height = distance[i].second - distance[j].second;
        //debug(currdis), debug(height);
        if (height < h) {
            if (maxdis - maxheight < currdis - height) {
                maxdis = currdis;
                maxheight = height;
            }
            i++;
        } else {
            j++;
        }

    }
    if (n == 1) {
        cout << p[0].second - p[0].first + h << endl;
    } else {
        cout << maxdis + h - maxheight << endl;
    }
    //debug(maxdis), debug(maxheight);
    return 0;
}
