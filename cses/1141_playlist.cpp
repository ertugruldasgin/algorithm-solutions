// CSES Problem Set - 1141. Playlist
// Link: https://cses.fi/problemset/task/1141
// Language: C++
// Tags: Two Pointers, Sliding Window, Set

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vector<int> songs(n);
    for (int i = 0; i < n; i++) cin >> songs[i];

    set<int> seen;
    int i = 0, j = 0, uniqueSeq = 0;

    while (j < n) {
        while (seen.count(songs[j])) {
            seen.erase(songs[i]);
            i++;
        }
        seen.insert(songs[j]);
        uniqueSeq = max(uniqueSeq, j - i + 1);
        j++;
    }

    cout << uniqueSeq << endl;
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
    while (t--) {
        solve();
    }

    return 0;
}
