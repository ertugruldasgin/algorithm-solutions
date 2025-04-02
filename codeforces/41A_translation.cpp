// Codeforces - 41A. Translation
// Problem link: https://codeforces.com/problemset/problem/41/A
// Language: C++
// Difficulty: 800

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define ll long long

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string word1, word2;
    cin >> word1 >> word2;

    reverse(word2.begin(), word2.end());

    if (word1 == word2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
