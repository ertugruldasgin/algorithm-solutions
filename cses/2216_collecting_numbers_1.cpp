// CSES Problem Set - 2216. Collecting Numbers
// Link: https://cses.fi/problemset/task/2216
// Language: C++
// Tags: Sorting, Index Tracking, Greedy

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
    vector<int> nums(n), pos(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        pos[nums[i]] = i;
    }

    int round = 1;
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) round++;
    }

    cout << round << endl;
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
