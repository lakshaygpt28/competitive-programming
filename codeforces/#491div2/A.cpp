#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair <int,int> pi;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <pair<int,int>> vp;
typedef vector <tuple<int,int,int>> vt;

#define WATCH(x) cout << (#x) << " is " << (x) << endl
#define F first
#define S second
#define T third
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define rep(i,a,b) for(int i = a; i <= b; i++)

const ll MOD = 1e9 + 7;
const double PI = 2 * acos(0.0);

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a,b,c,n,ans;
    cin>>a>>b>>c>>n;
    ans = n - (a + b - c);
    if ((ans<1) or (a>n-1) or (n-1 < b) or (c > a+b) or (c>n-1)) {
      cout<<"-1"<<endl;

    }
    else
      cout<<ans<<endl;
    return 0;
}
