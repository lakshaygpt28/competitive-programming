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

void primeFactors(ll n);
void SieveOfEratosthenes(ll n);
//vll prime;
set < ll > prime;
int main() {
    fast_io();
    ll n;
    cin >> n;
    vector< pll > arr(n);
    vll p;
    for (ll i = 0; i < n; i++) {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    primeFactors(arr[0].first);
    primeFactors(arr[0].second);
    for (auto it : prime) {
        //cout << it << " ";
        p.pb(it);
    }
    //cout << endl;
    ll len = p.size();
    for (ll i = len-1; i >= 0; i--) {
        bool flag = 1;
        for (ll j = 0; j < n; j++) {
            if (arr[j].first % p[i] != 0 and arr[j].second % p[i] != 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << p[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

void primeFactors(ll n)
{
    // Print the number of 2s that divide n
    if (n%2 == 0) {
        prime.insert(2);
    }
    while (n%2 == 0)
    {
        //printf("%d ", 2);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        if (n%i == 0) {
            prime.insert(i);
        }
        while (n%i == 0)
        {
            //printf("%d ", i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        prime.insert(n);
        //printf ("%d ", n);
}
