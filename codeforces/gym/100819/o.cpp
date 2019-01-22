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
const ll N = 3e5 + 10;

vector < pll > graph [N];
bool visited[N];
// void bfs(ll node);
ll depth[N], bottom_right, top_left;
ll table[501][501];
void dijkstra(ll n, ll k);
ll ans;

int main() {
    fast_io();
    ll n, m;
    cin >> n >> m;
    // for (ll i = 0; i < N; i++) {
    //     depth[i] = inf;
    // }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            table[i][j] = ch - '0';
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (j - table[i][j] >= 0) {
                graph[i * m + j].pb({1, i * m + j - table[i][j]});
                // graph[i * m + j - table[i][j]].pb(i * m + j);
            } if (j + table[i][j] < m) {
                graph[i * m + j].pb({1, i * m + j + table[i][j]});
                // graph[i * m + j + table[i][j]].pb(i * m + j);
            } if (i + table[i][j] < n) {
                graph[i * m + j].pb({1, (i + table[i][j]) * m + j});
                // graph[(i + table[i][j]) * m + j].pb(i * m + j);
            } if (i - table[i][j] >= 0) {
                graph[i * m + j].pb({1, (i - table[i][j]) * m + j});
                // graph[(i - table[i][j]) * m + j].pb(i * m + j);
            }
        }
    }
    top_left = 0, bottom_right = n*m - 1;
    // bfs(top_left);
    dijkstra(top_left, bottom_right);
    if (visited[bottom_right]) {
        cout << ans << endl;
    } else cout << "IMPOSSIBLE" << endl;


    return 0;
}

// void bfs(ll node) {
//     queue < ll > q;
//     depth[node] = 0;
//     q.push(node);
//     while (!q.empty()) {
//         node = q.front();
//         q.pop();
//         if (!visited[node]) {
//             visited[node] = true;
//             for (auto el : graph[node]) {
//                 if(!visited[el]) {
//                     q.push(el);
//                     if (depth[el] > depth[node] + 1)
//                         depth[el] = depth[node] + 1;
//                     if (el == bottom_right) {
//                         visited[bottom_right] = true;
//                         return;
//                     }
//                 }
//             }
//         }
//     }
// }

void dijkstra( ll source, ll end) {
    vll distance(N), previous(N);
    for (ll i = 1; i < N; i++) {
        distance[i] = inf;
        previous[i] = 0;
        visited[i] = false;
    }
    priority_queue < pll , std::vector< pll >, std::greater< pll > > mnheap;	// mnheap.push(), mnheap.top(), mnheap.pop()
    distance[source] = 0;
    mnheap.push({distance[source], source});

    while (!mnheap.empty()) {
        ll node,len;
        node = mnheap.top().second,mnheap.pop();
        if (visited[node]) {
            continue;
        }
        visited[node] = true;
        len = graph[node].size();
        for (ll i = 0; i < len; i++) {
            ll new_distance;
            new_distance = distance[node] + graph[node][i].first;
            if (new_distance < distance[graph[node][i].second]) {
                distance[graph[node][i].second] = new_distance;
                previous[graph[node][i].second] = node;
                mnheap.push({distance[graph[node][i].second],graph[node][i].second});
            }

        }
    }
    if (visited[bottom_right]) {
        ans = distance[bottom_right];
    }
}
