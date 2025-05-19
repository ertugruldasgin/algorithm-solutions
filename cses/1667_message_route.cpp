// CSES Problem Set - 1667. Message Route
// Link: https://cses.fi/problemset/task/1667
// Language: C++
// Tags: Graphs, BFS, Shortest Path, Path Reconstruction

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

void solve() {
    int n, m; cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<bool> visited(n + 1, false);
    queue<int> q;

    q.push(1);
    visited[1] = true;

    vector<int> parent(n + 1, -1);
    while (!q.empty()) {
        int node = q.front(); q.pop();

        for (auto neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = node;
                q.push(neighbor);
            }
        }
    }

    if (!visited[n]) {
        cout << "IMPOSSIBLE";
    } else {
        vector<int> path;
        int cur = n;
        while (cur != -1) {
            path.push_back(cur);
            cur = parent[cur];
        }

        reverse(path.begin(), path.end());
        cout << path.size() << endl;
        for (int i = 0; i < path.size(); i++) {
            cout << path[i] << " ";
        }
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
