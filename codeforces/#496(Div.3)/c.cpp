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
    ll n,i,j,len,find,ans=0;
    cin>>n;
    ll a[n];
    vll arr_of_2;
    for(i = 0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);
    j = 1;
    while(j<=2000000000){
      arr_of_2.PB(j);
      j*=2;
    }
    len = arr_of_2.size();
    //WATCH(len);
    if (n<=1) {
      ans = n;
      cout<<ans<<endl;
      return 0;
    }
    for ( i = 0; i < n; i++) {
      find = 0;
      for ( j = 0; j < len ; j++) {
        if (arr_of_2[j]>a[i]) {
          if (i>0) {
            if(binary_search(a, a+i , arr_of_2[j]-a[i])){
              find = 1;
            }

          }
          if (i<n-1) {
            if(binary_search(a+i+1, a+n , arr_of_2[j]-a[i])){
              find = 1;
            }

          }
          if (find) {
            break;
          }

        }

      }
      if (!find) {
        //WATCH(i);
        //WATCH(a[i]);
        ans+=1;
      }
    }
    cout<<ans<<endl;
    return 0;
}
