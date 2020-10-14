class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 0: return 0
        if len(nums) < 3:
            return max(nums)
        res = [0]*3
        res [0] = nums[0]
        res[1] = max(nums[0],nums[1])
        for i in range(2,len(nums)):
            res[2] =max(res[1],nums[i]+res[0])
            res[0] = res[1]
            res[1] = res [2]
        return res[2]
    

#################################################################################################################

class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 0: return 0
        if len(nums) < 3:
            return max(nums)
        res = [0]*len(nums)
        res [0] = nums[0]
        res[1] = max(nums[0],nums[1])
        for i in range(2,len(nums)):
            res[i] =max(res[i-1],nums[i]+res[i-2])
        return res[-1]