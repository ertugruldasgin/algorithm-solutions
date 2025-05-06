// CSES Problem Set - 1619. Restaurant Customers
// Link: https://cses.fi/problemset/task/1619
// Language: C++
// Tags: Sorting, Sweep Line, Event Processing

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
    // n customers
    // a - arrival time, b - leaving time

    vector<pair<int, int>> events;

    while (n--) {
        int start, end; cin >> start >> end;
        events.push_back({start, 1});  // arrival
        events.push_back({end, -1});   // leaving
    }

    sort(events.begin(), events.end());

    int customers = 0, maxCustomers = 0;

    for (int i = 0; i < events.size(); i++) {
        customers += events[i].second;
        maxCustomers = max(customers, maxCustomers);
    }

    cout << maxCustomers << endl;
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
