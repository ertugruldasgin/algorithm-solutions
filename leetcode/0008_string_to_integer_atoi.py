# LeetCode - 8. String to Integer (atoi)
# Problem link: https://leetcode.com/problems/string-to-integer-atoi/
# Language: Python
# Difficulty: Medium
# Tags: String, Parsing

class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        if not s:
            return 0

        res = []
        i = 0
        sign = 1
        if s[0] == '-':
            sign = -1
            i += 1
        elif s[0] == '+':
            i += 1

        while i < len(s) and s[i].isnumeric():
            res.append(s[i])
            i += 1

        if not res:
            return 0

        num = int("".join(res)) * sign

        int_min, int_max = -2**31, 2**31 - 1
        if num < int_min:
            return int_min
        if num > int_max:
            return int_max
        
        return num
