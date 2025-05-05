// CSES Problem Set - 1621. Distinct Numbers
// Link: https://cses.fi/problemset/task/1621
// Language: C++

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

    set<int> seen;
    while (n--) {
        int num; cin >> num;
        seen.insert(num);
    }

    cout << seen.size();
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
