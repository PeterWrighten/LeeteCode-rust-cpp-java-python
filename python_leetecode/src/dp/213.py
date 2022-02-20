#! /usr/bin/python3

class solution:
    def __init__(self, n:list[int]) -> None:
        self.nums = n
    def rob(self):
        size = len(nums)
        if size == 0:   return 0
        elif size == 1: return nums[0]
        elif size == 2: return max(nums[0], nums[1])
        return max(self.robR(nums, 0, size - 1), self.robR(nums, 1, size))

    def robR(self, nums:list[int], start:int, end:int):
        first = nums[start]
        second = max(nums[start], nums[start + 1])
        for i in range(start + 2, end):
            tmp = first
            first = second
            second = max(first, tmp + nums[i])
        return second

nums = [1,5,7,9,34,66,42]
s = solution(nums)
print(s.rob())