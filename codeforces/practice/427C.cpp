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
bool visited[N];
stack < ll > s;
vll cost(N);

ll cnt;
ll Min;

void dfs1(ll node);
void dfs2(ll node);

int main() {
    fast_io();
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> cost[i];
    }
    ll m;
    cin >> m;
    ll u, v;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v;
        g[u].pb(v);
        rg[v].pb(u);
    }
    for (ll i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs1(i);
        }
    }
    for (ll i = 0; i < N; i++) {
        visited[i] = 0;
    }
    ll ans = 0;
    ll perm = 1;
    while (!s.empty()) {
        ll node = s.top();
        s.pop();
        Min = inf;
        cnt = 1;
        if (!visited[node]) {
            dfs2(node);
            ans += Min;
            // debug(node), debug(cnt);
            perm = (perm * cnt) % mod;
        }
    }
    cout << ans << " " << perm << "\n";
    return 0;
}

void dfs1(ll node) {
    visited[node] = true;
    for (auto x : g[node]) {
        if (!visited[x])
            dfs1(x);
    }
    s.push(node);
}

void dfs2(ll node) {
    visited[node] = true;
    if (Min > cost[node]) {
        Min = cost[node];
        cnt = 1;
    } else if (Min == cost[node]) {
        cnt++;
    }
    for (auto x : rg[node]) {
        if (!visited[x]) {
            dfs2(x);
        }
    }
}
