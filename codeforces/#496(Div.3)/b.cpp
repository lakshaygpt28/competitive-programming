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
    string s,t;
    ll i,j,len1,len2,len,common=0;
    cin>>s>>t;
    len1 = s.size();
    len2 = t.size();
    len = min(len1,len2);
    for(i = 0;i<len;i++){
      if (s[len1-i-1]==t[len2-i-1]) {
        common++;
      }
      else
        break;
    }
    cout<<(len1+len2)-2*(common)<<endl;
    return 0;
}
