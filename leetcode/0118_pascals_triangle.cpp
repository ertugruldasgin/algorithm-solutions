// LeetCode - 118. Pascal's Triangle
// Problem link: https://leetcode.com/problems/pascals-triangle/
// Language: C++
// Difficulty: Easy
// Tags: Dynamic Programming, Array, Math

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for (int i = 0; i < numRows; i++) {
            res[i].resize(i + 1, 1);
            for (int j = 1; j < i; j++) {
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
            }
        }
        return res;
    }
};
