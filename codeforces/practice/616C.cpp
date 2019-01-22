/*
lakshaygpt28
Lakshay Gupta
*/

#include <bits/stdc++.h>
#include <cstdio>
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
const ll N = 1010;

char s[N][N];
ll visited[N][N];
vector < pll > source;
ll group[N * N];

ll cnt;
ll n, m;

void dfs (ll i, ll j);

int main() {
    cin >> n >> m;
    for (ll i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }
    cnt = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (s[i][j] == '*') {
                source.pb({i, j});
            } else if (!visited[i][j] and s[i][j] == '.') {
                cnt++;
                dfs(i, j);
            }
        }
    }
    for (auto x : source) {
        ll ans = 0;
        ll i = x.first, j = x.second;
        if (i - 1 >= 0 and s[i - 1][j] == '.') {
            ans += group[visited[i - 1][j]];
        } if (i + 1 < n and s[i + 1][j] == '.') {
            if (visited[i + 1][j] != visited[i - 1][j]) {
                ans += group[visited[i + 1][j]];
            }
        } if (j - 1 >= 0 and s[i][j - 1] == '.') {
            if (visited[i + 1][j] != visited[i][j - 1] and visited[i][j - 1] != visited[i - 1][j]) {
                ans += group[visited[i][j - 1]];
            }
        } if (j + 1 < m and s[i][j + 1] == '.') {
            if (visited[i + 1][j] != visited[i][j + 1] and visited[i][j + 1] != visited[i - 1][j] and visited[i][j - 1] != visited[i][j + 1]) {
                ans += group[visited[i][j + 1]];
            }
        }
        ans++;
        s[i][j] = char(ans % 10 + 48);
    }
    for (ll i = 0; i < n; i++) {
        puts(s[i]);
    }
    return 0;
}

void dfs (ll i, ll j) {
    visited[i][j] = cnt;
    group[cnt]++;
    if (i - 1 >= 0 and s[i - 1][j] == '.') {
        if (visited[i - 1][j] == 0) {
            dfs(i - 1, j);
        }
    } if (i + 1 < n and s[i + 1][j] == '.') {
        if (visited[i + 1][j] == 0) {
            dfs(i + 1, j);
        }
    } if (j - 1 >= 0 and s[i][j - 1] == '.') {
        if (visited[i][j - 1] == 0) {
            dfs(i, j - 1);
        }
    } if (j + 1 < m and s[i][j + 1] == '.') {
        if (visited[i][j + 1] == 0) {
            dfs(i, j + 1);
        }
    }

}
// NEVER use MAP FOR GRAPH BC 8 wrong submission TLE!!
