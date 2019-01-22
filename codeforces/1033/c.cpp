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

vll g[N];
vll rg[N];
vll source;

bool winning[N];
bool lossing[N];
bool visited[N];

vll outdegree(N);

void dfs(ll node);

int main() {
    fast_io();
    ll n;
    cin >> n;
    vll a(n + 1);
    vector < pll > p(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
        p[i].first = a[i];
        p[i].second = i;
    }
    sort(p.begin() + 1, p.end());
    for (ll i = n; i > 0; i--) {
        for (ll j = p[i].second + i; j <= n; j += i) {
            if (a[j] > i) {
                g[i].pb(a[j]);
                rg[a[j]].pb(i);
                outdegree[i]++;
            }
        }
        for (ll j = p[i].second - i; j > 0; j -= p[i].first) {
            if (a[j] > i) {
                g[i].pb(a[j]);
                rg[a[j]].pb(i);
                outdegree[i]++;
            }
        }
    }
    for (ll i = n; i > 0; i--) {
        if (g[i].size() == 0) {
            lossing[i] = 1;
            source.pb(i);
        }
    }
    for (auto x : source) {
        if (!visited[x]) {
            dfs(x);
        }
    }
    for (ll i = 1; i <= n; i++) {
        if (winning[a[i]]) {
            cout << "A";
        } else {
            cout << "B";
        }
    }
    cout << "\n";
    return 0;
}

void dfs(ll node) {
    visited[node] = true;
    for (auto x : rg[node]) {
        if (!visited[x]) {
            if (lossing[node]) {
                winning[x] = 1;
            }
            else if (--outdegree[x] == 0) {
                lossing[x] = 1;
            } else {
                continue;
            }
            dfs(x);
        }
    }
}
