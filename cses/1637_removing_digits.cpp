// CSES Problem Set - 1637. Removing Digits
// Link: https://cses.fi/problemset/task/1637
// Language: C++
// Tags: Dynamic Programming, Digit DP

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

    vector<int> dp(n + 1, INF);
    dp[0] = 0;

    for (int value = 1; value <= n; value++) {
        int temp = value;
        while (temp > 0) {
            dp[value] = min(dp[value], dp[value - temp % 10] + 1);
            temp /= 10;
        }
    }

    cout << dp[n];
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
