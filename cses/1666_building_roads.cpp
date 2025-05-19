// CSES Problem Set - 1666. Building Roads
// Link: https://cses.fi/problemset/task/1666
// Language: C++
// Tags: Graphs, DFS, Connected Components

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

void dfs(int node, vector<bool>& visited, vector<vector<int>>& adj) {
    visited[node] = true;
    for (auto neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, adj);
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(n + 1, false);
    vector<int> roots;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            roots.push_back(i);
            dfs(i, visited, adj);
        }
    }

    cout << roots.size() - 1 << endl;
    for (int i = 0; i + 1 < roots.size(); i++) {
        cout << roots[i] << " " << roots[i + 1] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
