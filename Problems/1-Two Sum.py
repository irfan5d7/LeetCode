class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        hash = {}
        for i in range(n):
            rem = target - nums[i]
            if rem in hash:
                return [i,hash[rem]]
            else:
                hash[nums[i]] = i
        