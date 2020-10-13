class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        if len(nums) == 0: return 0
        res = float("-inf")
        l = 1
        for i in range(1,len(nums)):
            if nums[i] > nums[i-1]:
                l+=1
            else:
                res = max(res,l)
                l = 1
        res = max(res,l)
        return res