# LeetCode - 151. Reverse Words in a String
# Problem link: https://leetcode.com/problems/reverse-words-in-a-string/
# Language: Python
# Difficulty: Medium
# Tags: String

class Solution:
    def reverseWords(self, s: str) -> str:
        return " ".join(s.split()[::-1])
