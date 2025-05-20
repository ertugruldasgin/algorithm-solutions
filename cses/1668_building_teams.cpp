// CSES Problem Set - 1668. Building Teams
// Link: https://cses.fi/problemset/task/1668
// Language: C++
// Tags: DFS, Graph Coloring, Bipartite Check

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

bool dfs(int node, vector<vector<int>>& adj, vector<int>& color, int c) {
    color[node] = c;

    for (int neighbor : adj[node]) {
        if (color[neighbor] == 0) {
            if (!dfs(neighbor, adj, color, 3 - c)) return false;
        } else if (color[neighbor] == color[node]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n, m; cin >> n >> m;
    
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> color(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (color[i] == 0) {
            if (!dfs(i, adj, color, 1)) {
                cout << "IMPOSSIBLE" << endl;
                return;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << color[i] << " ";
    }
    cout << endl;
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
    //cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
