class Solution:
    def rob(self, nums: List[int]) -> int:
        def solve(num):
            res = [0]*len(num)
            res [0] = num[0]
            res[1] = max(num[0],num[1])
            for i in range(2,len(num)):
                res[i] =max(res[i-1],num[i]+res[i-2])
            return res[-1]
        if len(nums) == 0: return 0
        if len(nums) <3: return max(nums)
        return max(solve(nums[:-1]),solve(nums[1:]))