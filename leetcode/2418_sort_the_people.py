# LeetCode - 2418. Sort the People
# Problem link: https://leetcode.com/problems/sort-the-people/
# Language: Python
# Difficulty: Easy
# Tags: Array, Sorting, HashMap

class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        dictionary = {}
        for i, height in enumerate(heights):
            dictionary[height] = names[i]

        print(dictionary.keys())
        sorted_dict = sorted(dictionary.keys(), reverse=True)

        res = []
        for height in sorted_dict:
            res.append(dictionary[height])

        return res
