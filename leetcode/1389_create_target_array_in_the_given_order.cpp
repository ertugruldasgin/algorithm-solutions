// LeetCode - 1389. Create Target Array in the Given Order
// Problem link: https://leetcode.com/problems/create-target-array-in-the-given-order/
// Language: C++
// Difficulty: Easy
// Tags: Array, Simulation

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for (int i = 0; i < nums.size(); i++)
            target.insert(target.begin() + index[i], nums[i]);
        return target;
    }
};
