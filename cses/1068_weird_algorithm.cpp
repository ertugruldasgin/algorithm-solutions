// CSES Problem Set - 1068. Weird Algorithm
// Link: https://cses.fi/problemset/task/1068
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
    
    int n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
        (n % 2 == 0) ? (n = n / 2) : (n = n * 3 + 1);
        cout << n << " ";
    }

    return 0;
}
