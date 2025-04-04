// LeetCode - 70. Climbing Stairs
// Problem link: https://leetcode.com/problems/climbing-stairs/
// Language: C++
// Difficulty: Easy
// Tags: Dynamic Programming, Fibonacci

class Solution {
public:
    int climbStairs(int n) {
        int one = 1, two = 1, temp;
        for (int i = 0; i < n - 1; i++) {
            temp = one;
            one = one + two;
            two = temp;
        }
        return one;
    }
};
