#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long

const int MAX = 2e5;
const int MOD = 1e9+7;
const int INF = 1e18;

signed main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test;
    cin >> test;

    string row;
    cin >> row;

    int countA = 0, countD = 0;
    for (int i = 0; i < test; i++) {
        row[i] == 'A' ? countA++ : countD++;
    }
    
    if (countA > countD) {
        cout << "Anton";
    } else if (countD > countA) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }

    return 0;
}
