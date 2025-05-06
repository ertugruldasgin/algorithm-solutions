// CSES Problem Set - 1640. Sum of Two Values
// Link: https://cses.fi/problemset/task/1640
// Language: C++
// Tags: Hashing, Map, Two Sum

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

void solve() {
    int n, x; cin >> n >> x;

    map<int, int> indices;

    for (int i = 0; i < n; i++) {
        int val; cin >> val;

        if (indices.count(x - val)) {
            cout << i + 1 << " " << indices[x - val] << endl;
            return;
        }

        indices[val] = i + 1;
    }

    cout << "IMPOSSIBLE";
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
