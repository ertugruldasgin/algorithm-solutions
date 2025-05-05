// CSES Problem Set - 1091. Concert Tickets
// Link: https://cses.fi/problemset/task/1091
// Language: C++
// Tags: Sorting, Multiset, Binary Search (upper_bound)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

void solve() {
    int n, m; cin >> n >> m;

    multiset<int> tickets;
    while (n--) {
        int price; cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++) {
        int money; cin >> money;

        auto it = tickets.upper_bound(money);

        if (it == tickets.begin()) {
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            tickets.erase(it);
        }
    }
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
