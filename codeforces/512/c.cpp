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
    ll n;
    cin >> n;
    string num;
    cin >> num;
    ll total = 0;
    for (ll i = 0; i < n; ++i)
    {
        total += (num[i]-'0');
    }
    if (total == 0)
    {
        cout << "YES\n";
        return 0;
    }
    for (ll i = 0; i < total; ++i)
    {
        //debug(i);
        bool flag = 1;
        ll sum = 0;
        for (ll j = 0; j < n; ++j)
        {
            sum += (num[j] - '0');
            // if (num[j] == '0')
            // {
            //     continue;
            // }
            if (sum == i)
            {
                sum = 0;
                continue;
            }
             else if (sum > i)
            {
                flag = 0;
                break;
            }
            if (j == n-1 and sum != 0 )
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
