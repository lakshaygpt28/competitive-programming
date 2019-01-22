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
    queue<ll> c,a;
    ll i,j,n,m,inp,ans=0;
    cin>>n>>m;
    for ( i = 0; i < n; i++) {
      cin>>inp;
      c.push(inp);
    }
    for ( i = 0; i < m; i++) {
      cin>>inp;
      a.push(inp);
    }
    while(!a.empty() and !c.empty()){
      if (a.front()>=c.front()) {
        ans++;
        a.pop();
        c.pop();
      }
      else{
        c.pop();
      }

    }
    cout<<ans<<endl;


    return 0;
}
