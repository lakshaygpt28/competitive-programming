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
    ll n,k,sum=0;
    cin>>n>>k;
    string s;
    vll ans;
    cin>>s;
    sort(s.begin(),s.end());
    ll len = s.size();
    ans.pb(s[0]);
    for (ll i = 1,j = 0; i < n; i++ ) {
        if (s[i]>ans[j]+1) {
            ans.pb(s[i]);
            j++;
        }
    }
    if (ans.size()<k) {
        cout<<-1<<endl;
        fflush(stdout);
        return 0;
    }
    for (ll i = 0; i < k; i++) {
        sum += (ans[i]-96);
    }
    cout<<sum<<endl;
    fflush(stdout);
    return 0;
}
