// CSES Problem Set - 1090. Ferris Wheel
// Link: https://cses.fi/problemset/task/1090
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
    // Each gondola can have 1 or 2 children
    int n, x; cin >> n >> x;

    vector<int> child(n);
    for (int i = 0; i < n; i++) cin >> child[i];

    sort(child.begin(), child.end());

    int i = 0, j = n - 1, gondola = 0;
    while (i <= j) {
        if (i == j) {
            gondola++;
            break;
        }

        if (child[i] + child[j] <= x) {
            i++;
        }

        j--;
        gondola++;
    }

    cout << gondola;
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
