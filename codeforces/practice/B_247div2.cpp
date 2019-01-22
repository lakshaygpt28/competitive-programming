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
    int matrix[5][5],i,j,arr[] = {1,2,3,4,5};
    ll sum,maxSum;
    for(i = 0;i<5;i++){
      for(j = 0; j<5;j++){
        cin>>matrix[i][j];
      }
    }
    maxSum = 0;
    do {
      sum = 0;
      //cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<endl;
      sum = matrix[arr[0]-1][arr[1]-1] + matrix[arr[1]-1][arr[0]-1] + 2*(matrix[arr[2]-1][arr[3]-1] + matrix[arr[3]-1][arr[2]-1]) + matrix[arr[1]-1][arr[2]-1]+ matrix[arr[2]-1][arr[1]-1] + 2*(matrix[arr[3]-1][arr[4]-1] + matrix[arr[4]-1][arr[3]-1]);
      if (sum>maxSum) {
        maxSum = sum;
      }
    } while(next_permutation(arr,arr+5));
    cout<<maxSum<<endl;
    return 0;
}
