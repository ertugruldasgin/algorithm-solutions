// CSES Problem Set - 1629. Movie Festival
// Link: https://cses.fi/problemset/task/1629
// Language: C++
// Tags: Greedy, Sorting, Interval Scheduling

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

bool comparison(pair<int,int> &a, pair<int,int> &b) {
    return (a.second < b.second);
}

void solve() {
    int n; cin >> n;

    vector<pair<int, int>> intervals(n);

    for (int i = 0; i < n; i++) cin >> intervals[i].first >> intervals[i].second;

    sort(intervals.begin(), intervals.end(), comparison);

    int i = 0;
    int endOfLastMovie = -1;
    int movies = 0;

    while (i < n) {
        if (intervals[i].first >= endOfLastMovie) {
            movies++;
            endOfLastMovie = intervals[i].second;
        }
        i++;
    }

    cout << movies << endl;
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
