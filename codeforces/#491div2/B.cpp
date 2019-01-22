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
    ll n,i,ans;
    double sum,minsum;
    cin>>n;
    vll grades(n);
    for (i = 0;i<n;i++)
      cin>>grades[i];
    sort(grades.begin(),grades.end());
    sum =  accumulate(grades.begin(), grades.end(), 0);
    i = 0;
    ans = 0;
    minsum = n*4.5;
    while (sum<minsum){
      sum-=grades[i];
      sum+=5;
      ans++;
      i++;
    }
    cout<<ans<<endl;
    return 0;
}
