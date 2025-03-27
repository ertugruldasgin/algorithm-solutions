// LeetCode - 1470. Shuffle the Array
// Problem link: https://leetcode.com/problems/shuffle-the-array/
// Language: C++
// Difficulty: Easy
// Tags: Array, Simulation

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec;
        for (int i = 0; i < n; i++) {
            vec.push_back(nums[i]);
            vec.push_back(nums[i + n]);
        }
        return vec;
    }
};
