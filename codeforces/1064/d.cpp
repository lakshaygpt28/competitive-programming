/*
lakshaygpt28
Lakshay Gupta
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair < ll, ll > pll;
typedef vector < ll > vll;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 2010;

char matrix[N][N];

map < pll, bool > visited;
map < pll, vector < pll > > g;
map < pll, pll > distance;

ll cnt;

void dfs (pll node);

int main() {
    fast_io();
    ll n, m;
    cin >> n >> m;
    ll r, c;
    cin >> r >> c;
    ll x, y;
    cin >> x >> y;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            if (matrix[i][j] == '.' and c - j <= x and j - c <= y) {
                if (matrix[i - 1][j] == '.') {
                    g[{i, j}].pb({i - 1, j});
                    g[{i - 1, j}].pb({i, j});
                } if (matrix[i + 1][j] == '.') {
                    g[{i, j}].pb({i + 1, j});
                    g[{i + 1, j}].pb({i, j});
                } if (matrix[i][j - 1] == '.' and c - (j - 1) <= x and (j - 1) - c <= y) {
                    g[{i, j}].pb({i, j - 1});
                    g[{i, j - 1}].pb({i, j});
                } if (matrix[i][j + 1] == '.' and c - (j + 1) <= x and (j + 1) - c <= y) {
                    g[{i, j}].pb({i, j + 1});
                    g[{i, j + 1}].pb({i, j});
                }
            }
        }
    }
    distance[{r, c}] = {0,0};
    dfs({r, c});
    cout << cnt << endl;
    return 0;
}

void dfs (pll node) {
    visited[node] = true;
    cnt++;
    debug(cnt);
    for (auto el : g[node]) {
        // debug(el.first);
        // debug(el.second);
        cout << el.first << " " << el.second << "\n";
        // if (distance[el].first == 0 and distance[el].second == 0) {
        // }
        if (visited[el] == 0 and distance) {
            distance[el] = {distance[node].first + max(ll(0), node.second - el.second), distance[node].second + max(ll(0), el.second - node.second)}
            dfs(el);
        }
    }
}
