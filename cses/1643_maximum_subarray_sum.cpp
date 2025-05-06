// CSES Problem Set - 1643. Maximum Subarray Sum
// Link: https://cses.fi/problemset/task/1643
// Language: C++
// Tags: Kadane's Algorithm, Dynamic Programming

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
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int best = -INF, past = 0;
    for (int i = 0; i < n; i++) {
        if (past + nums[i] >= nums[i]) {
            past += nums[i];
        } else {
            past = nums[i];
        }
        best = max(best, past);
    }

    cout << best;
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
