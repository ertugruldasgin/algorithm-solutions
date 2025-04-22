// CSES Problem Set - 1083. Missing Number
// Link: https://cses.fi/problemset/task/1083
// Language: C++

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl "\n"

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t; cin >> t;

    int sum = 0;
    for (int i = 0; i < t - 1; i++) {
        int num; cin >> num;
        sum += num;
    }

    cout << (t * (t + 1) / 2) - sum;
    return 0;
}
