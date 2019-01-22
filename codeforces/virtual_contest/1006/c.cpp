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
    ll n,i,j,k,max,current;
    cin>>n;
    vll d(n),sum1(n);
    ll sum3[n];
    cin>>d[0];
    sum1[0] = d[0];
    for (i = 1; i < n; i++) {
        cin>>d[i];
        sum1[i] = sum1[i-1] + d[i];
    }
    for (i = n-1,j=0; i >= 0; i--,j++) {
        sum3[i] = sum1[n-1] - sum1[j];
    }

    max = 0;
    for (i = 0; i < n; i++) {
        current = binary_search(sum3,sum3+n-i,sum1[i]);
        //debug(current);
        if (current) {
            if (sum1[i]>max) {
                max = sum1[i];
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
