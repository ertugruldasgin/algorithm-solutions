// Codeforces - 231A. Team
// Problem link: https://codeforces.com/problemset/problem/231/A
// Language: C++
// Difficulty: 800

#include <iostream>
using namespace std;

#define ull unsigned long long
#define ll long long

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    int count = 0;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            ++count;
    }

    cout << count;
    return 0;
}
