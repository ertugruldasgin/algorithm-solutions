// CSES Problem Set - 1636. Coin Combinations II
// Link: https://cses.fi/problemset/task/1636
// Language: C++
// Tags: Dynamic Programming, Coin Change (Unique Combinations)

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

    vector<int> dp(x + 1, 0);
    dp[0] = 1;

    for (int j = 0; j < n; j++) {
        for (int value = 1; value <= x; value++) {
            if (value - coins[j] >= 0)
                dp[value] = (dp[value] + dp[value - coins[j]]) % MOD;
        }
    }

    cout << dp[x];
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
