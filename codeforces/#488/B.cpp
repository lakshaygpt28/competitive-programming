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
    ll n,k,i,m;
    cin>>n>>k;
    vector < pair<ll,pair<ll,ll> > > p(n);
    vll ans(n),K(k);
    //pair <ll,ll> minK;
    //minK.F=0,minK.S=0;
    for (i = 0 ; i<n;i++){
      cin>>p[i].F;
      p[i].S.S = i;
    }
    for (i = 0 ; i<n;i++){
      cin>>p[i].S.F;
    }
    if (k == 0) {
      for (i = 0 ; i<n;i++){
        cout<<p[i].S.F<<" ";
      }
      cout<<endl;
      return 0;
    }
    sort(p.begin(),p.end());
    ans[p[0].S.S] = p[0].S.F;
    for (i = 1;i<n;i++){
      if (K.size()<k and p[i].F > p[i-1].F) {
          K.push_back(p[i-1].S.F);
      }
      else if (K.size()==k and p[i].F > p[i-1].F) {
        sort(K.begin(),K.end());
        //m = distance(K.begin(),min_element(K.begin(),K.end()));
        if (p[i-1].S.F>K[0]) {
          K.erase(K.begin()+0);
          K.push_back(p[i-1].S.F);
        }
      }
      ans[p[i].S.S] = accumulate(K.begin(), K.end(), 0) + p[i].S.F;
    }
    for(i = 0;i<n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}
