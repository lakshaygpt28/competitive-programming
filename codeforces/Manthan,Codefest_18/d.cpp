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
const ll N = 2e5 + 10;

set < ll > graph[N];
vll depth(N);
bool visited[N];

int main() {
    fast_io();
    ll n;
    cin >> n;
    ll u,v;
    cin >> u >> v;
    graph[u].insert(0);
    graph[u].insert(v);
    graph[v].insert(u);
    ll source = u;
    vll a(n);
    for (ll i = 1; i < n-1; i++) {
        cin >> u >> v;
        graph[u].insert(v);
        graph[v].insert(u);
    }
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    queue <ll> q;
    ll node,len;
    q.push(source);
    visited[source] = true;
    depth[source] = 1;
    if (a[0] != 1) {
        cout << "No\n";
        return 0;
    }
    while (!q.empty()) {
        node = q.front(), q.pop();
        len = graph[node].size();

        for (auto el : graph[node]){
            if (!visited[el]) {
                q.push(el);
                depth[el] = depth[node] + 1;
                visited[el] = true;
                //debug(graph[node][i]);
            }
        }
    }

    // for (ll i = 1; i <= n; i++) {
    //     //debug(depth[i]);
    //     cout << depth[i] << endl;
    // }
    for (ll i = 0, j = 0; i < n-1 and j < n-1; i++) {
        len = graph[a[i]].size();
        // debug(a[i]);
        // debug(len);
        // for (auto el : graph[a[i]]) {
        //     cout << el << " ";
        // }
        // cout << endl;
        for (ll k = 0; k < len-1; k++) {
            j++;
            //debug(a[j]);
            if (graph[a[i]].find(a[j]) != graph[a[i]].end()) {
                continue;
            } else{
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";

    return 0;
}
