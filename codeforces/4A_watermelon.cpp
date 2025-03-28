// Codeforces - 4A. Watermelon
// Problem link: https://codeforces.com/problemset/problem/4/A
// Language: C++
// Difficulty: 800

#include <iostream>
using namespace std;

#define ull unsigned long long
#define ll long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    cin >> input;

    if (input == 2) {
        cout << "NO";
        return 0;
    }

    cout << ((input & 1) ? "NO" : "YES");
    return 0;
}
