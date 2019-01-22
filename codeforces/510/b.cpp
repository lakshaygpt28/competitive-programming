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
    map < string, ll > vit;
    ll n;
    cin >> n;
    ll ci;
    string vi;
    vit["A"] = vit["C"] = vit["B"] = vit["AC"] = vit["BC"] = vit["AB"] = vit["ABC"] = 1000001;
    for (ll i = 0; i < n; i++) {
        cin >> ci >> vi;
        sort(vi.begin(),vi.end());
        if (vit.find(vi) == vit.end()) {
            vit[vi] = ci;
        } else if (vit[vi] > ci) {
            vit[vi] = ci;
        }
    }
    // for (auto el: vit) {
    //     cout << el.first << " " << el.second << endl;
    // }
    ll min = inf;
    if (min > vit["A"] + vit["B"] + vit["C"]) {
        min = vit["A"] + vit["B"] + vit["C"];
    } if (min > vit["A"] + vit["BC"]) {
        min = vit["A"] + vit["BC"];
    } if (min > vit["B"] + vit["AC"]) {
        min = vit["B"] + vit["AC"];
    } if (min > vit["C"] + vit["AB"]) {
        min = vit["C"] + vit["AB"];
    } if (min > vit["ABC"]) {
        min = vit["ABC"];
    } if (min > vit["AC"] + vit["AB"]) {
        min = vit["AC"] + vit["AB"];
    } if (min > vit["BC"] + vit["AB"]) {
        min = vit["BC"] + vit["AB"];
    } if (min > vit["AC"] + vit["BC"]) {
        min = vit["AC"] + vit["BC"];
    }
    if (min >= 1000001) {
        cout << -1 << endl;
    } else {
         cout << min << endl;
    }
    return 0;
}
