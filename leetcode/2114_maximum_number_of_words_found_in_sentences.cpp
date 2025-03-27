// LeetCode - 2114. Maximum Number of Words Found in Sentences
// Problem link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
// Language: C++
// Difficulty: Easy
// Tags: Array, String

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maximum = 0;
        for (auto i : sentences) {
            istringstream iss(i);
            string ans;
            int c = 0;
            while (iss >> ans) {
                c++;
            }
            maximum = max(maximum, c);
        }
        return maximum;
    }
};
