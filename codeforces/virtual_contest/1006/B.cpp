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
    ll i,j,k,n,ANS=0,x;
    cin>>n>>k;
    vll a(n),position(k),ans(k);
    vector< pll > a_sort;
    for ( i = 0; i < n; i++) {
        cin>>a[i];
        a_sort.pb({a[i],i});
    }
    sort(a_sort.begin(),a_sort.end());
    for ( i = 0,j = n-1; i < k; i++,j--) {
        ANS+=a_sort[j].first;
        position[i]= a_sort[j].second;
    }
    cout<<ANS<<endl;
    /*for ( i = 0; i < k; i++) {
        cout<<position[i]<<" ";
    }*/

    sort(position.begin(),position.end());
    ans[k-1]= n-position[k-1];
    x=position[k-1];
    //ans[0] = position[0]+1;

    for ( i = k-2; i > 0; i--) {
        ans[i] = x-position[i];
        x=position[i];
    }
    if (k > 1) {
        ans[0] = position[1];
    }
    else ans[0] = n;

    for ( i = 0; i < k; i++) {
        cout<<ans[i]<<" ";
    }

    cout<<endl;
    return 0;
}
