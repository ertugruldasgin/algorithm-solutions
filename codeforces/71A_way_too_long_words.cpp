// Codeforces - 71A. Way Too Long Words
// Problem link: https://codeforces.com/problemset/problem/71/A
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
    string str;
    cin >> t;

    while (t--) {
        cin >> str;
        if (str.length() > 10) {
            cout << str.at(0);
            cout << str.length() - 2;
            cout << str.at(str.length() - 1) << "\n";
        } else {
            cout << str << "\n";
        }
    }

    return 0;
}
