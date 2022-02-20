class solution:
    def rob(self, nums:list[int]) -> int:
        size = len(nums)
        if size == 0:   return 0
        first = nums[0]
        if size == 1:   return first
        second = max(nums[0], nums[1])
        if size == 2:   return second
        for i in range(2, size):
            tmp = first
            first = second
            second = max(first, tmp + nums[i])
        return second

    def sol(self, nums:list[int]) -> int:
        mstval = 0
        for val in nums:
            mstval = max(val, mstval)
        sum = [0] * (mstval + 1)
        for val in nums:
            sum[val] += val
        return self.rob(sum)

s = solution()
nums = [2,6,4,7,34,98,3,2,4,5,6,7,89,5,2,5]
print(s.sol(nums))