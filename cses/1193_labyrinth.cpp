// CSES Problem Set - 1193. Labyrinth
// Link: https://cses.fi/problemset/task/1193
// Language: C++
// Tags: BFS, Shortest Path, Grid Traversal

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
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    pair<int, int> start, end;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'A') {
                start = {i, j};
            }
            if (grid[i][j] == 'B') {
                end = {i, j};
            }
        }
    }

    char dir[] = {'U', 'D', 'L', 'R'};
    int dx[]   = {-1,  1,  0,  0};
    int dy[]   = { 0,  0, -1,  1};

    vector<vector<char>> directions(n, vector<char>(m));
    q.push(start);
    visited[start.first][start.second] = true;
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] != '#') {
                visited[nx][ny] = true;
                directions[nx][ny] = dir[d];
                q.push({nx, ny});
            }
        }
    }
    
    if (visited[end.first][end.second]) {
    string path;
    pair<int, int> cur = end;

    while (cur != start) {
        char d = directions[cur.first][cur.second];
        path += d;

        if (d == 'L') cur.second += 1;
        if (d == 'R') cur.second -= 1;
        if (d == 'D') cur.first -= 1;
        if (d == 'U') cur.first += 1;
    }

    reverse(path.begin(), path.end());
    cout << "YES" << endl << path.size() << endl << path << endl;

    } else {
        cout << "NO";
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
    //cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
