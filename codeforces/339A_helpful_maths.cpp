// Codeforces - 339A. Helpful Maths
// Problem link: https://codeforces.com/problemset/problem/339/A
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

    string input;
    cin >> input;

    vector<int> numbers;
    for (int i = 0; i < input.length(); i += 2)
        numbers.push_back(input[i] - '0');

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1)
            cout << "+";
    }

    return 0;
}
