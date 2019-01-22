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
    ll i,j,n,MAX;
    cin>>n;

    vll a(n);
    for ( i = 0; i < n; i++) {
         cin>>a[i];
         if (a[i]%2 == 0) {
             a[i] -= 1;
         }
    }
    for ( i = 0; i < n; i++) {
         cout<<a[i]<<" ";
    }
    cout<<endl;


    return 0;
}
