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
    ll triangle1[3], triangle2[3];
    cin >> triangle1[0] >> triangle1[1] >> triangle1[2];
    cin >> triangle2[0] >> triangle2[1] >> triangle2[2];
    sort(triangle1, triangle1 + 3);
    sort(triangle2, triangle2 + 3);
    if ((triangle1[0] == triangle2[0]) and (triangle1[1] == triangle2[1]) and (triangle1[2] == triangle2[2]) and (triangle1[0] * triangle1[0] + triangle1[1] * triangle1[1] ==  triangle1[2] * triangle1[2])) {
        cout << "YES\n";
    } else cout << "NO\n";

    return 0;
}
