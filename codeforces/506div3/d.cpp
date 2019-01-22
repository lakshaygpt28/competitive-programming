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
    int n;
    int k;
    cin >> n >> k;
    int a[n];
    int m[k];
    for(int i=0; i<k; i++)
       m[i]=0;
    for(int i = 0; i < n; i++){
       cin >> a[i];
        m[a[i]%k]++;
    }
    int sum=0;
    sum+=(m[0]*(m[0]-1))/2;
     for(int i=1; i<=k/2 && i!=k-i; i++){
         sum+=m[i]*m[k-i];
     }
    if(k%2==0)
        sum+=(m[k/2]*(m[k/2]-1))/2;
    cout<<sum;
    return 0;
}
