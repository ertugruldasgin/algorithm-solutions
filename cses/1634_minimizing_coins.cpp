// CSES Problem Set - 1634. Minimizing Coins
// Link: https://cses.fi/problemset/task/1634
// Language: C++
// Tags: Dynamic Programming, Coin Change (Minimum)

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

    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    vector<int> dp(x + 1, INF);
    dp[0] = 0;

    for (int value = 1; value <= x; value++) {
        for (int j = 0; j < n; j++) {
            if (value - coins[j] >= 0) {
                dp[value] = min(dp[value], dp[value - coins[j]] + 1);
            }
        }
    }

    cout << (dp[x] == INF ? -1 : dp[x]);
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
