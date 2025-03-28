// Codeforces - 282A. Bit++
// Problem link: https://codeforces.com/problemset/problem/282/A
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

    int t, x = 0;
    string input;

    cin >> t;

    while (t--) {
        cin >> input;
        if (input == "++X" || input == "X++")
            x++;
        else if (input == "--X" || input == "X--")
            x--;
    }

    cout << x;
    return 0;
}
