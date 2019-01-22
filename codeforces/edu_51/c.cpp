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

ll freq[101];

int main() {
    fast_io();
    ll n;
    cin >> n;
    vll s(n);
    bool seen[n] = {false};
    for (ll i = 0; i < n; i++) {
        cin >> s[i];
        freq[s[i]]++;
    }
    ll nice_number = 0;
    ll not_nice = 0;
    ll not_nice_number;
    for (ll i = 1; i <= 100; i++) {
        if (freq[i] == 1) {
            nice_number++;
        }
        if (freq[i] > 2) {
            not_nice++;
            not_nice_number = i;
        }
    }
    string ans;
    vll str(n);
    if ((nice_number&1) and not_nice == 0) {
        cout << "NO" << endl;
        return 0;
    } else if ((nice_number&1) and not_nice != 0) {
        cout << "YES" << endl;
        bool x = 0;
        for (ll i = 0, j = 0; i < n; i++) {
            if (freq[s[i]] == 1 and j < nice_number/2) {
                str[i] = 0;
                j++;
            } else if (x == 0  and s[i] == not_nice_number) {
                str[i] = 0;
                x = 1;
            } else {
                str[i] = 1;
            }
        }
        for (ll i = 0; i < n; i++) {
            if (str[i] == 0) {
                ans += 'A';
            } else {
                ans += 'B';
            }
        }
        cout << ans << endl;
        return 0;
    } else {
        bool flag = 0;
        for (ll i = 0; i < n; i++) {
            if (freq[s[i]] == 1) {
                if (flag) {
                    ans += 'A';
                    flag = 0;
                } else {
                    ans += 'B';
                    flag = 1;
                }
            } else {
                ans += 'A';
            }
        }
    }
    cout << "YES" << endl;
    cout << ans << endl;

    return 0;
}
