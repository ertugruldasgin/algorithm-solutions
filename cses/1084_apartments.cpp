// CSES Problem Set - 1084. Apartments
// Link: https://cses.fi/problemset/task/1084
// Language: C++
// Tags: Sorting, Two Pointers

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

void solve() {
    int n, m, k; cin >> n >> m >> k;

    vector<int> desiredNums(n);
    for (int i = 0; i < n; i++) cin >> desiredNums[i];

    vector<int> apartments(m);
    for (int i = 0; i < m; i++) cin >> apartments[i];

    sort(desiredNums.begin(), desiredNums.end());
    sort(apartments.begin(), apartments.end());

    int sold = 0, i = 0, j = 0;

    while (i < n && j < m) {
        if (abs(desiredNums[i] - apartments[j]) <= k) {
            sold++;
            i++;
            j++;
        } else if (apartments[j] < desiredNums[i] - k) {
            j++;
        } else {
            i++;
        }
    }

    cout << sold;
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
