// CSES Problem Set - 1073. Towers
// Link: https://cses.fi/problemset/task/1073
// Language: C++
// Tags: Greedy, Multiset, Upper Bound

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

void solve() {
    int n; cin >> n;
    multiset<int> towers;

    for (int i = 0; i < n; i++) {
        int cube; cin >> cube;

        auto it = towers.upper_bound(cube);
        if (it != towers.end()) towers.erase(it);
        towers.insert(cube);
    }

    cout << towers.size() << endl;
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
